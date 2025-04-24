#ifndef MESSAGESHOWAREA_H
#define MESSAGESHOWAREA_H

#include <QScrollArea>
#include <QWidget>
#include <QLabel>

#include "model/data.h"

//.h文件不宜使用using namespace
using model::Message;

//////////////////////////////////////////////
/// 表示消息展示区
//////////////////////////////////////////////

class MessageShowArea : public QScrollArea
{
    Q_OBJECT
public:
    MessageShowArea();

private:
    QWidget* _containter;
};


//////////////////////////////////////////////
/// 表示一个消息元素
/// 这里面能同时支持文本，图片，文件，语音消息。
/// 目前先考虑文本消息
//////////////////////////////////////////////

class MessageItem:public QWidget
{
    Q_OBJECT

public:
    //区分自己消息或者别人消息
    MessageItem(bool isLeft);

    //工厂创建消息示例
    static MessageItem* makeMessageItem(bool isLeft,const Message& mmesage);

    //添加工厂函数
    static QWidget* makeTextMessageItem();
    static QWidget* makeImageMessageItem();
    static QWidget* makeFileMessageItem();
    static QWidget* makeSpeechMessageItem();
private:
    bool _isLeft;
};

//////////////////////////////////////////////
/// 创建类表示“文本消息”正文部分
//////////////////////////////////////////////

class MessageContentLabel:public QWidget{
public:
    MessageContentLabel(const QString& text,bool isLeft);

private:
    QLabel* _label;
    bool _isLeft;
};

#endif // MESSAGESHOWAREA_H
