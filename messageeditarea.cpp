#include "messageeditarea.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QScrollBar>

MessageEditArea::MessageEditArea(QWidget *parent)
    : QWidget{parent}
{
    //1.设置必要属性
    this->setFixedHeight(200);
    this->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    //2.垂直方向的布局管理器
    QVBoxLayout* vlayout=new QVBoxLayout();
    vlayout->setSpacing(0);
    vlayout->setContentsMargins(10,0,10,10);
    this->setLayout(vlayout);

    //3.创建水平方向布局管理器
    QHBoxLayout* hlayout=new QHBoxLayout();
    hlayout->setSpacing(0);
    hlayout->setContentsMargins(0,0,0,0);
    hlayout->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    vlayout->addLayout(hlayout);

    //4.添加上方的四个按钮
    QString btnStyle="QPushButton{background-color:rgb(245,245,245);border:none;}QPushButton:pressed{background-color:rgb(255,255,255);}";
    QSize btnSize(35,35);
    QSize iconSize(25,25);

    _sendImageBtn=new QPushButton();
    _sendImageBtn->setFixedSize(btnSize);
    _sendImageBtn->setIconSize(iconSize);
    _sendImageBtn->setIcon(QIcon(":/resource/Image/image.png"));
    _sendImageBtn->setStyleSheet(btnStyle);
    hlayout->addWidget(_sendImageBtn);

    _sendFileBtn=new QPushButton();
    _sendFileBtn->setFixedSize(btnSize);
    _sendFileBtn->setIconSize(iconSize);
    _sendFileBtn->setIcon(QIcon(":/resource/Image/file.png"));
    _sendFileBtn->setStyleSheet(btnStyle);
    hlayout->addWidget(_sendFileBtn);

    _sendSpeechBtn=new QPushButton();
    _sendSpeechBtn->setFixedSize(btnSize);
    _sendSpeechBtn->setIconSize(iconSize);
    _sendSpeechBtn->setIcon(QIcon(":/resource/Image/sound.png"));
    _sendSpeechBtn->setStyleSheet(btnStyle);
    hlayout->addWidget(_sendSpeechBtn);

    _getHistoryBtn=new QPushButton();
    _getHistoryBtn->setFixedSize(btnSize);
    _getHistoryBtn->setIconSize(iconSize);
    _getHistoryBtn->setIcon(QIcon(":/resource/Image/history.png"));
    _getHistoryBtn->setStyleSheet(btnStyle);
    hlayout->addWidget(_getHistoryBtn);

    //5.添加多行编辑框
    _textEdit=new QPlainTextEdit();
    _textEdit->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    //设置边界线，背景色，文本大小，边框边距
    _textEdit->setStyleSheet("QPlainTextEdit{border:none;background-color:transparent;font-size:14px;padding:10px;}");
    _textEdit->verticalScrollBar()->setStyleSheet("QScrollBar:vertical{width:2px;background-color:rgb(45,45,45)}");

    vlayout->addWidget(_textEdit);

    //6.添加发送文本按钮
    _sendTextBtn=new QPushButton();
    _sendTextBtn->setText("发送");
    _sendTextBtn->setFixedSize(120,40);
    QString style="QPushButton {font-size:16px;color:rgb(7,193,96);border:none;background-color:rgb(233,233,233);border-radius:10px;}";
    style+="QPushButton:hover{background-color:rgb(210,210,210);}";
    style+="QPushButton:pressed{background-color:rgb(190,190,190);}";
    _sendTextBtn->setStyleSheet(style);
    vlayout->addWidget(_sendTextBtn,0,Qt::AlignRight | Qt::AlignVCenter);
};
