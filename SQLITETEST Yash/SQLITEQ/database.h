#ifndef DATABASE_H
#define DATABASE_H
#include<QString>
#include"connection.h"
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlQuery>
#include<QMessageBox>
#include<QApplication>
class Database
{
private:
    int gradelevel;
    QString name;
public:
    Database();
    void openDatabase(int gl)
    {
        if(gl == 9)
        {
            createConnection(9);
        }
        else if(gl == 10)
        {
            createConnection(10);
        }
        else if(gl == 11)
        {
            createConnection(11);
        }
        else if(gl == 12)
        {
            createConnection(12);
        }
    }
    bool newStudent(QString n, QString ln);




};

#endif // DATABASE_H
