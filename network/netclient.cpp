#include "netclient.h"

#include <QNetworkReply>
#include <QUuid>

#include "../model/data.h"
#include "../model/datacenter.h"

namespace network{

NetClient::NetClient(model::DataCenter *dataCenter)
    :_dataCenter(dataCenter)
{
    initWebsocket();
}

void NetClient::ping()
{
    QNetworkRequest httpReq;
    httpReq.setUrl(QUrl(HTTP_URL+"/ping"));

    QNetworkReply* httpResp=_httpClient.get(httpReq);
    connect(httpResp,&QNetworkReply::finished,this,[=](){
        //这里边，说明响应回来了
        if(httpResp->error()!=QNetworkReply::NoError)
        {
            LOG()<<"HTTP 请求失败!"<<httpResp->errorString();
            httpResp->deleteLater();
            return;
        }
        //获取相应body
        QByteArray body=httpResp->readAll();
        LOG()<<"响应内容："<<body;
        httpResp->deleteLater();
    });
}

void NetClient::initWebsocket()
{
    //1.准备好信号槽
    connect(&_websocketClient,&QWebSocket::connected,this,[=](){
        LOG()<<"websocket 连接成功！";
        //连接成功之后发送身份认证
        sendAuth();
    });

    connect(&_websocketClient,&QWebSocket::disconnected,this,[=](){
        LOG()<<"websocket 连接断开！";
    });

    connect(&_websocketClient,&QWebSocket::errorOccurred,this,[=](QAbstractSocket::SocketError error){
        LOG()<<"websocket 连接出错！"<<error;
    });

    connect(&_websocketClient,&QWebSocket::textMessageReceived,this,[=](const QString& message){
        LOG()<<"websocket 收到文本消息！"<<message;
    });

    connect(&_websocketClient,&QWebSocket::binaryMessageReceived,this,[=](const QByteArray& byteArray){
        LOG()<<"websocket 收到二进制消息！"<<byteArray.length();
    });

    //2.和服务器建立连接
    _websocketClient.open(QUrl(WEBSOCKET_URL));
}

void NetClient::sendAuth()
{
    castle_im::ClientAuthenticationReq req;
    req.setRequestId(makeRequestId());
    req.setSessionId(_dataCenter->getLoginSessionId());
    QByteArray body=req.serialize(&_serializer);
    _websocketClient.sendBinaryMessage(body);
    LOG()<<"websocket身份认证 requestId="<<req.requestId()<<",loginSessionId="<<req.sessionId();
}

QString NetClient::makeRequestId()
{
    //确保每个请求id都是不重复的
    //通过uuid实现上述效果
    return "R"+QUuid::createUuid().toString().sliced(25,12);
}

//具体的网络通信
void NetClient::getMyself(const QString &loginSessionId)
{
    // 1.构造出http请求body部分
    castle_im::GetUserInfoReq req;
    req.setRequestId(makeRequestId());
    req.setSessionId(loginSessionId);
    QByteArray body=req.serialize(&_serializer);
    LOG()<<"获取个人信息 发送请求 requestId"<<req.requestId()<<",loginSessiomId"<<loginSessionId;

    //2.构造出http请求，并发送出

    QNetworkReply* httpResp=senHttpRequest("/service/user/get_user_info",body);

    //3.通过信号，获取到当前响应
    connect(httpResp,&QNetworkReply::finished,this,[=](){
        //3.1处理响应对象
        bool ok=false;
        QString reason;
        auto resp=handleHttpResponse<castle_im::GetUserInfoRsp>(httpResp,&ok,&reason);

        //3.2判定响应是否正确
        if(!ok)
        {
            LOG()<<"获取个人信息出错！requestId="<<req.requestId()<<"reason="<<reason;
            return;
        }

        //3.3把响应的数据，保存到DataCenter中
        _dataCenter->resetMyself(resp);

        //3.4通知调用逻辑，响应以及处理完了,仍然通过信号槽
        emit _dataCenter->getMyselfDone();

        //3.5打印信息
        LOG()<<"获取个人信息 响应处理完毕！requestId="<<req.requestId();

    });
}

//通过这个函数，把发送的http请求进行封装
QNetworkReply *NetClient::senHttpRequest(const QString &apiPath, const QByteArray &body)
{
    //2.构造出http请求，并发送出去
    QNetworkRequest httpReq;
    httpReq.setUrl(QUrl(HTTP_URL+apiPath));
    httpReq.setHeader(QNetworkRequest::ContentTypeHeader,"application/x-protobuf");

    QNetworkReply* httpResp=_httpClient.post(httpReq,body);
    return httpResp;
}

void NetClient::getFriendList(const QString &loginSessionId)
{
    //1.通过protobuf构造body
    castle_im::GetFriendListReq req;
    req.setRequestId(makeRequestId());
    req.setSessionId(loginSessionId);
    QByteArray body=req.serialize(&_serializer);
    LOG()<<"获取好友列表 发送请求 requestId="<<req.requestId()<<",loginSessionId="<<req.sessionId();

    //2.发送http请求
    QNetworkReply* httpResp=this->senHttpRequest("/service/friend/get_friend_list",body);

    //3.处理响应
    connect(httpResp,&QNetworkReply::finished,this,[=](){
        bool ok=false;
        QString reason;
        auto friendListResp=this->handleHttpResponse<castle_im::GetFriendListRsp>(httpResp,&ok,&reason);

        //判断相应是否正确
        if(!ok)
        {
            LOG()<<"获取好友列表 失败！ requestId="<<req.requestId()<<",reason="<<reason;
            return;
        }

        //把结果保存到DataCenter中
        _dataCenter->resetFriendList(friendListResp);

        //发送信号，通知完成
        emit _dataCenter->getFriendListDone();
    });
}

}//end network
