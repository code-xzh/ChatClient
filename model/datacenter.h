#ifndef DATACENTER_H
#define DATACENTER_H

#include <QWidget>
#include "data.h"

#include "../network/netclient.h"


namespace model {

class DataCenter : public QObject
{
    Q_OBJECT
public:
    static DataCenter* getInstance();

private:
    DataCenter();
    ~DataCenter();

    static DataCenter*  _dataCenter;

private:
    //要管理的数据
    QString _loginSessionId="";//登录会话id
    UserInfo* _myself=nullptr;//当前用户信息
    QList<UserInfo>* _friendList=nullptr;//好友列表,指针更容易表示无效值
    QList<ChatSessionInfo>* _chatSessionList=nullptr;//会话列表
    QString _currentChatSessionId="";//记录当前选中的会话
    QHash<QString,QList<UserInfo>>* _memberList=nullptr;//记录会话中有哪些成员(主要针对群聊),key:chatSessionId,value:成员列表
    QList<UserInfo>* _applyList=nullptr;//待处理的好友申请列表
    QHash<QString,QList<Message>>* _recentMessages=nullptr;//每个会话最近消息列表,key:chatSessionId,value:消息列表
    QHash<QString,int>* _unreadMessagesCount=nullptr;//每个会话未读消息个数,key:chatSessionId,value:未读消息个数
    QList<UserInfo>* _searchUserResult=nullptr;//用户的好友搜索结果
    QList<Message>* _searchMessageResult=nullptr;//保存历史消息搜索结果
    QString _currentVertifyCodeId;//短信验证码的验证id

    //让datacenter持有netclient实例
    network::NetClient _netClient;

public:
    //初始化数据文件
    void initDataFile();

    //存储数据到文件中
    void saveDataFile();

    //从数据文件中加载数据到内存
    void loadDataFile();
signals:
};

}//end model

#endif // DATACENTER_H
