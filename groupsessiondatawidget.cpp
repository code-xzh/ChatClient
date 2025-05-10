#include "groupsessiondatawidget.h"


#include <QVBoxLayout>
#include <QScrollArea>
#include <QScrollBar>
#include <qpushbutton>

#include "sessiondatawidget.h"
#include "debug.h"


GroupSessionDataWidget::GroupSessionDataWidget(QWidget *parent):QDialog(parent)
{
    //1.设置窗口基本属性
    this->setFixedSize(410,600);
    this->setWindowTitle("群聊详情");
    this->setWindowIcon(QIcon(":/resource/Image/logo.png"));
    this->setStyleSheet("QDialog{background-color:rgb(255,255,255);}");
    this->setAttribute(Qt::WA_DeleteOnClose);

    //2.创建布局管理器
    QVBoxLayout* vlayout=new QVBoxLayout();
    vlayout->setSpacing(10);
    vlayout->setContentsMargins(50,20,50,50);
    vlayout->setAlignment(Qt::AlignTop);
    this->setLayout(vlayout);

    //3创建滚动区域
    //3.1创建QScrollArea对象
    QScrollArea* scrollArea = new QScrollArea();
    scrollArea->setWidgetResizable(true);
    scrollArea->verticalScrollBar()->setStyleSheet("QScrollBar:vertical{width:2px;background-color:rgb(255,255,255);}");
    scrollArea->horizontalScrollBar()->setStyleSheet("QScrollBar:horizontal{height:0;}");
    scrollArea->setFixedSize(310,350);
    scrollArea->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    scrollArea->setStyleSheet("QWidget{background-color:transparent;border:none;}");

    //3.2创建QScrollArea内部的widget
    QWidget* container=new QWidget();
    scrollArea->setWidget(container);

    //3.3给container里添加一个网络布局
    glayout=new QGridLayout();
    glayout->setSpacing(5);
    glayout->setContentsMargins(0,0,0,0);
    glayout->setAlignment(Qt::AlignTop|Qt::AlignLeft);
    container->setLayout(glayout);

    //3.4把滚动区域添加到布局管理器
    vlayout->addWidget(scrollArea);

    //4.添加按钮
    AvatarItem* addBtn=new AvatarItem(QIcon(":/resource/Image/cross.png"),"添加");
    glayout->addWidget(addBtn,0,0);

    //5.添加群聊名称
    QLabel* groupNameTag=new QLabel();
    groupNameTag->setText("群聊名称");
    groupNameTag->setStyleSheet("QLabel{font-weight:700;font-size:16px;}");
    groupNameTag->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Expanding);
    groupNameTag->setFixedHeight(50);
    //在QLabel内部的对齐方式
    groupNameTag->setAlignment(Qt::AlignBottom);
    //QLabel布局管理器的对齐方式
    vlayout->addWidget(groupNameTag);

    //6.添加真实的群聊名字 和 修改按钮
    //6.1创建水平布局
    QHBoxLayout* hlayout=new QHBoxLayout();
    hlayout->setSpacing(0);
    hlayout->setContentsMargins(0,0,0,0);
    vlayout->addLayout(hlayout);

    //6.2创建真实群聊名字的label
    QLabel* groupNameLabel=new QLabel();
    groupNameLabel->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Expanding);
    groupNameLabel->setFixedHeight(50);
    groupNameLabel->setStyleSheet("QLabel {font-size:18px;}");
    hlayout->addWidget(groupNameLabel,0,Qt::AlignLeft | Qt::AlignVCenter);

    //6.3创建修改按钮
    QPushButton* modifyBtn=new QPushButton();
    modifyBtn->setFixedSize(30,30);
    modifyBtn->setIconSize(QSize(20,20));
    modifyBtn->setIcon(QIcon(":/resource/Image/modify.png"));
    modifyBtn->setStyleSheet("QPushButton{border:none;background-color:transparent;} QPushButton:pressed {background-color:rgb(230,230,230);}");
    hlayout->addWidget(modifyBtn,0,Qt::AlignRight | Qt::AlignVCenter);

    //7.退出群聊按钮
    QPushButton* exitGroupBtn=new QPushButton();
    exitGroupBtn->setText("退出群聊");
    exitGroupBtn->setFixedSize(310,50);
    exitGroupBtn->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    QString btnStyle="QPushButton{border:1px solid rgb(90,90,90);border-radius:5px;background-color:transparent}";
    btnStyle+="QPushButton:pressed{background:rgb(230,230,230);}";
    exitGroupBtn->setStyleSheet(btnStyle);
    vlayout->addWidget(exitGroupBtn);

    //构造假数据测试界面
#if TEST_UI
    groupNameLabel->setText("俺滴聊天室");
    for(int i=0;i<20;++i)
    {
        AvatarItem* item=new AvatarItem(QIcon(":/resource/Image/defaultAvatar.png"),"张三"+QString::number(i));
        this->addMember(item);
    }
#endif
}

void GroupSessionDataWidget::addMember(AvatarItem *avatarItem)
{
    //拿到滚动区域的布局管理器,取到成员变量即可
    const int MAX_COL=4;
    if(curCol>=MAX_COL){
        curRow++;
        curCol=0;
    }
    glayout->addWidget(avatarItem,curRow,curCol);
    ++curCol;
}





