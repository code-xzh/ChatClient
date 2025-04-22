#ifndef SESSIONFRIENDAREA_H
#define SESSIONFRIENDAREA_H

#include <QWidget>
#include <QScrollArea>

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
    void addItem(const QIcon& avatar,const QString& name,const QString& text);

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

private:
    QWidget* _owner;
    bool selected=false;//表示当前Item是否选中
};

#endif // SESSIONFRIENDAREA_H
