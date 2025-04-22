#include "sessionfriendarea.h"
#include <QScrollBar>
#include <QVBoxLayout>
#include <QPushButton>
#include <QStyleOption>
#include <QPainter>

#include "debug.h"
#include "model/data.h"

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
        this->addItem(APPLY_ITEM_TYPE,QString::number(i),icon,"张三"+QString::number(i),"最后消息"+QString::number(i));
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

//添加三个item的其中之一
void SessionFriendArea::addItem(ItemType itemType,const QString& id,const QIcon &avatar, const QString &name, const QString &text)
{
    SessionFriendItem* item=nullptr;
    if(itemType==SESSION_ITEM_TYPE)
    {
        item= new SessionItem(this,id,avatar,name,text);
    }else if(itemType==FRIEND_ITEM_TYPE){
        item= new FriendItem(this,id,avatar,name,text);
    }else if(itemType==APPLY_ITEM_TYPE){
        item= new ApplyItem(this,id,avatar,name);
    }else{
        LOG()<<"错误的ItemType！ItemType="<<itemType;
    }
    _container->layout()->addWidget(item);
}

void SessionFriendArea::clickItem(int index)
{
    if(index<0||index>=_container->layout()->count())
    {
        LOG()<<"点击元素超出范围！index="<<index;
        return;
    }
    QLayoutItem* layoutItem=_container->layout()->itemAt(index);

    if(layoutItem==nullptr||layoutItem->widget()==nullptr)
    {
        LOG()<<"指定元素不存在！index="<<index;
        return;
    }
    SessionFriendItem* item=dynamic_cast<SessionFriendItem*>(layoutItem->widget());
    item->select();
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
    messageLabel=new QLabel();
    messageLabel->setText(text);
    messageLabel->setFixedHeight(35);
    messageLabel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    layout->addWidget(avatarBtn,0,0,2,2);
    layout->addWidget(nameLable,0,2,1,8);
    layout->addWidget(messageLabel,1,2,1,8);
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

    //调用active
    this->active();
}

void SessionFriendItem::active()
{
    //不需要实现，子类会重写
}

//////////////////////////////////////////////////
/// 会话的Item的实现
//////////////////////////////////////////////////
SessionItem::SessionItem(QWidget *owner, const QString &chatSessionId, const QIcon &avatar,const QString &name, const QString &lastMessage)
    :SessionFriendItem(owner,avatar,name,lastMessage),
    _chatSessionId(chatSessionId)
{}

void SessionItem::active()
{
    //TODO 加载历史消息列表
    LOG()<<"点击了SessionItem触发的逻辑！chatSessionId"<<_chatSessionId;
}

//////////////////////////////////////////////////
/// 好友Item的实现
//////////////////////////////////////////////////
FriendItem::FriendItem(QWidget *owner, const QString &userId, const QIcon &avatar, const QString &name, const QString &description)
    :SessionFriendItem(owner,avatar,name,description),
    _userId(userId)
{}

void FriendItem::active()
{
    //TODO 加载对应会话列表元素
    LOG()<<"点击了FriendItem触发的逻辑！userId"<<_userId;
}

//////////////////////////////////////////////////
/// 好友申请Item的实现
//////////////////////////////////////////////////
ApplyItem::ApplyItem(QWidget *owner, const QString &userId, const QIcon &avatar, const QString &name)
    :SessionFriendItem(owner,avatar,name,""),
    _userId(userId)
{
    //1.移除父类的messageLabel
    QGridLayout* layout=dynamic_cast<QGridLayout*>(this->layout());
    layout->removeWidget(messageLabel);
    delete messageLabel;

    //2.创建俩按钮
    QPushButton* accpetBtn=new QPushButton();
    accpetBtn->setText("同意");
    QPushButton* rejectBtn=new QPushButton();
    rejectBtn->setText("拒绝");

    //3.添加到布局管理器中
    layout->addWidget(accpetBtn,1,2,1,1);
    layout->addWidget(rejectBtn,1,3,1,1);
}

void ApplyItem::active()
{
    //TODO
    LOG()<<"点击了ApplyItem触发的逻辑！userId"<<_userId;
}
