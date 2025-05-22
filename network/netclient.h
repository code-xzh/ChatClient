#ifndef NETCLIENT_H
#define NETCLIENT_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QWebSocket>
#include <QProtobufSerializer>

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

    void ping();
    void initWebsocket();

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
