#include "widget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "sessionfriendarea.h"
#include "selfinfowidget.h"
#include "sessiondatawidget.h"
#include "groupsessiondatawidget.h"
#include "addfrienddialog.h"
#include "debug.h"
#include "model/datacenter.h"

using namespace model;

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
    //初始化信号槽
    initSignalSlot();
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
    _windowMid->setFixedWidth(290);
    _windowRight->setMinimumWidth(600);

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
    //_userAvator->setIcon(QIcon(":/resource/Image/defaultAvatar.png"));
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
    //网格布局
    QGridLayout* layout=new QGridLayout();
    layout->setContentsMargins(0,20,0,0);//上方距离20
    layout->setHorizontalSpacing(0);
    layout->setVerticalSpacing(10);
    _windowMid->setLayout(layout);

    _searchEdit = new QLineEdit();
    _searchEdit->setFixedHeight(30);
    _searchEdit->setPlaceholderText("搜索");//提示文字
    _searchEdit->setStyleSheet("QLineEdit { border-radius: 5px;background-color:rgb(226,226,226);padding-left:5px;}");//边框圆角+颜色+内边距

    _addFriendBtn=new QPushButton();
    _addFriendBtn->setFixedSize(30,30);
    _addFriendBtn->setIcon(QIcon(":/resource/Image/cross.png"));
    QString style="QPushButton { border-radius: 5px;background-color:rgb(226,226,226);}";
    style+= "QPushButto::pressed {background-color:rgb(240,240,240);}";
    _addFriendBtn->setStyleSheet(style);

    sessionFriendArea=new SessionFriendArea();

    //控制边距，可以创建空白widget填充到布局管理器中
    QWidget* space1=new QWidget;
    space1->setFixedWidth(10);
    QWidget* space2=new QWidget;
    space2->setFixedWidth(10);
    QWidget* space3=new QWidget;
    space3->setFixedWidth(10);

    layout->addWidget(space1,0,0);
    layout->addWidget(_searchEdit,0,1);
    layout->addWidget(space2,0,2);
    layout->addWidget(_addFriendBtn,0,3);
    layout->addWidget(space3,0,4);
    layout->addWidget(sessionFriendArea,1,0,1,5);
}

void Widget::InitRightWindow()
{
    //1.创建右侧窗口的布局管理器
    QVBoxLayout* vlayout=new QVBoxLayout();
    vlayout->setSpacing(0);
    vlayout->setContentsMargins(0,0,0,0);
    vlayout->setAlignment(Qt::AlignTop);
    _windowRight->setLayout(vlayout);

    //2.创建上方标题栏
    QWidget* titleWidget=new QWidget();
    titleWidget->setFixedHeight(62);
    titleWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    titleWidget->setObjectName("titleWidget");
    titleWidget->setStyleSheet("#titleWidget{border-bottom:1px solid rgb(230,230,230);border-left:1px solid rgb(230,230,230);}");
    vlayout->addWidget(titleWidget);

    //3.给标题栏添加标题label和一个按钮
    QHBoxLayout* hlayout=new QHBoxLayout();
    hlayout->setSpacing(0);
    //标题和按钮左右间距20
    hlayout->setContentsMargins(10,0,10,0);
    titleWidget->setLayout(hlayout);

    QLabel* sessionTitleLabel=new QLabel();
    sessionTitleLabel->setStyleSheet("QLabel {font-size:22px;border-bottom:1px solid rgb(230,230,230);}");

#if TEST_UI
    //测试代码，后期从服务器获取
    sessionTitleLabel->setText("这是会话标题");
#endif

    hlayout->addWidget(sessionTitleLabel);

    _extraBtn=new QPushButton();
    _extraBtn->setFixedSize(30,30);
    _extraBtn->setIconSize(QSize(30,30));
    _extraBtn->setIcon(QIcon(":/resource/Image/more.png"));
    _extraBtn->setStyleSheet("QPushButton{border:none;background-color:rgb(245,245,245);}QPushButton:pressed{background-color:rgb(220,220,220);}");
    hlayout->addWidget(_extraBtn);

    //4.添加消息展示区
    messageShowArea=new MessageShowArea();
    vlayout->addWidget(messageShowArea);

    //5.消息编辑区
    messageEditArea =new MessageEditArea();
    //确保消息编辑器，处于窗口下方
    vlayout->addWidget(messageEditArea,0,Qt::AlignBottom);
}

