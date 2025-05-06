#include "sessiondatawidget.h"
#include <QVBoxLayout>
#include <QFontMetrics>

#include "choosefrienddialog.h"
#include "debug.h"

//////////////////////////////////////////////////
/// 表示 一个头像+一个名字 空控件组合
//////////////////////////////////////////////////
AvatarItem::AvatarItem(const QIcon &avatar, const QString &name)
{
    //1.设置自身的属性
    this->setFixedSize(70,80);

    //2。创建布局管理器
    QVBoxLayout* layout=new QVBoxLayout();
    layout->setSpacing(0);
    layout->setContentsMargins(0,0,0,0);
    layout->setAlignment(Qt::AlignHCenter);
    this->setLayout(layout);

    //3.创建头像
    _avatarBtn=new QPushButton();
    _avatarBtn->setFixedSize(45,45);
    _avatarBtn->setIconSize(QSize(45,45));
    _avatarBtn->setIcon(avatar);
    _avatarBtn->setStyleSheet("QPushButton {border:none;}");

    //4.创建名字
    _nameLabel = new QLabel();
    _nameLabel->setText(name);
    QFont font("微软雅黑",12);
    _nameLabel->setFont(font);
    _nameLabel->setAlignment(Qt::AlignHCenter);

    //5.对名字做一个”截断操作“
    const int MAX_WIDTH=65;//最大宽度
    QFontMetrics metrics(font);
    int totalWidth=metrics.horizontalAdvance(name);//测量名字宽度
    if(totalWidth>MAX_WIDTH)
    {
        //需要截断
        QString tail="...";
        int tailWidth=metrics.horizontalAdvance(tail);
        int avaliabelWidth=MAX_WIDTH-tailWidth;
        int avaliableSize=name.size() * ((double)avaliabelWidth / totalWidth);
        QString newName=name.left(avaliableSize);
        _nameLabel->setText(newName+tail);
    }else{
        //不需要截断
    }

    //6.添加到布局管理器
    layout->addWidget(_avatarBtn);
    layout->addWidget(_nameLabel);
}

//////////////////////////////////////////////////
/// 表示 ”单聊会话详情“ 窗口
//////////////////////////////////////////////////
SessionDataWidget::SessionDataWidget(QWidget* parent):QDialog(parent)
{
    //1.设置剧本属性
    this->setWindowTitle("会话详情");
    this->setWindowIcon(QIcon(":/resource/Image/logo.png"));
    this->setFixedSize(300,300);
    this->setStyleSheet("QWidget{background-color : rgb(255,255,255);}");
    this->setAttribute(Qt::WA_DeleteOnClose);

    //2.创建布局管理器
    QGridLayout* layout=new QGridLayout();
    layout->setSpacing(10);
    layout->setContentsMargins(50,0,50,0);
    this->setLayout(layout);

    //3.添加”创建群聊“的按钮
    AvatarItem * createGroupBtn =new AvatarItem(QIcon(":/resource/Image/cross.png"),"添加");
    layout->addWidget(createGroupBtn,0,0);

    //4.添加当前用户的信息(临时构造的假数据)
#if TEST_UI
    AvatarItem* currentUser=new AvatarItem(QIcon(":/resource/Image/defaultAvatar.png"),"张三fasdfgdasfafdas");
    layout->addWidget(currentUser,0,1);
#endif

    //5.添加”删除好友“按钮
    _deleteFriendBtn = new QPushButton();
    _deleteFriendBtn->setFixedHeight(50);
    _deleteFriendBtn->setText("删除好友");
    QString style="QPushButton {border: 1px solid rgb(90,90,90);border-radius:5px;}";
    style+="QPushButton:pressed{background-color:rgb(235,235,235);}";
    _deleteFriendBtn->setStyleSheet(style);
    layout->addWidget(_deleteFriendBtn,1,0,1,3);

    //6.添加信号槽，处理点击“创建群聊”按钮
    connect(createGroupBtn->getAvatar(),&QPushButton::clicked,this,[=](){
        ChooseFriendDialog* chooseFriendDialog=new ChooseFriendDialog(this);
        chooseFriendDialog->exec();
    });
}

