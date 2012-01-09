#include "studentdb.h"

StudentDB::StudentDB(int n)
{
    if(n == 9)
    {
    quizGrade = 9;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Grade9.db");
    if (db.open())
    {
        qDebug() << "Open";
    }
    /*if (!db.open()) {
        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("Unable to establish a database connection.\n"
                     "This example needs SQLite support. Please read "
                     "the Qt SQL driver documentation for information how "
                     "to build it.\n\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        return false;*/
            //QSqlQuery query;
          // query.prepare("INSERT INTO person (id, forename, surname) "
            //             "VALUES (:id, :forename, :surname)");
           //query.bindValue(":id", 1001);
           //query.bindValue(":forename", "Bart");
           //query.bindValue(":surname", "Simpson");
           //query.exec();

    }
    if(n == 10)
    {
    quizGrade = 10;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Grade10.db");
    if (db.open())
    {
        qDebug() << "Open";
    }
    /*if (!db.open()) {
        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("Unable to establish a database connection.\n"
                     "This example needs SQLite support. Please read "
                     "the Qt SQL driver documentation for information how "
                     "to build it.\n\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        //return false;*/

    }
    if(n == 11)
    {
    quizGrade = 11;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Grade11.db");
    if (db.open())
    {
        qDebug() << "Open";
    }
    /*if (!db.open()) {
        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("Unable to establish a database connection.\n"
                     "This example needs SQLite support. Please read "
                     "the Qt SQL driver documentation for information how "
                     "to build it.\n\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        //return false;*/

    }
    if(n == 12)
    {
    quizGrade = 12;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Grade12.db");
    if (db.open())
    {
        qDebug() << "Open";
    }
    /*if (!db.open()) {
        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("Unable to establish a database connection.\n"
                     "This example needs SQLite support. Please read "
                     "the Qt SQL driver documentation for information how "
                     "to build it.\n\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        //return false;
    }*/
    }
    //return true;
}
void StudentDB::newStudent(QString &studentName)
{
    //QString id = lastname;
    //id.prepend(firstname.at(0));
    QSqlQuery query;
    query.exec("CREATE TABLE gradetable (studentname varchar(30)");
    query.prepare("INSERT INTO gradetable  VALUES (?)");
    query.bindValue(0, studentName);
    query.exec();
    query.finish();
    //query.first();
    //QSqlQuery q("select * from gradetable");
     //QSqlRecord rec = q.record();
     //q.first();
     //qDebug() << "Number of columns: " << rec.count();

     //int nameCol = rec.indexOf("studentname"); // index of the field "name"
     //while (q.next())
       //  qDebug() << q.value(nameCol).toString(); // output all names
     //qDebug() <<query.isValid();
    //return true;
}

void StudentDB::deleteStudent(QString &studentName)
{
   QSqlQuery query;
   query.exec("CREATE TABLE gradetable (studentname varchar(30)");
   QString myQuery = "DELETE FROM gradetable WHERE studentname=";
   myQuery += studentName;
   query.exec(myQuery);
}

QStringList StudentDB::getNames()
{
    QStringList studentList;
    QSqlQuery q;
    q.exec("CREATE TABLE gradetable (studentname varchar(30)");
    q.exec("SELECT studentname FROM gradetable ");
    //int reps = q.size();
    //QSqlRecord rec = q.record();
    //int reps = rec.size();
    while(q.next())
    {
        studentList += q.value(0).toString();
    }
    return studentList;
}

void StudentDB::pushDB(int gradeLevel)
{


}

void StudentDB::pullDB(int n)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    if(n == 9)
    {
    db.setDatabaseName("Grade9.db");
    if (db.open())
    {
        qDebug() << "Open";
    }
    /*if (!db.open()) {
        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("Unable to establish a database connection.\n"
                     "This example needs SQLite support. Please read "
                     "the Qt SQL driver documentation for information how "
                     "to build it.\n\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        return false;*/
            //QSqlQuery query;
          // query.prepare("INSERT INTO person (id, forename, surname) "
            //             "VALUES (:id, :forename, :surname)");
           //query.bindValue(":id", 1001);
           //query.bindValue(":forename", "Bart");
           //query.bindValue(":surname", "Simpson");
           //query.exec();

    }
    if(n == 10)
    {
    db.setDatabaseName("Grade10.db");
    if (db.open())
    {
        qDebug() << "Open";
    }
    /*if (!db.open()) {
        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("Unable to establish a database connection.\n"
                     "This example needs SQLite support. Please read "
                     "the Qt SQL driver documentation for information how "
                     "to build it.\n\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        //return false;*/

    }
    if(n == 11)
    {
    db.setDatabaseName("Grade11.db");
    if (db.open())
    {
        qDebug() << "Open";
    }
    /*if (!db.open()) {
        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("Unable to establish a database connection.\n"
                     "This example needs SQLite support. Please read "
                     "the Qt SQL driver documentation for information how "
                     "to build it.\n\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        //return false;*/

    }
    if(n == 12)
    {
    db.setDatabaseName("Grade12.db");
    if (db.open())
    {
        qDebug() << "Open";
    }
    /*if (!db.open()) {
        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("Unable to establish a database connection.\n"
                     "This example needs SQLite support. Please read "
                     "the Qt SQL driver documentation for information how "
                     "to build it.\n\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        //return false;
    }*/
    }
    //return true;
    QSqlQuery q;
    //int counter = 0;
    //q.exec("CREATE TABLE gradetable (studentname varchar(30)");
    q.exec("select studentname from gradetable");
    while(q.next())
    {
        Student temp;
        QString name = q.value(0).toString();
        temp.setName(name);


    }

}

void StudentDB::newQuiz(QString &quizName)
{
    if(quizGrade == 9)
    {
        quizlist9 += quizName;
    }
    if(quizGrade == 10)
    {
        quizlist10 += quizName;
    }
    if(quizGrade == 11)
    {
        quizlist11 += quizName;
    }
    if(quizGrade == 12)
    {
        quizlist12 += quizName;
    }
    QSqlQuery q;
    QString query;
    //q.exec("CREATE TABLE gradetable (studentname varchar(30)");
    query = "ALTER TABLE gradetable ADD ";
    query += quizName;
    query += " varchar(30)";
    q.exec(query);

}
