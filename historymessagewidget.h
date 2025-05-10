#ifndef HISTORYMESSAGEWIDGET_H
#define HISTORYMESSAGEWIDGET_H

#include <QDialog>
#include <QWidget>
#include <QGridLayout>

#include "model/data.h"

using model::Message;

///////////////////////////////////////////////////
/// 表示一个历史元素
///////////////////////////////////////////////////

class HistoryItem:public QWidget
{
    Q_OBJECT
public:
    HistoryItem(){}

    static HistoryItem* makeHistoryItem(const Message& message);
};

///////////////////////////////////////////////////
/// 展示历史消息窗口
///////////////////////////////////////////////////

class HistoryMessageWidget : public QDialog
{
    Q_OBJECT
public:
    HistoryMessageWidget(QWidget* parent);

    //在窗口中添加历史消息
    void addHistoryMessage(const Message& message);

    //清空所有历史消息
    void clear();
private:
    void initScrollArea(QGridLayout* layout);

private:
    //所有历史消息的容器
    QWidget* container;

};

#endif // HISTORYMESSAGEWIDGET_H
