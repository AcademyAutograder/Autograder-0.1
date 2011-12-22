#include "database.h"
#include <QtSQL>
Database::Database()
{

}
bool Database::newStudent(QString firstname, QString lastname)
{
    QString id = lastname;
    id.prepend(firstname.at(0));
    QSqlQuery query;
    query.exec("CREATE TABLE gradetable (id varchar(30), studentname varchar(30)");
    query.prepare("INSERT INTO gradetable  VALUES (?, ?)");
    query.bindValue(0, id);
    query.bindValue(1, name);
    query.first();
    QSqlQuery q("select * from gradetable");
     QSqlRecord rec = q.record();
     q.first();
     qDebug() << "Number of columns: " << rec.count();

     int nameCol = rec.indexOf("studentname"); // index of the field "name"
     while (q.next())
         qDebug() << q.value(nameCol).toString(); // output all names
     qDebug() <<query.isValid();
    return true;
}
