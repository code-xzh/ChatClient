#include "messageshowarea.h"
#include <QScrollBar>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QFontMetrics>
#include <QPainter>
#include <QPainterPath>

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

//函数会在该控件被显示的时候被调用
void MessageContentLabel::paintEvent(QPaintEvent *event)
{
    //1.计算绘制内容的尺寸,获取父元素的宽度
    QObject* object=this->parent();
    if(!object->isWidgetType()){
        //父元素不是widget，不进行绘制操作
        return;
    }
    QWidget* parent=dynamic_cast<QWidget*>(object);
    int width=parent->width()*0.6;

    //2.计算当前文本，如果是一行放置，需要多宽
    //计算文本长度
    QFontMetrics metrics(this->_label->font());
    int totalWidth=metrics.horizontalAdvance(this->_label->text());

    //3.计算出行数
    //width-40是左右留出的边距,各20
    int rows=(totalWidth/(width-40))+1;
    if(rows==1){
        //用来控制宽度更少的情况
        width=totalWidth+40;
    }

    //4.根据行数计算高度
    //20代表上下各10边距
    int height=rows*(this->_label->font().pixelSize()*1.2)+20;

    //5.绘制圆角尺寸和箭头
    QPainter painter(this);
    QPainterPath path;//可以绘制各种形状
    //设置抗锯齿
    painter.setRenderHint(QPainter::Antialiasing);
    if(_isLeft){
        painter.setPen(QPen(QColor(255,255,255)));
        painter.setBrush(QColor(255,255,255));
        //绘制圆角矩形
        painter.drawRoundedRect(10,0,width,height,10,10);
        //绘制箭头
        path.moveTo(10,15);
        path.lineTo(0,20);
        path.lineTo(10,25);
        path.closeSubpath();//绘制的线形成闭合的多边形，才能用brush填充颜色
        painter.drawPath(path);//绘制操作

        this->_label->setGeometry(10,0,width,height);//label位置
    }else{
        painter.setPen(QPen(QColor(137,217,97)));
        painter.setBrush(QColor(137,217,97));

        //圆角矩形左侧边的横坐标位置
        int leftPos=this->_label->width()-width-10;
        //圆角矩形右侧边的横坐标位置
        int rightPos=this->_label->width()-10;
        //绘制圆角矩形
        painter.drawRoundedRect(leftPos,0,width,height,0,0);
        //绘制箭头
        path.moveTo(rightPos,15);
        path.lineTo(rightPos+10,20);
        path.lineTo(rightPos,25);
        path.closeSubpath();//绘制的线形成闭合的多边形，才能用brush填充颜色
        painter.drawPath(path);//绘制操作

        this->_label->setGeometry(10,0,width,height);//label位置
    }

    //6.重新设置父元素的高度，确保足够高，显示所有信息
    //高度要涵盖之前的名字时间的高度，并且留点冗余空间
    parent->setFixedHeight(height+50);
}