void Widget::initSignalSlot()
{
    model::DataCenter* dataCenter=model::DataCenter::getInstance();

    //////////////////////////////////////////////
    /////连接信号槽，处理标签切换
    //////////////////////////////////////////////
    connect(_sessionTabBtm,&QPushButton::clicked,this,&Widget::switchTatoSession);
    connect(_friendTabBtm,&QPushButton::clicked,this,&Widget::switchTatoFriend);
    connect(_applyTabBtm,&QPushButton::clicked,this,&Widget::switchTatoApply);

    //////////////////////////////////////////////
    /////点击自己的头像，弹出对话框显示个人主页
    //////////////////////////////////////////////
    connect(_userAvator,&QPushButton::clicked,this,[=](){
        SelfInfoWidget* selfInfoWidget=new SelfInfoWidget(this);
        selfInfoWidget->exec();//弹出模态对话框
        //selfInfoWidget->show();//弹出非模态对话框
    });

    //////////////////////////////////////////////
    /////点击会话详情按钮，弹出对话框显示个人主页
    //////////////////////////////////////////////
    connect(_extraBtn,&QPushButton::clicked,this,[=](){
#if TEST_GROUP_SESSION_DATA
        bool isSingleChat=false;
#else
        bool isSingleChat=false;
#endif
        //判定是单聊还是群聊
        if(isSingleChat){
            //单聊弹出的窗口
            SessionDataWidget* sessionDataWidget= new SessionDataWidget(this);
            sessionDataWidget->exec();
        }else{
            //群聊弹出的窗口
            GroupSessionDataWidget* groupSessionDataWidget=new GroupSessionDataWidget(this);
            groupSessionDataWidget->exec();
        }
    });

    //////////////////////////////////////////////
    /////点击添加好友按钮，弹出添加好友窗口
    //////////////////////////////////////////////
    connect(_addFriendBtn,&QPushButton::clicked,this,[=](){
        AddFriendDialog* addFriendDialog=new AddFriendDialog(this);
        addFriendDialog->exec();//弹出模态对话框
        //selfInfoWidget->show();//弹出非模态对话框
    });

    //////////////////////////////////////////////
    /////修改对话框内容，弹出添加好友窗口
    //////////////////////////////////////////////
    connect(_searchEdit,&QLineEdit::textEdited,this,[=](){
        //取出内容，设置到新弹框的输入框
        const QString& searchKey=_searchEdit->text();
        AddFriendDialog* addFriendDialog=new AddFriendDialog(this);
        addFriendDialog->setSearchKey(searchKey);
        //清空主窗口的文本内容
        _searchEdit->setText("");
        addFriendDialog->exec();//弹出模态对话框
        //selfInfoWidget->show();//弹出非模态对话框
    });

    //////////////////////////////////////////////
    /////获取个人信息
    //////////////////////////////////////////////
    //提供方法
    connect(dataCenter,&DataCenter::getMyselfDone,this,[=](){
        //从DataCenter中拿到响应结果的myself,把头像显示出来到界面上
        auto myself=dataCenter->getMyself();
        _userAvator->setIcon(myself->_avator);
    });
    dataCenter->getMyselfAsync();

    //////////////////////////////////////////////
    /////获取好友列表
    //////////////////////////////////////////////
    loadFriendList();
}

void Widget::switchTatoSession()
{
    //1.记录当前切换到了哪个标签页
    _activetable=SESSION_LIST;
    //2.调整当前图表显示情况,把会话设为active。另外俩设为inactive
    _sessionTabBtm->setIcon(QIcon(":/resource/Image/session_active.png"));
    _friendTabBtm->setIcon(QIcon(":/resource/Image/friend_inactive.png"));
    _applyTabBtm->setIcon(QIcon(":/resource/Image/apply_inactive.png"));
    //3.在主窗口中间部分加载出会话列表数据
    this->loadSessionList();

}

void Widget::switchTatoFriend()
{
    //1.记录当前切换到了哪个标签页
    _activetable=FRIEND_LIST;
    //2.调整当前图表显示情况,把会话设为active。另外俩设为inactive
    _sessionTabBtm->setIcon(QIcon(":/resource/Image/session_inactive.png"));
    _friendTabBtm->setIcon(QIcon(":/resource/Image/friend_active.png"));
    _applyTabBtm->setIcon(QIcon(":/resource/Image/apply_inactive.png"));
    //3.在主窗口中间部分加载出会话列表数据
    this->loadFriendList();
}

void Widget::switchTatoApply()
{
    //1.记录当前切换到了哪个标签页
    _activetable=APPLY_LIST;
    //2.调整当前图表显示情况,把会话设为active。另外俩设为inactive
    _sessionTabBtm->setIcon(QIcon(":/resource/Image/session_inactive.png"));
    _friendTabBtm->setIcon(QIcon(":/resource/Image/friend_inactive.png"));
    _applyTabBtm->setIcon(QIcon(":/resource/Image/apply_active.png"));
    //3.在主窗口中间部分加载出会话列表数据
    this->loadApplyList();
}

//加载会话列表
void Widget::loadSessionList()
{

}

//加载好友列表
void Widget::loadFriendList()
{
    //好友列表数据是在DataCenter中存储的
    //如果已经有数据了，直接加载本地数据
    //否则，从服务器获取
    DataCenter* dataCenter=DataCenter::getInstance();
    if(dataCenter->getFriendList()!=nullptr)
    {
        //从内存加载数据
        updataFriendList();
    }else{
        //通过第五个参数，使得信号槽只绑定一次
        connect(dataCenter,&DataCenter::getFriendListDone,this,&Widget::updataFriendList,Qt::UniqueConnection);
        dataCenter->getFriendListAsync();
    }
}

//加载好友申请列表
void Widget::loadApplyList()
{

}

void Widget::updataFriendList()
{
    if(_activetable!=FRIEND_LIST)
    {
        //不是好友标签页，就不用渲染任何数据到界面上
        return;
    }

    DataCenter* dataCenter=DataCenter::getInstance();
    QList<UserInfo>* friendList=dataCenter->getFriendList();

    //清空界面之前的数据
    sessionFriendArea->clear();

    //遍历好友列表，添加到界面上
    for(const auto& f : *friendList)
    {
        sessionFriendArea->addItem(FRIEND_ITEM_TYPE,f._userId,f._avator,f._nickname,f._desciption);
    }
}


Widget::~Widget() {}
