#ifndef GROUPSESSIONDATAWIDGET_H
#define GROUPSESSIONDATAWIDGET_H

#include <QDialog>
#include <QWidget>

#include <QGridLayout>

class AvatarItem;

class GroupSessionDataWidget : public QDialog
{
    Q_OBJECT
public:
    GroupSessionDataWidget(QWidget* parent);

    void addMember(AvatarItem* avatarItem);

private:
    QGridLayout* glayout;

    //当前添加到avatarItem处在的行和列,从(0，1)开始添加
    int curRow=0;
    int curCol=1;
};

#endif // GROUPSESSIONDATAWIDGET_H
