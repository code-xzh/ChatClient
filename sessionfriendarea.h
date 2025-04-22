#ifndef SESSIONFRIENDAREA_H
#define SESSIONFRIENDAREA_H

#include <QWidget>
#include <QScrollArea>
#include <QLabel>

//////////////////////////////////////////////////
/// 滚动区域的Item的的类型
//////////////////////////////////////////////////
enum ItemType
{
    SESSION_ITEM_TYPE,
    FRIEND_ITEM_TYPE,
    APPLY_ITEM_TYPE,
};

//////////////////////////////////////////////////
/// 整个滚动区域的实现
//////////////////////////////////////////////////

class SessionFriendArea : public QScrollArea//滚动
{
    Q_OBJECT
public:
    explicit SessionFriendArea(QWidget *parent = nullptr);

    //清空所有Item
    void clear();

    //添加一个Item到该区域
    //id根据不同的item有不同的id，分别对应着当前item的id
    void addItem(ItemType itemType,const QString& id,const QIcon& avatar,const QString& name,const QString& text);

    //选中某个item
    void clickItem(int index);

private:
    //往container内部的layout添加元素，就能触发滚动元素
    QWidget* _container;

signals:
};

//////////////////////////////////////////////////
/// 滚动区域的Item的实现
//////////////////////////////////////////////////
class SessionFriendItem:public QWidget{
    Q_OBJECT
public:
    SessionFriendItem(QWidget* owner,const QIcon& avatar,const QString& name,const QString& text);
    void paintEvent(QPaintEvent *) override;
    void mousePressEvent(QMouseEvent* event) override;
    void enterEvent(QEnterEvent* event) override;
    void leaveEvent(QEvent* event) override;

    void select();
    virtual void active();//期望实现item被点击后的业务

private:
    QWidget* _owner;
    bool selected=false;//表示当前Item是否选中

protected:
    QLabel* messageLabel;
};

//////////////////////////////////////////////////
/// 会话Item的实现
//////////////////////////////////////////////////
class SessionItem:public SessionFriendItem
{
    Q_OBJECT
public:
    SessionItem(QWidget* owner,const QString& chatSessionId,const QIcon& avatar,
                const QString& name,const QString& lastMessage);

    void active() override;
private:
    QString _chatSessionId;//当前会话id
};

//////////////////////////////////////////////////
/// 好友Item的实现
//////////////////////////////////////////////////

class FriendItem : public SessionFriendItem
{
    Q_OBJECT

public:
    FriendItem(QWidget* owner,const QString& userId,const QIcon& avatar,
               const QString& name,const QString& description);

    void active() override;
private:
    QString _userId;
};

//////////////////////////////////////////////////
/// 好友申请Item的实现
//////////////////////////////////////////////////

class ApplyItem:public SessionFriendItem
{
    Q_OBJECT

public:
    //不需要附加文本了
    ApplyItem(QWidget* owner,const QString& userId,const QIcon& avatar,const QString& name);

    void active() override;
private:
    QString _userId;
};

#endif // SESSIONFRIENDAREA_H
