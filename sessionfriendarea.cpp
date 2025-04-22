#include "sessionfriendarea.h"
#include <QScrollBar>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QStyleOption>
#include <QPainter>

#include "debug.h"

SessionFriendArea::SessionFriendArea(QWidget *parent)
    : QScrollArea{parent}
{
    //1.必要属性
    this->setWidgetResizable(true);//设置开启滚动
    this->verticalScrollBar()->setStyleSheet("QScrollBar:vertical {width:2px;background-color:rgb(46,46,46);}");//设置竖直滚动条样式
    this->horizontalScrollBar()->setStyleSheet("QScrollBar:horizontal {height:0px;}");
    this->setStyleSheet("QWidget{border:none};");

    //2.把widget创建出来
    _container=new QWidget();
    _container->setFixedWidth(310);
    this->setWidget(_container);//告诉检查哪个widget高度

    //3.指定布局管理器，方便后期添加元素
    QVBoxLayout* layout=new QVBoxLayout();
    layout->setContentsMargins(0,0,0,0);
    layout->setSpacing(0);
    layout->setAlignment(Qt::AlignTop);
    _container->setLayout(layout);

    // //4.简单测试
    // for(int i=0;i<50;++i)
    // {
    //     QPushButton* btm=new QPushButton();
    //     btm->setText("按钮");
    //     layout->addWidget(btm);
    // }

    //测试好友列表
#if TEST_UI
    QIcon icon(":/resource/Image/defaultAvatar.png");
    for(int i=0;i<30;++i)
    {
        this->addItem(icon,"张三"+QString::number(i),"最后消息"+QString::number(i));
    }
#endif
}

void SessionFriendArea::clear()
{
    QLayout* layout=_container->layout();
    //遍历布局管理器中的所有元素，依此删除
    for(int i=layout->count()-1;i>=0;--i)
    {
        QLayoutItem* item=layout->takeAt(i);//移除
        if(item->widget())//释放内存
        {
            delete item->widget();
        }
    }
}

void SessionFriendArea::addItem(const QIcon &avatar, const QString &name, const QString &text)
{
    SessionFriendItem* item=new SessionFriendItem(this,avatar,name,text);
    _container->layout()->addWidget(item);
}

//////////////////////////////////////////////////
/// 滚动区域的Item的实现
//////////////////////////////////////////////////

SessionFriendItem::SessionFriendItem(QWidget *owner, const QIcon &avatar, const QString &name, const QString &text)
        :_owner(owner)
{
    this->setFixedHeight(70);
    this->setStyleSheet("QWidget {background-color:rgb(231,231,231);}");
    //创建网格布局管理器
    QGridLayout* layout=new QGridLayout();
    layout->setContentsMargins(10,0,0,0);
    layout->setHorizontalSpacing(10);
    layout->setVerticalSpacing(0);
    this->setLayout(layout);

    //创建头像
    QPushButton* avatarBtn=new QPushButton();
    avatarBtn->setFixedSize(50,50);
    avatarBtn->setIconSize(QSize(50,50));
    avatarBtn->setIcon(avatar);
    avatarBtn->setStyleSheet("QPushButton {border:none;}");
    avatarBtn->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);//fixed：固定尺寸，不随父窗口变化而变化

    //创建名字
    QLabel* nameLable=new QLabel();
    nameLable->setText(name);
    nameLable->setStyleSheet("QLabel {font-size:18px;font-weight:600}");//大小，粗细
    nameLable->setFixedHeight(35);
    nameLable->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    //创建消息预览的label
    QLabel* messageLabel=new QLabel();
    messageLabel->setText(text);
    messageLabel->setFixedHeight(35);
    messageLabel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    layout->addWidget(avatarBtn,0,0,2,2);
    layout->addWidget(nameLable,0,2,1,1);
    layout->addWidget(messageLabel,1,2,1,1);
}

void SessionFriendItem::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void SessionFriendItem::mousePressEvent(QMouseEvent *event)
{
    select();
}

//鼠标移入检测
void SessionFriendItem::enterEvent(QEnterEvent *event)
{
    if(this->selected)
    {
        return;
    }
    //设置一个更深的颜色
    this->setStyleSheet("QWidget {background-color:rgb(220,220,220);}");
}
//鼠标移出检测
void SessionFriendItem::leaveEvent(QEvent *event)
{
    if(this->selected)
    {
        return;
    }
    //还原背景色
    this->setStyleSheet("QWidget {background-color:rgb(231,231,231);}");
}

void SessionFriendItem::select()
{
    //点击时触发函数
    //点击时，修改背景色
    //不仅仅要设置当前背景色，也要还原其他元素背景色

    //拿到并遍历其他元素
    const QObjectList children=this->parentWidget()->children();
    for(QObject* child:children)
    {
        if(!child->isWidgetType()){
            //判断是否为widget
            continue;
        }

        SessionFriendItem* item=dynamic_cast<SessionFriendItem*>(child);
        if(item->selected)
        {
            item->selected=false;
            item->setStyleSheet("QWidget {background-color:rgb(231,231,231);}");
        }
    }

    this->setStyleSheet("QWidget {background-color:rgb(210,210,210);}");
    this->selected=true;
}
