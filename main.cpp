#include <QtGui/QApplication>
#include "browser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtBrowser w;
    w.show();
    return a.exec();
}
