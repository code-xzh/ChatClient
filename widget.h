#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>

#include "messageshowarea.h"
#include "messageeditarea.h"
#include "sessionfriendarea.h"

class Widget : public QWidget
{
    Q_OBJECT

private:
    static Widget* _instance;
    Widget(QWidget *parent = nullptr);
public:
    static Widget* getInstance();
    ~Widget();

private:
    QWidget* _windowLeft;//窗口左区域
    QWidget* _windowMid;//窗口中区域
    QWidget* _windowRight;//窗口右区域

    QPushButton* _userAvator;//头像
    QPushButton* _sessionTabBtm;//会话标签页按钮
    QPushButton* _friendTabBtm;//好友标签页按钮
    QPushButton* _applyTabBtm;//申请好友标签页按钮

    QLineEdit* _searchEdit;//用户搜索框
    QPushButton* _addFriendBtn;//加好友按钮

    SessionFriendArea* sessionFriendArea;

    QPushButton* _extraBtn;//显示会话详情按钮

    MessageShowArea* messageShowArea;//消息展示区
    MessageEditArea* messageEditArea;//消息编辑区

    enum ActiveTable{
        SESSION_LIST,
        FRIEND_LIST,
        APPLY_LIST
    };

    ActiveTable _activetable=SESSION_LIST;

    //初始化主窗口样式布局
    void InitMainWindow();
    //初始化左侧窗口样式布局
    void InitLeftWindow();
    //初始化中间窗口样式布局
    void InitMidWindow();
    //初始化右侧窗口样式布局
    void InitRightWindow();
    //初始化信号槽
    void initSignalSlot();

    void switchTatoSession();
    void switchTatoFriend();
    void switchTatoApply();

    void loadSessionList();
    void loadFriendList();
    void loadApplyList();

    void updataFriendList();
};
#endif // WIDGET_H
