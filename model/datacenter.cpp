#include "datacenter.h"

#include <QStandardPaths>
#include <QFile>
#include <QDir>
#include <QJsonObject>
#include <QJsonDocument>

namespace model {

DataCenter *DataCenter::_dataCenter=nullptr;

DataCenter *DataCenter::getInstance()
{
    if(_dataCenter==nullptr)
        _dataCenter=new DataCenter();
    return _dataCenter;
}

DataCenter::DataCenter():_netClient(this)
{
    _memberList=new QHash<QString,QList<UserInfo>>();
    _recentMessages=new QHash<QString,QList<Message>>();
    _unreadMessagesCount=new QHash<QString,int>();

    //加载数据
    loadDataFile();
}

DataCenter::~DataCenter()
{
    delete _myself;
    delete _friendList;
    delete _chatSessionList;
    delete _memberList;
    delete _applyList;
    delete _recentMessages;
    delete _unreadMessagesCount;
    delete _searchUserResult;
    delete _searchMessageResult;
}

void DataCenter::initDataFile()
{
    //构造出文件，使用appData存储文件
    QString basePath=QStandardPaths::writableLocation(QStandardPaths::AppDataLocation)+"/ChatClient";
    QString filePath=basePath+"ChatClient.json";

    QDir dir;
    if(!dir.exists())
    {
        dir.mkpath(basePath);
    }

    //把文件创建出来
    //写方式打开
    QFile file(filePath);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        LOG()<<"打开文件失败！"<<file.errorString();
        return;
    }

    //打开成功
    QString data="{\n\n}";
    file.write(data.toUtf8());
    file.close();
}

void DataCenter::saveDataFile()
{
    //构造出文件，使用appData存储文件
    QString filePath=QStandardPaths::writableLocation(QStandardPaths::AppDataLocation)+"ChatClient.json";

    //把文件创建出来
    //写方式打开
    QFile file(filePath);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        LOG()<<"打开文件失败！"<<file.errorString();
        return;
    }

    //按照json格式写入
    QJsonObject jsonObj;
    jsonObj["loginSessionId"]=_loginSessionId;

    QJsonObject jsonUnread;
    for(auto it=_unreadMessagesCount->begin();it!=_unreadMessagesCount->end();++it)
    {
        jsonUnread[it.key()]=it.value();
    }
    jsonObj["unread"]=jsonUnread;

    //写入文件
    QJsonDocument jsonDoc(jsonObj);
    QString s=jsonDoc.toJson();
    file.write(s.toUtf8());

    file.close();
}

//加载文件，在datacenter被实例化的时候，执行
void DataCenter::loadDataFile()
{
    //确保在加载之前，对文件进行初始化
    QString filePath=QStandardPaths::writableLocation(QStandardPaths::AppDataLocation)+"ChatClient.json";
    QFileInfo fileInfo(filePath);
    if(fileInfo.exists())
        initDataFile();

    QFile file(filePath);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        LOG()<<"打开文件失败！"<<file.errorString();
        return;
    }

    //读取文件内容，解析为qjson对象
    QJsonDocument jsonDoc=QJsonDocument::fromJson(file.readAll());
    if(jsonDoc.isNull())
    {
        LOG()<<"解析Json文件失败！Json文件格式有误！";
        file.close();
        return;
    }

    QJsonObject jsonObj=jsonDoc.object();
    this->_loginSessionId=jsonObj["loginSessionId"].toString();
    LOG()<<"loginSessionId="<<_loginSessionId;

    this->_unreadMessagesCount->clear();
    QJsonObject jsonUnread=jsonObj["unread"].toObject();
    for(auto it=jsonUnread.begin();it!=jsonUnread.end();++it)
    {
        this->_unreadMessagesCount->insert(it.key(),it.value().toInt());
    }

    file.close();
}

}//end model
