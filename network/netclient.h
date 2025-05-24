#ifndef NETCLIENT_H
#define NETCLIENT_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QWebSocket>
#include <QProtobufSerializer>
#include <QNetworkReply>

//避免循环包含，使用前置声明代替包含头文件
namespace model{
    class DataCenter;
}

namespace network{

class NetClient : public QObject
{
    Q_OBJECT
private:
    //http和websocket的ip和端口
    const QString HTTP_URL="http://127.0.0.1:8000";
    const QString WEBSOCKET_URL="ws://127.0.0.1:8001/ws";
public:
    NetClient(model::DataCenter* dataCenter);
    //验证网络连通
    void ping();

    //初始化websocket
    void initWebsocket();

    //发送身份认证请求
    void sendAuth();

    //生成请求id
    static QString makeRequestId();

    void getMyself(const QString& loginSessionId);

    //封装请求的逻辑
    QNetworkReply* senHttpRequest(const QString& apiPath,const QByteArray& body);

    //封装处理相应的逻辑
    //不同api，返回pb对象结构不同，使用模板
    //ok，reason是输入输出型参数，返回的是是否成功，以及失败的原因
    template<typename T>
    std::shared_ptr<T> handleHttpResponse(QNetworkReply* httpResp,bool* ok,QString* reason)
    {
        //1.判定http层面上是否出错
        if(httpResp->error()!=QNetworkReply::NoError)
        {
            *ok=false;
            *reason=httpResp->errorString();
            httpResp->deleteLater();
            return std::shared_ptr<T>();
        }

        //2.拿到当前响应body
        QByteArray respBody=httpResp->readAll();

        //3.对body反序列化
        std::shared_ptr<T> respObj=std::make_shared<T>();
        respObj->deserialize(&_serializer,respBody);

        //4判定业务上是否出错，//会出错，json解析错误，涉及到savafile
        if(!respObj->success())
        {
            *ok=false;
            *reason=respObj->errmsg();
            httpResp->deleteLater();
            return std::shared_ptr<T>();
        }

        //5.释放httpResp对象
        httpResp->deleteLater();
        *ok=true;
        return respObj;
    }

private:
    model::DataCenter* _dataCenter;

    QNetworkAccessManager _httpClient;
    QWebSocket _websocketClient;

    //序列化器
    QProtobufSerializer _serializer;

signals:
};

}//end network

#endif // NETCLIENT_H
