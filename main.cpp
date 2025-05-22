#include "widget.h"

#include <QApplication>

#include "loginwidget.h"
#include "debug.h"
#include "network/netclient.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


#if TEST_SKIP_LOGIN
    Widget* w=Widget::getInstance();
    w->show;
#else
    LoginWidget* loginWidget=new LoginWidget(nullptr);
    loginWidget->show();
#endif

#if TEST_NET_CONNECT
    network::NetClient netClient(nullptr);
    netClient.ping();
#endif

    return a.exec();
}
