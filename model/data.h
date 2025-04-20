#pragma once

#include <QString>
#include <Qicon>
#include <QUuid>
#include <QDateTime>
#include <QFile>
#include <QDebug>
#include <QFileInfo>

namespace model{

/////////////////////////////////////////////////////////////////////////
/// 公共工具函数
/////////////////////////////////////////////////////////////////////////

static inline QString getFileName(const QString& path)
{
    QFileInfo fileInfo(path);
    return fileInfo.fileName();
}

//封装宏打印日志
#define TAG QString("[%1:%2]").arg(model::getFileName(__FILE__),QString::number(__LINE__))
#define LOG() qDebug().noquote()<<TAG

//static inline避免链接阶段出现函数重定义问腿
//获取格式化时间
static inline QString formatTime(int64_t timestamp)//时间戳
{
    //时间戳传化为QDateTime
    QDateTime datatime=QDateTime::fromSecsSinceEpoch(timestamp);
    //转化为格式化时间
    return datatime.toString("MM-dd HH:mm:ss");
}
//获取时间戳
static inline int64_t getTime()
{
    return QDateTime::currentSecsSinceEpoch();
}
//根据QByteArray，转成QIcon
static inline QIcon makeIcon(const QByteArray& byteArray)
{
    QPixmap pixmap;
    pixmap.loadFromData(byteArray);
    QIcon icon(pixmap);
    return icon;
}
//读写文件操作
//从指定文件中，读取所有二进制内容
static inline QByteArray loadFileToByteArray(const QString& path)
{
    QFile file(path);
    bool ok=file.open(QFile::ReadOnly);
    if(!ok)
    {
        LOG()<<"文件打开失败！";
        return QByteArray();
    }
    QByteArray content=file.readAll();
    file.close();
    return content;
}

//从二进制内容中，写入指定文件
static inline void writeByteArrayToFile(const QString& path,const QByteArray& content)
{
    QFile file(path);
    bool ok=file.open(QFile::WriteOnly);
    if(!ok)
    {
        LOG()<<"文件打开失败！";
        return;
    }
    file.write(content);
    file.flush();//刷新缓冲区，把缓冲区的数据全部写入文件
    file.close();
}

/////////////////////////////////////////////////////////////////////////
/// 用户信息
/////////////////////////////////////////////////////////////////////////

class UserInfo{
public:
    QString _userId="";//编号
    QString _nickname="";//昵称
    QString _desciption="";//签名
    QString _phone="";//电话
    QIcon _avator;//头像
};

/////////////////////////////////////////////////////////////////////////
/// 消息信息
/////////////////////////////////////////////////////////////////////////

enum MessageType{
    TEXT_TYPE,//文本消息
    IMAGE_TYPE,//图片消息
    FILE_TYPE,//文件消息
    SPEECH_TYPE//语音消息
};

//工厂模式
class Message{
public:
    QString _messageId="";//编号
    QString _chatSessionId="";//消息所属会话编号
    QString _time="";//消息时间
    MessageType _messagetype=TEXT_TYPE;//消息类型
    UserInfo _sender;//发送者信息
    QByteArray _content;//消息的正文内容
    QString _fileId="";//文件的身份标识，文件、语音有效，文本消息则为""
    QString _fileName="";

    //文件消息是，extraInfo作为文件名来补充
    static Message makeMessage(MessageType messagetype,const QString& chatSessionId,const UserInfo& sender,
                               const QByteArray& content,const QString& extraInfo)
    {
        if(messagetype==TEXT_TYPE){
            return makeTextMessage(chatSessionId,sender,content);
        }else if(messagetype==IMAGE_TYPE){
            return makeImageMessage(chatSessionId,sender,content);
        }else if(messagetype==FILE_TYPE){
            return makeFileMessage(chatSessionId,sender,content,extraInfo);
        }else if(messagetype==SPEECH_TYPE){
            return makeSpeechMessage(chatSessionId,sender,content);
        }else{
            //未知消息类型
            return Message();
        }
    }

private:
    static QString makeId()
    {
        return "M"+QUuid::createUuid().toString().sliced(25,12);//取uuid的一部分
    }
    static Message makeTextMessage(const QString& chatSessionId,const UserInfo& sender,const QByteArray& content)
    {
        Message message;
        message._messageId=makeId();//唯一
        message._chatSessionId=chatSessionId;
        message._sender=sender;
        message._time= formatTime(getTime());//生成格式化时间
        message._content=content;
        message._messagetype=TEXT_TYPE;
        message._fileId="";
        message._fileName="";
        return message;
    }
    static Message makeImageMessage(const QString& chatSessionId,const UserInfo& sender,const QByteArray& content)
    {
        Message message;
        message._messageId=makeId();//唯一
        message._chatSessionId=chatSessionId;
        message._sender=sender;
        message._time= formatTime(getTime());//生成格式化时间
        message._content=content;
        message._messagetype=IMAGE_TYPE;
        message._fileId="";//后续使用再进一步设置
        message._fileName="";
        return message;
    }
    static Message makeFileMessage(const QString& chatSessionId,const UserInfo& sender,const QByteArray& content,const QString& fileName)
    {
        Message message;
        message._messageId=makeId();//唯一
        message._chatSessionId=chatSessionId;
        message._sender=sender;
        message._time= formatTime(getTime());//生成格式化时间
        message._content=content;
        message._messagetype=FILE_TYPE;
        message._fileId="";//后续使用再进一步设置
        message._fileName=fileName;
        return message;
    }
    static Message makeSpeechMessage(const QString& chatSessionId,const UserInfo& sender,const QByteArray& content)
    {
        Message message;
        message._messageId=makeId();//唯一
        message._chatSessionId=chatSessionId;
        message._sender=sender;
        message._time= formatTime(getTime());//生成格式化时间
        message._content=content;
        message._messagetype=SPEECH_TYPE;
        message._fileId="";//后续使用再进一步设置
        message._fileName="";
        return message;
    }
};


/////////////////////////////////////////////////////////////////////////
/// 会话信息
/////////////////////////////////////////////////////////////////////////

class ChatSessionInfo//分为单聊和群聊
{
public:
    QString _chatSessionId="";//编号
    QString _chatSessionName="";//名称，对方昵称or群聊名称
    Message _lastMessage;//最新消息
    QIcon _avator;//头像，对方头像or群聊头像
    QString _userId="";//对方id or ""
};

}//end model
