#include "choosefrienddialog.h"
#include <QScrollArea>
#include <QScrollBar>
#include <qpushbutton>
#include <QPainter>

#include "debug.h"

//////////////////////////////////////////
/// 选择好友窗口的好友项
//////////////////////////////////////////
ChooseFriendItem::ChooseFriendItem(const QIcon &avatar, const QString &name, bool checked)
{
    //1.设置空间的基本属性
    this->setFixedHeight(50);
    this->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    //2.设置水平布局管理器
    QHBoxLayout* layout=new QHBoxLayout();
    layout->setSpacing(10);
    layout->setContentsMargins(20,0,20,0);
    this->setLayout(layout);

    //3.创建复选框
    _checkBox=new QCheckBox();
    _checkBox->setChecked(checked);
    _checkBox->setFixedSize(25,25);
    QString style="QCheckBox{background-color:transparent;} QCheckBox::indicator{width:20px;height:20px;image:url(:/resource/Image/unchecked.png);}";
    style+="QCheckBox::indicator:checked{image:url(:/resource/Image/checked.png);}";
    _checkBox->setStyleSheet(style);

    //4.创建头像
    _avatarBtn= new QPushButton();
    _avatarBtn->setFixedSize(40,40);
    _avatarBtn->setIconSize(QSize(40,40));
    _avatarBtn->setIcon(avatar);

    //5.设置名字
    _nameLabel=new QLabel();
    _nameLabel->setText(name);
    _nameLabel->setStyleSheet("QLabel {background-color:transparent;}");

    //6.添加上述内容到布局管理器
    layout->addWidget(_checkBox);
    layout->addWidget(_avatarBtn);
    layout->addWidget(_nameLabel);
}

void ChooseFriendItem::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    //根据鼠标进入状态，绘制不同颜色
    if(_isHover){
        //绘制成深色
        painter.fillRect(this->rect(),QColor(230,230,230));
    }else{
        //绘制成浅色
        painter.fillRect(this->rect(),QColor(255,255,255));
    }
}

void ChooseFriendItem::enterEvent(QEnterEvent *event)
{
    (void) event;
    _isHover=true;
    //更新界面
    this->update();
    //或者这样
    //this->repaint();
}

void ChooseFriendItem::leaveEvent(QEvent *event)
{
    (void) event;
    _isHover=false;
    //更新界面
    this->update();
    //或者这样
    //this->repaint();
}


//////////////////////////////////////////
/// 选择好友的窗口
//////////////////////////////////////////

ChooseFriendDialog::ChooseFriendDialog(QWidget *parent):QDialog(parent)
{
    //1.设置窗口几本属性
    this->setWindowTitle("选择好友");
    this->setWindowIcon(QIcon(":/resource/Image/logo.png"));
    this->setFixedSize(750,550);
    this->setStyleSheet("QWidget{background-color:rgb(255,255,255);}");
    this->setAttribute(Qt::WA_DeleteOnClose);

    //2.创建布局管理器
    QHBoxLayout* layout=new QHBoxLayout();
    layout->setContentsMargins(0,0,0,0);
    layout->setSpacing(0);
    this->setLayout(layout);

    //3.针对左侧窗口初始化
    initLeft(layout);

    //4.针对右侧窗口初始化
    initRight(layout);
}

void ChooseFriendDialog::initLeft(QHBoxLayout *layout)
{
    //1.创建滚动区域
    QScrollArea* scrollArea=new QScrollArea();
    scrollArea->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    scrollArea->setWidgetResizable(true);
    scrollArea->horizontalScrollBar()->setStyleSheet("QScrollBar::horizontal {height:0px;}");
    scrollArea->verticalScrollBar()->setStyleSheet("QScrollBar::vertical {width:2px;background-color:rgb(255,255,255);}");
    scrollArea->setStyleSheet("QScrollBar{border:none;}");
    layout->addWidget(scrollArea,1);

    //2.创建QWidget设置到滚动区域中
    _totalContainer=new QWidget();
    _totalContainer->setStyleSheet("QWidget{background-color:rgb(255,255,255);}");
    scrollArea->setWidget(_totalContainer);

    //3.创建左侧子窗口的垂直布局管理器
    QVBoxLayout* vlayout=new QVBoxLayout();
    vlayout->setSpacing(0);
    vlayout->setContentsMargins(0,0,0,0);
    vlayout->setAlignment(Qt::AlignTop);
    _totalContainer->setLayout(vlayout);

    //4.添加vlayout元素
    //先构造测试数据
#if TEST_UI
    QIcon defaultAvatar(":/resource/Image/defaultAvatar.png");
    for(int i=0;i<30;++i)
    {
        this->addFriend(defaultAvatar,"张三"+QString::number(i),false);
    }
#endif
}

