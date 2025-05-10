#ifndef ADDFRIENDDIALOG_H
#define ADDFRIENDDIALOG_H

#include <QDialog>
#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>

#include "model/data.h"

using model::UserInfo;

///////////////////////////////////////
/// 表示一个好友的搜索结果
///////////////////////////////////////
class FriendResultItem:public QWidget
{
    Q_OBJECT
public:
    FriendResultItem(const UserInfo& userInfo);

private:
    const UserInfo& _userInfo;
};


///////////////////////////////////////
/// 整个搜索好友窗口
///////////////////////////////////////

class AddFriendDialog : public QDialog
{
    Q_OBJECT
public:
    AddFriendDialog(QWidget* parent);

    //初始化结果显示区
    void initResultArea();

    //往窗口新增一个好友搜索
    void addResult(const UserInfo& userInfo);

    void clear();

    void setSearchKey(const QString& searchKey);

private:
    QGridLayout* layout;
    QWidget* resultContainer;
    QLineEdit* searchEdit;
};



#endif // ADDFRIENDDIALOG_H
