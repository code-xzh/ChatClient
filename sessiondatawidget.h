#ifndef SESSIONDATAWIDGET_H
#define SESSIONDATAWIDGET_H

#include <QDialog>
#include <QWidget>
#include <QLabel>
#include <QPushButton>


//////////////////////////////////////////////////
/// 表示 一个头像+一个名字 空控件组合
//////////////////////////////////////////////////

class AvatarItem:public QWidget
{
    Q_OBJECT
public:
    AvatarItem(const QIcon& avatar,const QString& name);

private:
    QPushButton* _avatarBtn;
    QLabel* _nameLabel;
};

//////////////////////////////////////////////////
/// 表示 ”单聊会话详情“ 窗口
//////////////////////////////////////////////////

class SessionDataWidget : public QDialog
{
    Q_OBJECT
public:
    SessionDataWidget(QWidget* parent);

private:
    QPushButton* _deleteFriendBtn;
};

#endif // SESSIONDATAWIDGET_H