void ChooseFriendDialog::initRight(QHBoxLayout *layout)
{
    //1.创建右侧的布局管理器
    QGridLayout* gridlayout=new QGridLayout();
    gridlayout->setContentsMargins(20,0,20,20);
    gridlayout->setSpacing(10);
    layout->addLayout(gridlayout,1);

    //2.创建标题Label
    QLabel* tipLabel=new QLabel();
    tipLabel->setText("选择联系人");
    tipLabel->setFixedHeight(30);
    tipLabel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    tipLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
    tipLabel->setStyleSheet("QLabel {font-size:16px;font-weight:700;}");

    //3.创建滚动区域
    QScrollArea* scrollArea=new QScrollArea();
    scrollArea->setWidgetResizable(true);
    scrollArea->verticalScrollBar()->setStyleSheet("QScrollBar:vertical {width:2px;background-color:rgb(255,255,255);}");
    scrollArea->horizontalScrollBar()->setStyleSheet("QScrollBar:horizontal{height:0px;}");
    scrollArea->setStyleSheet("QScrollArea{border:none;}");
    scrollArea->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    //4.创建滚动区域中的QWidget
    _selectContainer=new QWidget();
    _selectContainer->setObjectName("selectedContainer");
    _selectContainer->setStyleSheet("#selectedContainer{background-color:rgb(255,255,255);}");
    scrollArea->setWidget(_selectContainer);

    //5.创建selectedContainer中的垂直布局
    QVBoxLayout* vlayout=new QVBoxLayout();
    vlayout->setSpacing(0);
    vlayout->setContentsMargins(0,0,0,0);
    vlayout->setAlignment(Qt::AlignTop);
    _selectContainer->setLayout(vlayout);

    //6.创建底部按钮
    QString style="QPushButton{color:rgb(7,191,96);background:rgb(240,240,240);border-radius:5px;}";
    style+="QPushButton:hover{background-color:rgb(220,220,220);} QPushButton:pressed{background-color:rgb(200,200,200);}";
    QPushButton* okBtn=new QPushButton();
    okBtn->setFixedHeight(40);
    okBtn->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    okBtn->setText("完成");
    okBtn->setStyleSheet(style);

    QPushButton* cancelBtn=new QPushButton();
    cancelBtn->setFixedHeight(40);
    cancelBtn->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    cancelBtn->setText("取消");
    cancelBtn->setStyleSheet(style);

    //7.添加上述控件
    gridlayout->addWidget(tipLabel,0,0,1,9);
    gridlayout->addWidget(scrollArea,1,0,1,9);
    gridlayout->addWidget(okBtn,2,1,1,3);
    gridlayout->addWidget(cancelBtn,2,5,1,3);

    //8.构造测试数据
#if TEST_UI
    QIcon defaultAvatar(":/resource/Image/defaultAvatar.png");
    for(int i=0;i<30;++i)
    {
        this->addSelectedFriend(defaultAvatar,"张三"+QString::number(i));
    }
#endif
}

void ChooseFriendDialog::addFriend(const QIcon &avatar, const QString &name, bool checked)
{
    ChooseFriendItem* item=new ChooseFriendItem(avatar,name,checked);
    _totalContainer->layout()->addWidget(item);
}

void ChooseFriendDialog::addSelectedFriend(const QIcon &avatar, const QString &name)
{
    ChooseFriendItem* item=new ChooseFriendItem(avatar,name,true);
    _selectContainer->layout()->addWidget(item);
}

