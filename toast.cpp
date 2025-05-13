#include "toast.h"

#include <QApplication>
#include <QScreen>
#include <QVBoxLayout>
#include <QLabel>
#include <QTimer>

Toast::Toast(const QString &text)
{
    //1.设置基本参数
    this->setFixedSize(800,150);
    this->setWindowTitle("消息通知");
    this->setWindowIcon(QIcon(":/resource/Image/logo.png"));
    this->setAttribute(Qt::WA_DeleteOnClose);
    this->setStyleSheet("QDialog{background-color:rgb(255,255,255);}");
    //去掉窗口标题栏
    this->setWindowFlags(Qt::FramelessWindowHint);

    //2.窗口位置(靠下)
    //获取整个屏幕的尺寸
    QScreen* screen=QApplication::primaryScreen();
    int width=screen->size().width();
    int height=screen->size().height();

    int x=(width-this->width())/2;
    int y=height-this->height()-100;
    this->move(x,y);

    //3.添加布局管理器
    QVBoxLayout* layout=new QVBoxLayout();
    layout->setSpacing(0);
    layout->setContentsMargins(0,0,0,0);
    this->setLayout(layout);

    //4.创建提示文本的Label
    QLabel* label=new QLabel();
    label->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    label->setAlignment(Qt::AlignCenter);
    label->setStyleSheet("QLabel{font-size:25px;}");
    label->setText(text);
    layout->addWidget(label);

    //5.实现两秒之后自动关闭
    QTimer *timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,[=](){
        timer->stop();
        //关闭当前窗口
        this->close();
    });
    timer->start(2000);
}

void Toast::showMessage(const QString &text)
{
    Toast* toast=new Toast(text);
    toast->show();
}


