#ifndef SELFINFOWIDGET_H
#define SELFINFOWIDGET_H

#include <QDialog>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

class SelfInfoWidget : public QDialog
{
    Q_OBJECT
public:
    SelfInfoWidget(QWidget* parent);

private:
    QPushButton* _avatarBtn;
    QLabel* _idTag;//"序号"
    QLabel* _idLabel;//显示序号值

    QLabel* _nameTag;//"昵称"
    QLabel* _nameLabel;//显示名字
    QLineEdit* _nameEdit;//编辑昵称
    QPushButton* _nameModifyBtn;//修改名字
    QPushButton* _nameSubmitBtn;//提交按钮

    QLabel* _decriptionTag;//"签名"
    QLabel* _decriptionLabel;//显示签名
    QLineEdit* _decriptionEdit;//编辑签名
    QPushButton* _decriptionModifyBtn;//修改签名
    QPushButton* _decriptionSubmitBtn;//提交签名

    QLabel* _phoneTag;//"电话"
    QLabel* _phoneLabel;//显示电话
    QLineEdit* _phoneEdit;//编辑电话
    QPushButton* _phoneModifyBtn;//修改电话
    QPushButton* _phoneSubmitBtn;//提交电话

    QLabel* _verifyCodeTag;//“显示验证码”
    QLineEdit* _verifyCodeEdit;//输入验证码
    QPushButton* _getVerifyCodeBtn;//获取验证码按钮
};

#endif // SELFINFOWIDGET_H
