#include "userinfowidget.h"
#include <QGridLayout>

UserInfoWidget::UserInfoWidget(const UserInfo& userInfo,QWidget* parent):
    QDialog(parent),_userInfo(userInfo)
{
    //1.设置基本属性
    this->setFixedSize(400,200);
    this->setWindowTitle("用户详情");
    this->setWindowIcon(QIcon(":/resource/Image/logo.png"));
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->move(QCursor::pos());

    //2.创建布局管理器
    QGridLayout* layout=new QGridLayout();
    layout->setVerticalSpacing(10);
    layout->setHorizontalSpacing(20);
    layout->setContentsMargins(40,20,0,0);
    layout->setAlignment(Qt::AlignTop);
    this->setLayout(layout);

    //3.添加头像
    _avatarBtn=new QPushButton();
    _avatarBtn->setFixedSize(75,75);
    _avatarBtn->setIconSize(QSize(75,75));
    _avatarBtn->setIcon(userInfo._avator);

    int width=100;
    int height=30;

    //4.添加用户序号
    _idTag=new QLabel();
    _idTag->setText("序号");
    _idTag->setStyleSheet("QLabel{font-weight:800;padding-left:20px;}");
    _idTag->setFixedSize(width,height);
    _idTag->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    //_idTag->setAlignment(Qt::AlignHCenter);

    _idLabel=new QLabel();
    _idLabel->setText(userInfo._userId);
    _idLabel->setFixedSize(width,height);
    _idLabel->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);

    //5.添加用户昵称
    _nameTag=new QLabel();
    _nameTag->setText("昵称");
    _nameTag->setStyleSheet("QLabel{font-weight:800;padding-left:20px;}");
    _nameTag->setFixedSize(width,height);
    _nameTag->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    //_nameTag->setAlignment(Qt::AlignHCenter);

    _nameLabel=new QLabel();
    _nameLabel->setText(userInfo._nickname);
    _nameLabel->setFixedSize(width,height);
    _nameLabel->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);

    //6.添加用户电话
    _phoneTag=new QLabel();
    _phoneTag->setText("电话");
    _phoneTag->setStyleSheet("QLabel{font-weight:800;padding-left:20px;}");
    _phoneTag->setFixedSize(width,height);
    _phoneTag->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    //_phoneTag->setAlignment(Qt::AlignHCenter);

    _phoneLabel=new QLabel();
    _phoneLabel->setText(userInfo._phone);
    _phoneLabel->setFixedSize(width,height);
    _phoneLabel->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);

    //7.添加功能按钮
    _applyBtn=new QPushButton();
    _applyBtn->setText("申请好友");
    _applyBtn->setFixedSize(80,30);
    _applyBtn->setStyleSheet("QPushButton{border:1px solid rgb(100,100,100);border-radius:5px;background-color:rgb(240,240,240);} QPushButton:pressed{background-color:rgb(205,205,205);}");

    _sendMessageBtn=new QPushButton();
    _sendMessageBtn->setText("发送信息");
    _sendMessageBtn->setFixedSize(80,30);
    _sendMessageBtn->setStyleSheet("QPushButton{border:1px solid rgb(100,100,100);border-radius:5px;} QPushButton:pressed{background-color:rgb(205,205,205);}");

    _deleteFriendBtn=new QPushButton();
    _deleteFriendBtn->setText("删除好友");
    _deleteFriendBtn->setFixedSize(80,30);
    _deleteFriendBtn->setStyleSheet("QPushButton{border:1px solid rgb(100,100,100);border-radius:5px;} QPushButton:pressed{background-color:rgb(205,205,205);}");

    //8.添加到布局管理器
    layout->addWidget(_avatarBtn,0,0,3,1);

    layout->addWidget(_idTag,0,1);
    layout->addWidget(_idLabel,0,2);

    layout->addWidget(_nameTag,1,1);
    layout->addWidget(_nameLabel,1,2);

    layout->addWidget(_phoneTag,2,1);
    layout->addWidget(_phoneLabel,2,2);

    layout->addWidget(_applyBtn,3,0);
    layout->addWidget(_sendMessageBtn,3,1);
    layout->addWidget(_deleteFriendBtn,3,2);
}
