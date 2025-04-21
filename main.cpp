#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget* w=Widget::getInstance();


    w->show();
    return a.exec();
}
