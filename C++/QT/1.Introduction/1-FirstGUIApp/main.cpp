#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    Widget w;
    w.show();
    return application.exec();
}
