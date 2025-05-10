#include "historymessagewidget.h"
#include <QGridLayout>
#include <QRadioButton>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QDateTimeEdit>
#include <QScrollArea>
#include <QScrollBar>

#include "debug.h"

using namespace model;

///////////////////////////////////////////////////
/// 表示一个历史元素
///////////////////////////////////////////////////

HistoryItem *HistoryItem::makeHistoryItem(const Message &message)
{
    //1.创建对象
    HistoryItem* item=new HistoryItem();
    //expanding是有空间就拓展，另一个是优先保持自身尺寸，根据实际情况，做出一些 缩小/放大
    item->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Preferred);

    //2.创建布局
    QGridLayout* layout=new QGridLayout();
    layout->setVerticalSpacing(0);
    layout->setHorizontalSpacing(10);
    layout->setContentsMargins(0,0,0,0);
    item->setLayout(layout);

    //3.创建头像
    QPushButton* avatarBtn=new QPushButton();
    avatarBtn->setFixedSize(40,40);
    avatarBtn->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    avatarBtn->setIconSize(QSize(40,40));
    avatarBtn->setIcon(message._sender._avator);
    avatarBtn->setStyleSheet("QPushButton{border:none;}");

    //4.创建昵称+时间
    QLabel* nameLabel=new QLabel();
    nameLabel->setText(message._sender._nickname + "|" + message._time);
    nameLabel->setFixedHeight(20);
    nameLabel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    //5.消息内容部分
    QLabel* contentWidget=nullptr;
    if(message._messagetype == TEXT_TYPE){
        QLabel* label=new QLabel();
        label->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
        label->setWordWrap(true);
        label->setText(QString(message._content));
        label->adjustSize();    //label自动调整大小
        contentWidget=label;
    }else if(message._messagetype == IMAGE_TYPE){

    }else if(message._messagetype == FILE_TYPE){

    }else if(message._messagetype == SPEECH_TYPE){

    }else{
        LOG()<<"错误的消息类型！messageType="<<message._messagetype;
    }

    //6.添加控件到布局中
    layout->addWidget(avatarBtn,0,0,2,1);
    layout->addWidget(nameLabel,0,1,1,1);
    layout->addWidget(contentWidget,1,1,5,1);

    return item;
}

///////////////////////////////////////////////////
/// 展示历史消息窗口
///////////////////////////////////////////////////

