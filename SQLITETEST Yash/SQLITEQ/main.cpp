#include <QtGui/QApplication>
#include "mainwindow.h"
#include "database.h"
//#include "database.cpp"
#include "connection.h"
int main(int argc, char *argv[])
{
    Database db;
    db.openDatabase(11);
    //createConnection(9);
    db.newStudent("Yash", "Parekh");
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    return a.exec();
}

