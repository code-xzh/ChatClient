#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>

class LoginWidget : public QWidget
{
    Q_OBJECT
public:
    explicit LoginWidget(QWidget *parent = nullptr);

private:
    bool _isLoginMode=true;

signals:
};

#endif // LOGINWIDGET_H
