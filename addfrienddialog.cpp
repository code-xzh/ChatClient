#include "addfrienddialog.h"

#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QScrollArea>
#include <QScrollBar>
#include <QLabel>

///////////////////////////////////////
/// 整个搜索好友窗口
///////////////////////////////////////
AddFriendDialog::AddFriendDialog(QWidget *parent):QDialog(parent)
{
    //1.设置基本属性
    this->setFixedSize(500,500);
    this->setWindowTitle("添加好友");
    this->setWindowIcon(QIcon(":/resource/Image/logo.png"));
    this->setStyleSheet("QWidget{background-color:rgb(255,255,255);}");
    this->setAttribute(Qt::WA_DeleteOnClose);

    //2.添加布局管理器
    layout=new QGridLayout();
    layout->setSpacing(10);
    layout->setContentsMargins(20,20,20,0);
    this->setLayout(layout);

    //3.创建搜索框
    QLineEdit* searchEdit=new QLineEdit();
    searchEdit->setFixedHeight(50);
    searchEdit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    QString style="QLineEdit{border:none;border-radius:10px;font-size:16px;background-color:rgb(240,240,240);padding-left:5px;}";
    searchEdit->setStyleSheet(style);
    searchEdit->setPlaceholderText("按手机号/用户序号/昵称搜索");
    layout->addWidget(searchEdit,0,0,1,8);

    //4.创建搜索按钮
    QPushButton* searchBtn=new QPushButton();
    searchBtn->setFixedHeight(50);
    searchBtn->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    searchBtn->setIconSize(QSize(30,30));
    searchBtn->setIcon(QIcon(":/resource/Image/search.png"));
    QString btnStyle="QPushButton{border:none;background-corlor:rgb(240,240,240);border-radius:10px;}";
    btnStyle+="QPushButton:hover{background-color:rgb(220,220,220);} QPushButton:pressed{background-color:rgb(200,200,200);}";
    searchBtn->setStyleSheet(btnStyle);
    layout->addWidget(searchBtn,0,8,1,1);

    //5.添加滚动区域
    initResultArea();
}

void AddFriendDialog::initResultArea()
{
    //1.创建滚动区域对象
    QScrollArea* scrollArea=new QScrollArea();
    scrollArea->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    scrollArea->setWidgetResizable(true);
    scrollArea->horizontalScrollBar()->setStyleSheet("QScrollBar:horizontal{height{width:0;}");
    scrollArea->verticalScrollBar()->setStyleSheet("QScrollBar:vertical{width:2px;background-color:rgb(255,255,255);}");
    scrollArea->setStyleSheet("QScrollArea{border:none;}");
    layout->addWidget(scrollArea,1,0,1,9);

    //2.创建QWdiget
    QWidget* resultContainer= new QWidget();
    resultContainer->setObjectName("resultContainer");
    resultContainer->setStyleSheet("#resultContainer{background-color:rgb(255,255,255);}");
    scrollArea->setWidget(resultContainer);

    //3.给QWidget添加元素,需要创建垂直布局管理器
    QVBoxLayout* vlayout=new QVBoxLayout();
    vlayout->setSpacing(0);
    vlayout->setContentsMargins(0,0,0,0);
    scrollArea->setLayout(vlayout);

}


///////////////////////////////////////
/// 表示一个好友的搜索结果
///////////////////////////////////////
FriendResultItem::FriendResultItem(const UserInfo &userInfo):_userInfo(userInfo)
{
    //1.设置基本属性
    this->setFixedHeight(70);
    this->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    //2.创建布局管理器
    QGridLayout* layout= new QGridLayout();
    layout->setSpacing(0);
    layout->setContentsMargins(0,0,0,0);
    this->setLayout(layout);

    //3.创建头像
    QPushButton* avatarBtn=new QPushButton();
    avatarBtn->setFixedSize(50,50);
    avatarBtn->setIconSize(QSize(50,50));
    avatarBtn->setIcon(userInfo._avator);

    //4.创建昵称
    QLabel* nameLabel=new  QLabel();
    nameLabel->setFixedHeight(35);
    nameLabel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    nameLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
    nameLabel->setStyleSheet("QLabel{font-size:16px;font-weight:700;}");
    nameLabel->setText(userInfo._nickname);

    //5.创建个性签名
}
