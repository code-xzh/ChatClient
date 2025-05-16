#include "datacenter.h"

namespace model {

DataCenter *DataCenter::_dataCenter=nullptr;

DataCenter *DataCenter::getInstance()
{
    if(_dataCenter==nullptr)
        _dataCenter=new DataCenter();
    return _dataCenter;
}

DataCenter::DataCenter()
{
    _memberList=new QHash<QString,QList<UserInfo>>();
    _recentMessages=new QHash<QString,QList<Message>>();
    _unreadMessagesCount=new QHash<QString,int>();
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

}//end model
