#include "widget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
Widget* Widget::_instance=nullptr;
Widget* Widget::getInstance()
{
    if(_instance==nullptr)
        _instance=new Widget();//不传入参数，以桌面为父窗口
    return _instance;
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("我的聊天室");
    this->setWindowIcon(QIcon(":resource/Image/logo.png"));

    //初始化主窗口样式布局
    InitMainWindow();
    //初始化左侧窗口样式布局
    InitLeftWindow();
    //初始化中间窗口样式布局
    InitMidWindow();
    //初始化右侧窗口样式布局
    InitRightWindow();
}

//初始化主窗口样式布局
void Widget::InitMainWindow()
{
    QHBoxLayout* layout=new QHBoxLayout();
    layout->setSpacing(0);//layout内部元素之间间距为0
    layout->setContentsMargins(0,0,0,0);//里面元素距离四个边界的距离
    this->setLayout(layout);

    _windowLeft=new QWidget();
    _windowMid=new QWidget();
    _windowRight=new QWidget();

    _windowLeft->setFixedWidth(70);
    _windowMid->setFixedWidth(310);
    _windowRight->setMinimumWidth(500);

    _windowLeft->setMinimumHeight(600);

    _windowLeft->setStyleSheet("QWidget { background-color: rgb(46,46,46);}");
    _windowMid->setStyleSheet("QWidget { background-color: rgb(247,247,247);}");
    _windowRight->setStyleSheet("QWidget { background-color: rgb(245,245,245);}");

    layout->addWidget(_windowLeft);
    layout->addWidget(_windowMid);
    layout->addWidget(_windowRight);
}

void Widget::InitLeftWindow()
{
    QVBoxLayout* layout = new QVBoxLayout();
    layout->setSpacing(10);//组件间距
    layout->setContentsMargins(0,30,0,0);//左上右下间距
    _windowLeft->setLayout(layout);

    //添加用户头像
    _userAvator=new QPushButton();
    _userAvator->setFixedSize(45,45);
    _userAvator->setIconSize(QSize(30,30));
    _userAvator->setIcon(QIcon(":/resource/Image/defaultAvatar.png"));
    _userAvator->setStyleSheet("QPushButton { background-color : transparent; }");//按钮点击背景色
    layout->addWidget(_userAvator,1,Qt::AlignTop | Qt::AlignHCenter);

    //添加会话标签按钮
    _sessionTabBtm=new QPushButton();
    _sessionTabBtm->setFixedSize(45,45);
    _sessionTabBtm->setIconSize(QSize(30,30));
    _sessionTabBtm->setIcon(QIcon(":/resource/Image/session_active.png"));
    _sessionTabBtm->setStyleSheet("QPushButton { background-color : transparent; }");
    layout->addWidget(_sessionTabBtm,1,Qt::AlignTop | Qt::AlignHCenter);

    //好友列表按钮
    _friendTabBtm=new QPushButton();
    _friendTabBtm->setFixedSize(45,45);
    _friendTabBtm->setIconSize(QSize(30,30));
    _friendTabBtm->setIcon(QIcon(":/resource/Image/friend_inactive.png"));
    _friendTabBtm->setStyleSheet("QPushButton { background-color : transparent; }");
    layout->addWidget(_friendTabBtm,1,Qt::AlignTop | Qt::AlignHCenter);

    //申请好友按钮
    _applyTabBtm=new QPushButton();
    _applyTabBtm->setFixedSize(45,45);
    _applyTabBtm->setIconSize(QSize(30,30));
    _applyTabBtm->setIcon(QIcon(":/resource/Image/apply_inactive.png"));
    _applyTabBtm->setStyleSheet("QPushButton { background-color : transparent; }");
    layout->addWidget(_applyTabBtm,1,Qt::AlignTop | Qt::AlignHCenter);

    layout->addStretch(20);//下边距
}

void Widget::InitMidWindow()
{

}

void Widget::InitRightWindow()
{

}


Widget::~Widget() {}
