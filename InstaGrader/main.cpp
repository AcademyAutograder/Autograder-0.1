#include <QtGui/QApplication>
#include <QVector>
#include <quiz.h>
#include <QMessageBox>
#include "mainwindow.h"
#include "studentdb.h"

StudentDB dataBase(11);

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
