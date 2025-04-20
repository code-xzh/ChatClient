#pragma once

#include <QString>
#include <Qicon>

namespace model{

/////////////////////////////////
/// 用户信息
/////////////////////////////////

class UserInfo{
public:
    QString _userId;//编号
    QString _nickname;//昵称
    QString _desciption;//签名
    QString _phone;//电话
    QIcon _avator;//头像
};

/////////////////////////////////
/// 消息信息
/////////////////////////////////

enum MessageType{
    TEXT_TYPE,//文本消息
    IMAGE_TYPE,//图片消息
    FILE_TYPE,//文件消息
    SPEECH_TYPE//语音消息
};

class Message{
public:
    QString _messageId;//编号
    QString _chatSessionId;//消息所属会话编号
    QString _time;//消息时间
    MessageType _messagetype;//消息类型
    UserInfo _sender;//发送者信息
    QByteArray _content;//消息的正文内容
};


/////////////////////////////////
/// 会话信息
/////////////////////////////////

class ChatSessionInfo
{
public:
    QString _chatSessionId;//编号
    QString _chatSessionName;//名称，对方昵称or群聊名称
    Message _lastMessage;//最新消息
    QIcon _avator;//头像，对方头像or群聊头像
    QString _userId;//对方id or ""
};
}//end model
