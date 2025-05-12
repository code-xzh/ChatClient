#include "phoneloginwidget.h"

#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

#include "loginwidget.h"

PhoneLoginWidget::PhoneLoginWidget(QWidget *parent)
    : QWidget{parent}
{
    //1.设置窗口的基本属性
    this->setFixedSize(400,350);
    this->setWindowTitle("登录");
    this->setWindowIcon(QIcon(":/resource/Image/logo.png"));
    this->setStyleSheet("QWidget{background-color:rgb(255,255,255);}");
    this->setAttribute(Qt::WA_DeleteOnClose);

    //2.创建核心布局管理器
    QGridLayout* layout=new QGridLayout();
    layout->setSpacing(10);
    layout->setContentsMargins(50,0,50,0);
    this->setLayout(layout);

    //3.创建标题
    QLabel* titleLabel=new QLabel();
    titleLabel->setText("登录");
    titleLabel->setFixedHeight(40);
    titleLabel->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    titleLabel->setStyleSheet("QLabel{font-size:40px;font-weight:600;}");
    titleLabel->setAlignment(Qt::AlignCenter);

    //4.创建手机号输入框
    QString editStyle("QLineEdit{border:none;border-radius:10px;font-size:20px;background-color:rgb(240,240,240);padding-left:5px;}");
    QLineEdit* phoneEdit= new QLineEdit();
    phoneEdit->setPlaceholderText("输入手机号");
    phoneEdit->setFixedHeight(40);
    phoneEdit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    phoneEdit->setStyleSheet(editStyle);

    //5.创建验证码输入框
    QLineEdit* vertifyCodedEdit=new QLineEdit();
    vertifyCodedEdit->setFixedHeight(40);
    vertifyCodedEdit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    vertifyCodedEdit->setPlaceholderText("输入短信验证码");
    vertifyCodedEdit->setStyleSheet(editStyle);

    //6.创建发送验证码按钮
    QString btnWhiteStyle="QPushButton{border:none;border-radius:10px;background-color:transparent;}";
    btnWhiteStyle+="QPushButton:pressed{background-color:rgb(240,240,240);}";
    QPushButton*  sendVertifyCodeBtn=new QPushButton();
    sendVertifyCodeBtn->setFixedSize(100,40);
    sendVertifyCodeBtn->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    sendVertifyCodeBtn->setText("发送验证码");
    sendVertifyCodeBtn->setStyleSheet(btnWhiteStyle);

    //7.创建提交按钮
    QPushButton* submitBtn=new QPushButton();
    submitBtn->setFixedHeight(40);
    submitBtn->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    submitBtn->setText("登录");
    QString btnGreenStyle="QPushButton{border:none;border-radius:10px;background-color:rgb(44,182,61);color:rgb(255,255,255;)}";
    btnGreenStyle+="QPushButton:pressed{background-color:rgb(240,240,240);}";
    submitBtn->setStyleSheet(btnGreenStyle);

    //8.创建切换到用户名模式按钮
    QPushButton* userModeBtn=new QPushButton();
    userModeBtn->setFixedSize(100,40);
    userModeBtn->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    userModeBtn->setText("切换到用户名");
    userModeBtn->setStyleSheet(btnWhiteStyle);

    //9.创建 切换注册登录按钮
    QPushButton *switchModeBtn = new QPushButton();
    switchModeBtn->setFixedSize(100,40);
    userModeBtn->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    switchModeBtn->setText("注册");
    switchModeBtn->setStyleSheet(btnWhiteStyle);

    //10.添加到布局管理器
    layout->addWidget(titleLabel,0,0,1,5);
    layout->addWidget(phoneEdit,1,0,1,5);
    layout->addWidget(vertifyCodedEdit,2,0,1,4);
    layout->addWidget(sendVertifyCodeBtn,2,4,1,1);
    layout->addWidget(submitBtn,3,0,1,5);
    layout->addWidget(userModeBtn,4,0,1,1);
    layout->addWidget(switchModeBtn,4,4,1,1);

    //11.添加信号槽
    connect(switchModeBtn,&QPushButton::clicked,this,[=](){
        if(_isLoginMode){
            //登陆模式->注册模式
            this->setWindowTitle("注册");
            titleLabel->setText("注册");
            submitBtn->setText("注册");
            switchModeBtn->setText("登录");
        }else{
            //注册模式->登陆模式
            this->setWindowTitle("登录");
            titleLabel->setText("登录");
            submitBtn->setText("登录");
            switchModeBtn->setText("注册");
        }
        _isLoginMode=!_isLoginMode;
    });

    connect(userModeBtn,&QPushButton::clicked,this,[=](){
        LoginWidget* loginWidget=new LoginWidget(nullptr);
        loginWidget->show();

        //关闭当前窗口
        this->close();
    });
}
