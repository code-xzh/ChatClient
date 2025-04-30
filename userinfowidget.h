#ifndef USERINFOWIDGET_H
#define USERINFOWIDGET_H

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include "model/data.h"

using model::UserInfo;

class UserInfoWidget : public QDialog
{
    Q_OBJECT
public:
    UserInfoWidget(const UserInfo& userInfo,QWidget* parent);

private:
    const UserInfo& _userInfo;

    QPushButton* _avatarBtn;
    QLabel* _idTag;
    QLabel* _idLabel;
    QLabel* _nameTag;
    QLabel* _nameLabel;
    QLabel* _phoneTag;
    QLabel* _phoneLabel;

    QPushButton* _applyBtn;
    QPushButton* _sendMessageBtn;//点击按钮，找到对应的对话并激活
    QPushButton* _deleteFriendBtn;
};

#endif // USERINFOWIDGET_H
