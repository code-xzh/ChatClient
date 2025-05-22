#include "netclient.h"

#include <QNetworkReply>
#include "../model/data.h"

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
    connect(&_websocketClient,&QWebSocket::connected,[=](){
        LOG()<<"websocket 连接成功！";
    });

    connect(&_websocketClient,&QWebSocket::disconnected,[=](){
        LOG()<<"websocket 连接断开！";
    });

    connect(&_websocketClient,&QWebSocket::errorOccurred,[=](QAbstractSocket::SocketError error){
        LOG()<<"websocket 连接出错！"<<error;
    });

    connect(&_websocketClient,&QWebSocket::textMessageReceived,[=](const QString& message){
        LOG()<<"websocket 收到文本消息！"<<message;
    });

    connect(&_websocketClient,&QWebSocket::binaryMessageReceived,[=](const QByteArray& byteArray){
        LOG()<<"websocket 收到二进制消息！"<<byteArray.length();
    });

    //2.和服务器建立连接
    _websocketClient.open(WEBSOCKET_URL);
}

}//end network
