#include "messageshowarea.h"
#include <QScrollBar>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>

using namespace model;

//////////////////////////////////////////////
/// 表示消息展示区
//////////////////////////////////////////////

MessageShowArea::MessageShowArea() {
    //1.初始化基本属性
    this->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    this->setWidgetResizable(true);
    //设置滚动条样式
    this->verticalScrollBar()->setStyleSheet("qscrollBar:vertical{width:2px;background-color:rgb(240,240,240);}");
    this->horizontalScrollBar()->setStyleSheet("qscrollBar:horizontal{height:0};");
    this->setStyleSheet("QScorllArea{border:none;}");

    //2.创造container，作为包含内部元素的容器
    _containter=new QWidget();
    this->setWidget(_containter);

    //3.给container添加布局管理器
    QVBoxLayout* layout=new QVBoxLayout();
    layout->setSpacing(0);
    layout->setContentsMargins(0,0,0,0);
    _containter->setLayout(layout);
}


//////////////////////////////////////////////
/// 表示一个消息元素
//////////////////////////////////////////////

MessageItem::MessageItem(bool isLeft):_isLeft(isLeft)
{}

MessageItem *MessageItem::makeMessageItem(bool isLeft, const Message &message)
{
    //1.创建对象和布局管理器
    MessageItem* messageItem =new MessageItem(isLeft);
    QGridLayout* layout=new QGridLayout();
    layout->setSpacing(0);
    layout->setContentsMargins(0,0,0,0);
    //这个messageitem最低不得低于100
    messageItem->setMinimumHeight(100);
    messageItem->setLayout(layout);

    //2.创建头像
    QPushButton* avatarBtn=new QPushButton();
    avatarBtn->setFixedSize(40,40);
    avatarBtn->setIconSize(QSize(40,40));
    avatarBtn->setIcon(QIcon(message._sender._avator));

    if(isLeft)
    {
        layout->addWidget(avatarBtn,0,0,2,1,Qt::AlignTop|Qt::AlignLeft);
    }else{
        layout->addWidget(avatarBtn,0,1,2,1,Qt::AlignTop|Qt::AlignLeft);
    }

    //3.创建名字和时间
    QLabel* nameLabel=new QLabel();
    nameLabel->setText(message._sender._nickname+"|"+message._time);
    nameLabel->setAlignment(Qt::AlignBottom);
    nameLabel->setStyleSheet("QLabel{fontsize:12px;color:rgb(178,178,187);}");
    if(isLeft){
        layout->addWidget(nameLabel,0,1);
    }else{
        layout->addWidget(nameLabel,0,0,Qt::AlignRight);
    }

    //4.创建消息体
    QWidget* contentWidget=nullptr;
    switch(message._messagetype){
    case TEXT_TYPE:
        contentWidget=makeTextMessageItem();
        break;
    case IMAGE_TYPE:
        contentWidget=makeImageMessageItem();
        break;
    case FILE_TYPE:
        contentWidget=makeFileMessageItem();
        break;
    case SPEECH_TYPE:
        contentWidget=makeSpeechMessageItem();
        break;
    default:
        LOG()<<"错误的消息类型！messageType"<<message._messagetype;
    }

    if(isLeft){
        layout->addWidget(contentWidget,1,1);
    }else{
        layout->addWidget(contentWidget,0,0);
    }

    return messageItem;
}

QWidget *MessageItem::makeTextMessageItem()
{

}

QWidget *MessageItem::makeImageMessageItem()
{

}

QWidget *MessageItem::makeFileMessageItem()
{

}

QWidget *MessageItem::makeSpeechMessageItem()
{

}


//////////////////////////////////////////////
/// 创建类表示“文本消息”正文部分
//////////////////////////////////////////////

MessageContentLabel::MessageContentLabel(const QString &text, bool isLeft):_isLeft(isLeft)
{
    QFont font;
    font.setFamily("微软雅黑");
    font.setPixelSize(16);
    this->_label=new QLabel(this);
    this->_label->setText(text);
    this->_label->setFont(font);
    this->_label->setAlignment(Qt::AlignVCenter|Qt::AlignLeft);
    this->_label->setWordWrap(true);//文本自动换行
    this->_label->setStyleSheet("QLabel{padding:0 10px;line-height:1.2;}");
}
