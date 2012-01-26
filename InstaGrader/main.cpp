#include <QtGui/QApplication>
#include "mainwindow.h"
#include "studentdb.h"
#include "choosegrade.h"



MainWindow &instance()
{
      static MainWindow aSingleton;
      return aSingleton;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChooseGrade b;
    b.exec();
    instance().database.openDB(instance().grade+9);
    instance().show();
    return a.exec();
}