HistoryMessageWidget::HistoryMessageWidget(QWidget *parent):QDialog(parent)
{
    //1.设置窗口本身属性
    this->setFixedSize(600,600);
    this->setWindowTitle("历史消息");
    this->setWindowIcon(QIcon(":/resource/Image/logo.png"));
    this->setStyleSheet("QWidget{background-color:rgb(255,255,255);}");
    this->setAttribute(Qt::WA_DeleteOnClose);

    //2.创建布局管理器
    QGridLayout* layout=new QGridLayout();
    layout->setSpacing(10);
    layout->setContentsMargins(30,30,30,0);
    this->setLayout(layout);

    //3.创建单选按钮
    QRadioButton* keyRadioBtn=new QRadioButton();
    QRadioButton* timeRadioBtn=new QRadioButton();
    keyRadioBtn->setText("按关键词查询");
    timeRadioBtn->setText("按时间查询");
    //默认按关键词查询
    keyRadioBtn->setChecked(true);
    layout->addWidget(keyRadioBtn,0,0,1,2);
    layout->addWidget(timeRadioBtn,0,2,1,2);

    //4.创建搜索框
    QLineEdit* searchEdit=new QLineEdit();
    searchEdit->setFixedHeight(50);
    searchEdit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    searchEdit->setPlaceholderText("要搜索的关键词");
    searchEdit->setStyleSheet("QLineEdit{border:none;border-radius:10px;background-color:rgb(240,240,240);font-size:16px;padding-left:10px;}");
    layout->addWidget(searchEdit,1,0,1,8);

    //5.创建搜索按钮
    QPushButton* searchBtn=new QPushButton();
    searchBtn->setFixedSize(50,50);
    searchBtn->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    searchBtn->setIcon(QIcon(":/resource/Image/search.png"));
    QString btnStyle="QPushButton{border:none;background-color:rgb(240,240,240);border-radius:10px;}";
    btnStyle+="QPushButton:pressed{background-color:rgb(220,220,220);}";
    searchBtn->setStyleSheet(btnStyle);
    layout->addWidget(searchBtn,1,8,1,1);

    //6.创建时间相关的部分控件,初始情况下要隐藏
    QLabel* begTag=new QLabel();
    begTag->setText("开始时间");
    QLabel* endTag=new QLabel();
    endTag->setText("结束时间");
    QDateTimeEdit* begTimeEdit=new QDateTimeEdit();
    QDateTimeEdit* endTimeEdit=new QDateTimeEdit();
    begTimeEdit->setFixedHeight(40);
    endTimeEdit->setFixedHeight(40);
    begTag->hide();
    endTag->hide();
    begTimeEdit->hide();
    endTimeEdit->hide();

    //7.创建滚动区域
    initScrollArea(layout);

    //8.设置槽函数
    connect(keyRadioBtn,&QRadioButton::clicked,this,[=](){
        //隐藏时间搜索框，并移除
        layout->removeWidget(begTag);
        layout->removeWidget(begTimeEdit);
        layout->removeWidget(endTag);
        layout->removeWidget(endTimeEdit);

        begTag->hide();
        begTimeEdit->hide();
        endTag->hide();
        endTimeEdit->hide();

        //将关键词控件添加到布局中
        layout->addWidget(searchEdit,1,0,1,8);
        layout->addWidget(searchBtn,1,8,1,1);
        searchEdit->show();
        searchBtn->show();
    });

    connect(timeRadioBtn,&QRadioButton::clicked,this,[=](){
        //隐藏关键词搜索框，并移除
        layout->removeWidget(searchEdit);
        searchEdit->hide();

        //将相关时间控件添加到布局中
        layout->addWidget(begTag,1,0,1,1);
        layout->addWidget(begTimeEdit,1,1,1,3);
        layout->addWidget(endTag,1,4,1,1);
        layout->addWidget(endTimeEdit,1,5,1,3);
        begTag->show();
        begTimeEdit->show();
        endTag->show();
        endTimeEdit->show();
    });

    //构造测试数据
#if TEST_UI
    for(int i=0;i<30;++i)
    {
        UserInfo sender;
        sender._userId="";
        sender._nickname="张三"+QString::number(i);
        sender._avator=QIcon(":/resource/Image/defaultAvatar.png");
        sender._desciption="";
        sender._phone="2365465";
        Message message=Message::makeMessage(model::TEXT_TYPE,"",sender,("消息内容"+QString::number(i)).toUtf8(),"");
        this->addHistoryMessage(message);
    }
#endif
}

void HistoryMessageWidget::addHistoryMessage(const Message &message)
{
    HistoryItem* item=HistoryItem::makeHistoryItem(message);
    container->layout()->addWidget(item);
}

void HistoryMessageWidget::clear()
{
    QVBoxLayout* layout=dynamic_cast<QVBoxLayout*>(container->layout());
    for(int i=layout->count()-1;i>=0;--i)
    {
        QWidget* w=layout->itemAt(i)->widget();
        if(w==nullptr)  continue;

        layout->removeWidget(w);
        w->deleteLater();
    }
}

void HistoryMessageWidget::initScrollArea(QGridLayout *layout)
{
    //1.创建滚动区域对象
    QScrollArea* scrollArea=new QScrollArea();
    scrollArea->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    scrollArea->setWidgetResizable(true);
    scrollArea->verticalScrollBar()->setStyleSheet("QScrollBar:vertical{width:2px;background-color:rgb(255,255,255);}");
    scrollArea->horizontalScrollBar()->setStyleSheet("QScrollBar:horizontal{height:0;}");
    scrollArea->setStyleSheet("QScrollArea{border:none;}");

    //2.创建QWidget，持有要加入的新内容
    container=new  QWidget();
    scrollArea->setWidget(container);

    //3.创建container内的布局管理器
    QVBoxLayout* vlayout=new QVBoxLayout();
    vlayout->setSpacing(10);
    vlayout->setContentsMargins(0,0,0,0);
    vlayout->setAlignment(Qt::AlignTop);
    container->setLayout(vlayout);

    //4.把滚动区加入到整个layout中
    layout->addWidget(scrollArea,2,0,1,9);
}




