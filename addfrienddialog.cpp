#include "addfrienddialog.h"

#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QScrollArea>
#include <QScrollBar>
#include <QLabel>

#include "debug.h"

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
    searchEdit=new QLineEdit();
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
    QString btnStyle="QPushButton{border:none;background-color:rgb(240,240,240);border-radius:10px;}";
    btnStyle+="QPushButton:hover{background-color:rgb(220,220,220);} QPushButton:pressed{background-color:rgb(200,200,200);}";
    searchBtn->setStyleSheet(btnStyle);
    layout->addWidget(searchBtn,0,8,1,1);

    //5.添加滚动区域
    initResultArea();

    //构造假数据进行测试
#if TEST_UI
    QIcon avatar(":/resource/Image/defaultAvatar.png");
    for(int i=0;i<20;++i)
    {
        UserInfo* userInfo=new UserInfo();
        userInfo->_userId=QString::number(1000+i);
        userInfo->_nickname="张三"+QString::number(i);
        userInfo->_desciption="我是最靓的仔！";
        userInfo->_avator=avatar;
        this->addResult(*userInfo);
    }
#endif
}

void AddFriendDialog::initResultArea()
{
    //1.创建滚动区域对象
    QScrollArea* scrollArea=new QScrollArea();
    scrollArea->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    scrollArea->setWidgetResizable(true);
    scrollArea->horizontalScrollBar()->setStyleSheet("QScrollBar:horizontal{height:0;}");
    scrollArea->verticalScrollBar()->setStyleSheet("QScrollBar:vertical{width:2px;background-color:rgb(255,255,255);}");
    scrollArea->setStyleSheet("QScrollArea{border:none;}");
    layout->addWidget(scrollArea,1,0,1,9);

    //2.创建QWdiget
    resultContainer= new QWidget();
    resultContainer->setObjectName("resultContainer");
    resultContainer->setStyleSheet("#resultContainer{background-color:rgb(255,255,255);}");
    scrollArea->setWidget(resultContainer);

    //3.给QWidget添加元素,需要创建垂直布局管理器
    QVBoxLayout* vlayout=new QVBoxLayout();
    vlayout->setSpacing(0);
    vlayout->setContentsMargins(0,0,0,0);
    resultContainer->setLayout(vlayout);

}

void AddFriendDialog::addResult(const UserInfo &userInfo)
{
    FriendResultItem* item=new FriendResultItem(userInfo);
    resultContainer->layout()->addWidget(item);
}

void AddFriendDialog::clear()
{
    //从后往前遍历
    QVBoxLayout* layout=dynamic_cast<QVBoxLayout*>(resultContainer->layout());
    for(int i=layout->count()-1;i>0;--i)
    {
        QLayoutItem* layoutItem=layout->takeAt(i);
        if(layoutItem==nullptr||layoutItem->widget()==nullptr)
        {
            continue;
        }
        //删除
        delete layoutItem->widget();
    }
}

void AddFriendDialog::setSearchKey(const QString &searchKey)
{
    searchEdit->setText(searchKey);
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
    layout->setVerticalSpacing(0);
    layout->setHorizontalSpacing(10);
    layout->setContentsMargins(0,0,20,0);
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
    QLabel* descLabel=new QLabel();
    descLabel->setFixedHeight(35);
    descLabel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    descLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
    descLabel->setStyleSheet("QLabel{font-size:14px;}");
    descLabel->setText(_userInfo._desciption);

    //6.创建添加好友按钮
    QPushButton* addBtn=new QPushButton();
    addBtn->setFixedSize(100,40);
    addBtn->setText("添加好友");
    QString btnStyle="QPushButton{border:none;background-color:rgb(137,217,97);color:rgb(255,255,255);border-radius:10px;}";
    btnStyle+="QPushButton:pressed{background-color:rgb(200,200,200);}";
    addBtn->setStyleSheet(btnStyle);

    //7.添加上述内容到布局管理器
    layout->addWidget(avatarBtn,0,0,2,1);
    layout->addWidget(nameLabel,0,1);
    layout->addWidget(descLabel,1,1);
    layout->addWidget(addBtn,0,2,2,1);


}
