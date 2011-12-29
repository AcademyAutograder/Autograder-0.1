#include <QtGui/QApplication>
#include "mainwindow.h"

MainWindow &instance()
{
      static MainWindow aSingleton;
      return aSingleton;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    instance().show();
    return a.exec();
}

