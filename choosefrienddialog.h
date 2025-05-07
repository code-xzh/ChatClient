#ifndef CHOOSEFRIENDDIALOG_H
#define CHOOSEFRIENDDIALOG_H

#include <QDialog>
#include <QWidget>
#include <QCheckBox>
#include <QLabel>
#include <QHBoxLayout>


//////////////////////////////////////////
/// 选择好友窗口的好友项
//////////////////////////////////////////

class ChooseFriendDialog;

class ChooseFriendItem:public QWidget
{
    Q_OBJECT
public:
    ChooseFriendItem(ChooseFriendDialog* onwer,const QString& userId,const QIcon& avatar,const QString& name,bool checked);

    void paintEvent(QPaintEvent* event) override;
    void enterEvent(QEnterEvent* event) override;
    void leaveEvent(QEvent* event) override;

    const QString& getUserId() const
    {
        return _userId;
    }

    QCheckBox* getcheckBox()
    {
        return _checkBox;
    }
private:
    bool _isHover=false;

    QCheckBox* _checkBox;
    QPushButton* _avatarBtn;
    QLabel* _nameLabel;
    ChooseFriendDialog* _onwer; //哪个窗口持有

    QString _userId;//记录用户的userId
};


//////////////////////////////////////////
/// 选择好友的窗口
//////////////////////////////////////////

class ChooseFriendDialog : public QDialog
{
    Q_OBJECT
public:
    ChooseFriendDialog(QWidget* parent);

    void initLeft(QHBoxLayout* layout);
    void initRight(QHBoxLayout* layout);

    void addFriend(const QString& userId,const QIcon& avatar,const QString& name,bool checked);
    void addSelectedFriend(const QString& userId,const QIcon& avatar,const QString& name);
    void deleteSelectedFriend(const QString& userId);

private:
    //保存左侧全部好友列表的QWidget
    QWidget* _totalContainer;
    //保存右侧选中好友列表的QWidget
    QWidget* _selectContainer;

};

#endif // CHOOSEFRIENDDIALOG_H
