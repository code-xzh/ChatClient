#include "selfinfowidget.h"
#include <QCursor>
#include <QGridLayout>
#include "debug.h"

SelfInfoWidget::SelfInfoWidget(QWidget* parent):QDialog(parent)
{
    //1.设置窗口属性
    this->setFixedSize(500,250);
    this->setWindowTitle("个人信息");
    this->setWindowIcon(QIcon(":/resource/Image/logo.png"));
    //窗口被关闭时，自动销毁对话框
    this->setAttribute(Qt::WA_DeleteOnClose);
    //把窗口位置移到当前鼠标位置
    this->move(QCursor::pos());

    //2.创建布局管理器
    QGridLayout* layout=new QGridLayout();
    //layout->setSpacing(0);
    layout->setHorizontalSpacing(10);
    layout->setVerticalSpacing(8);
    layout->setContentsMargins(20,20,20,0);
    layout->setAlignment(Qt::AlignTop);
    this->setLayout(layout);

    //3.创建头像
    _avatarBtn=new QPushButton();
    _avatarBtn->setFixedSize(75,75);
    _avatarBtn->setIconSize(QSize(75,75));
    _avatarBtn->setIcon(QIcon(":/resource/Image/defaultAvatar.png"));
    _avatarBtn->setStyleSheet("QPushButton{border:noen;background-color:transparent;}");
    layout->addWidget(_avatarBtn,0,0,3,1);


    int height=30;

    //4.添加用户id显示
    _idTag=new QLabel();
    _idTag->setFixedSize(50,height);
    _idTag->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    _idTag->setText("序号");
    _idTag->setStyleSheet("QLabel{font-size:14px;font-weight:800;}");

    _idLabel= new QLabel();
    _idLabel->setFixedHeight(height);
    _idLabel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    //5.添加用户名字显示
    _nameTag=new QLabel();
    _nameTag->setFixedSize(50,height);
    _nameTag->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    _nameTag->setText("昵称");
    _nameTag->setStyleSheet("QLabel{font-size:14px;font-weight:800;}");

    _nameLabel= new QLabel();
    _nameLabel->setFixedHeight(height);
    _nameLabel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    _nameModifyBtn=new QPushButton();
    _nameModifyBtn->setFixedSize(70,25);
    _nameModifyBtn->setIconSize(QSize(20,20));
    _nameModifyBtn->setIcon(QIcon(":/resource/Image/modify.png"));
    _nameModifyBtn->setStyleSheet("QPushButton{border:none;background-color:transparent;} QPushButton:pressed{background-color:rgb(210,210,210);}");

    _nameEdit=new QLineEdit();
    _nameEdit->setFixedHeight(height);
    _nameEdit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    _nameEdit->setStyleSheet("QLineEdit{border:none;border-radius:5px;padding-left:2px;}");
    _nameEdit->hide();

    _nameSubmitBtn=new QPushButton();
    _nameSubmitBtn->setFixedSize(70,25);
    _nameSubmitBtn->setIconSize(QSize(20,20));
    _nameSubmitBtn->setIcon(QIcon(":/resource/Image/submit.png"));
    _nameSubmitBtn->setStyleSheet("QPushButton{border:none;background-color:transparent;} QPushButton:pressed{background-color:rgb(210,210,210);}");
    _nameSubmitBtn->hide();

    //6.添加个性签名
    _decriptionTag=new QLabel();
    _decriptionTag->setFixedSize(50,height);
    _decriptionTag->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    _decriptionTag->setText("签名");
    _decriptionTag->setStyleSheet("QLabel{font-size:14px;font-weight:800;}");

    _decriptionLabel= new QLabel();
    _decriptionLabel->setFixedHeight(height);
    _decriptionLabel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    _decriptionModifyBtn=new QPushButton();
    _decriptionModifyBtn->setFixedSize(70,25);
    _decriptionModifyBtn->setIconSize(QSize(20,20));
    _decriptionModifyBtn->setIcon(QIcon(":/resource/Image/modify.png"));
    _decriptionModifyBtn->setStyleSheet("QPushButton{border:none;background-color:transparent;} QPushButton:pressed{background-color:rgb(210,210,210);}");

    _decriptionEdit=new QLineEdit();
    _decriptionEdit->setFixedHeight(height);
    _decriptionEdit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    _decriptionEdit->setStyleSheet("QLineEdit{border:none;border-radius:5px;padding-left:2px;}");
    _decriptionEdit->hide();

    _decriptionSubmitBtn=new QPushButton();
    _decriptionSubmitBtn->setFixedSize(70,25);
    _decriptionSubmitBtn->setIconSize(QSize(20,20));
    _decriptionSubmitBtn->setIcon(QIcon(":/resource/Image/submit.png"));
    _decriptionSubmitBtn->setStyleSheet("QPushButton{border:none;background-color:transparent;} QPushButton:pressed{background-color:rgb(210,210,210);}");
    _decriptionSubmitBtn->hide();

    //7.添加电话
    _phoneTag=new QLabel();
    _phoneTag->setFixedSize(50,height);
    _phoneTag->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    _phoneTag->setText("电话");
    _phoneTag->setStyleSheet("QLabel{font-size:14px;font-weight:800;}");

    _phoneLabel= new QLabel();
    _phoneLabel->setFixedHeight(height);
    _phoneLabel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    _phoneModifyBtn=new QPushButton();
    _phoneModifyBtn->setFixedSize(70,25);
    _phoneModifyBtn->setIconSize(QSize(20,20));
    _phoneModifyBtn->setIcon(QIcon(":/resource/Image/modify.png"));
    _phoneModifyBtn->setStyleSheet("QPushButton{border:none;background-color:transparent;} QPushButton:pressed{background-color:rgb(210,210,210);}");

    _phoneEdit=new QLineEdit();
    _phoneEdit->setFixedHeight(height);
    _phoneEdit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    _phoneEdit->setStyleSheet("QLineEdit{border:none;border-radius:5px;padding-left:2px;}");
    _phoneEdit->hide();

    _phoneSubmitBtn=new QPushButton();
    _phoneSubmitBtn->setFixedSize(70,25);
    _phoneSubmitBtn->setIconSize(QSize(20,20));
    _phoneSubmitBtn->setIcon(QIcon(":/resource/Image/submit.png"));
    _phoneSubmitBtn->setStyleSheet("QPushButton{border:none;background-color:transparent;} QPushButton:pressed{background-color:rgb(210,210,210);}");
    _phoneSubmitBtn->hide();

    //8.添加验证码
    _verifyCodeTag=new QLabel();
    _verifyCodeTag->setFixedSize(50,height);
    _verifyCodeTag->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    _verifyCodeTag->setText("验证码");
    _verifyCodeTag->setStyleSheet("QLabel{font-size:14px;font-weight:800;}");
    _verifyCodeTag->hide();

    _verifyCodeEdit=new QLineEdit();
    _verifyCodeEdit->setFixedHeight(height);
    _verifyCodeEdit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    _verifyCodeEdit->setStyleSheet("QLineEdit{border:none;border-radius:5px;padding-left:2px;}");
    _verifyCodeEdit->hide();

    _getVerifyCodeBtn=new QPushButton();
    _getVerifyCodeBtn->setText("获取验证码");
    _getVerifyCodeBtn->setStyleSheet("QPushButton{border:none;background-color:transparent;}QPushButton:pressed{background-color:rgb(231,231,231);}");
    _getVerifyCodeBtn->setFixedSize(70,height);
    _getVerifyCodeBtn->hide();

    //9.往布局管理器添加widget，0列被头像占据，接下来都从第一列开始排
    layout->addWidget(_idTag,0,1);
    layout->addWidget(_idLabel,0,2);

    layout->addWidget(_nameTag,1,1);
    layout->addWidget(_nameLabel,1,2);
    layout->addWidget(_nameModifyBtn,1,3);

    layout->addWidget(_decriptionTag,2,1);
    layout->addWidget(_decriptionLabel,2,2);
    layout->addWidget(_decriptionModifyBtn,2,3);

    layout->addWidget(_phoneTag,3,1);
    layout->addWidget(_phoneLabel,3,2);
    layout->addWidget(_phoneModifyBtn,3,3);

    layout->addWidget(_verifyCodeTag,4,1);
    layout->addWidget(_verifyCodeEdit,4,2);
    layout->addWidget(_getVerifyCodeBtn,4,3);

#if TEST_UI
    _idLabel->setText("1234");
    _nameLabel->setText("张三");
    _decriptionLabel->setText("我是最靓的仔");
    _phoneLabel->setText("1325645641");
#endif

    //10.连接信号槽
    connect(_nameModifyBtn,&QPushButton::clicked,this,[=](){
        //把nameLabel和nameModifyBtn隐藏起来
        _nameLabel->hide();
        _nameModifyBtn->hide();
        layout->removeWidget(_nameLabel);
        layout->removeWidget(_nameModifyBtn);

        //把nameEdit和nameSubmitBtn显示出来
        _nameEdit->show();
        _nameSubmitBtn->show();
        layout->addWidget(_nameEdit,1,2);
        layout->addWidget(_nameSubmitBtn,1,3);

        //把输入框内容进行设置
        _nameEdit->setText(_nameLabel->text());
    });

    connect(_decriptionModifyBtn,&QPushButton::clicked,this,[=](){
        //把nameLabel和nameModifyBtn隐藏起来
        _decriptionLabel->hide();
        _decriptionModifyBtn->hide();
        layout->removeWidget(_decriptionLabel);
        layout->removeWidget(_decriptionModifyBtn);

        //把nameEdit和nameSubmitBtn显示出来
        _decriptionEdit->show();
        _decriptionSubmitBtn->show();
        layout->addWidget(_decriptionEdit,2,2);
        layout->addWidget(_decriptionSubmitBtn,2,3);

        //把输入框内容进行设置
        _decriptionEdit->setText(_decriptionLabel->text());
    });

    connect(_phoneModifyBtn,&QPushButton::clicked,this,[=](){
        //把nameLabel和nameModifyBtn隐藏起来
        _phoneLabel->hide();
        _phoneModifyBtn->hide();
        layout->removeWidget(_phoneLabel);
        layout->removeWidget(_phoneModifyBtn);

        //把nameEdit和nameSubmitBtn显示出来
        _phoneEdit->show();
        _phoneSubmitBtn->show();
        layout->addWidget(_phoneEdit,3,2);
        layout->addWidget(_phoneSubmitBtn,3,3);

        //显示验证码那一排
        _verifyCodeTag->show();
        _verifyCodeEdit->show();
        _getVerifyCodeBtn->show();

        //把输入框内容进行设置
        _phoneEdit->setText(_phoneLabel->text());
    });


}
