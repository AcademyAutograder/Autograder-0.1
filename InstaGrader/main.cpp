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
    instance().show();
    return a.exec();
}

/*
  Dear all,
       The way you access the mainwindow through other classes is:
            MainWindow &instance();
            instance().whatever;
       Also, in the main function, there is a pointer to an object of every class so you can manipulate objects of different classes from the mainwindow class.
*/
