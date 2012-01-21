#include "studentdb.h"

StudentDB::StudentDB()
{

}

void StudentDB::openDB(int n)
{
    if(n == 9)
    {
    quizGrade = 9;
    db = QSqlDatabase::addDatabase("QSQLITE");
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
    QSqlQuery q;
    q.exec("CREATE TABLE gradetable (studentname varchar(30), id varchar (30)");
    //return true;
}
void StudentDB::newStudent(QString &studentName)
{

    //QString id = lastname;
    //id.prepend(firstname.at(0));
    QSqlQuery query;
    if(query.exec("CREATE TABLE gradetable (studentname varchar(30), id varchar(30))"))
        qDebug() << "Success";

    QString insert = "INSERT INTO gradetable (studentname) VALUES ('" + studentName + "')";
    if(query.exec(insert))
        qDebug() << "Inserted";


    if(query.exec("SELECT studentname FROM gradetable"))
        qDebug() << "Selected";
    while(query.next())
    {
        qDebug() << "Looped";
        qDebug() << query.value(0).toString();
    }
    if(quizGrade == 9)
    {
        if (db.open())
        {
            qDebug() << "Open Here";
        }
        for(int i = 0; i < quizlist9.length(); i++)
        {


            QString myquery = "INSERT INTO " + quizlist9.at(i) + " VALUES (?)";
            query.exec(myquery);
            query.bindValue(0, studentName);
            QString quizRow = "UPDATE gradetable SET ";
            quizRow += quizlist9.at(i);
            quizRow += "='SELECT ";
            quizRow += studentName;
            quizRow += "FROM " + quizlist9.at(i) + "'";
            query.exec(quizRow);
        }
    }
    if(quizGrade == 10)
    {
        for(int i = 0; i < quizlist10.length(); i++)
        {

            QString myquery = "INSERT INTO " + quizlist10.at(i) + " VALUES (?)";
            query.exec(myquery);
            query.bindValue(0, studentName);
            QString quizRow = "UPDATE gradetable SET ";
            quizRow += quizlist10.at(i);
            quizRow += "='SELECT ";
            quizRow += studentName;
            quizRow += "FROM " + quizlist10.at(i) + "'";
            query.exec(quizRow);
        }
    }
    if(quizGrade == 11)
    {
        for(int i = 0; i < quizlist11.length(); i++)
        {

            QString myquery = "INSERT INTO " + quizlist11.at(i) + " VALUES (?)";
            query.exec(myquery);
            query.bindValue(0, studentName);
            QString quizRow = "UPDATE gradetable SET ";
            quizRow += quizlist11.at(i);
            quizRow += "='SELECT ";
            quizRow += studentName;
            quizRow += "FROM " + quizlist11.at(i) + "' WHERE studentName= " + studentName;
            query.exec(quizRow);
        }
    }
    if(quizGrade == 12)
    {
        for(int i = 0; i < quizlist12.length(); i++)
        {

            QString myquery = "INSERT INTO " + quizlist12.at(i) + " VALUES (?)";
            query.exec(myquery);
            query.bindValue(0, studentName);
            QString quizRow = "UPDATE gradetable SET ";
            quizRow += quizlist12.at(i);
            quizRow += "='SELECT ";
            quizRow += studentName;
            quizRow += "FROM " + quizlist12.at(i) + "'";
            query.exec(quizRow);
        }
    }

}

void StudentDB::deleteStudent(QString &studentName)
{
   QSqlQuery query;
   QString myQuery = "DELETE FROM gradetable WHERE studentname='";
   myQuery += studentName;
   myQuery +="'";
   query.exec(myQuery);
}

QStringList StudentDB::getNames()
{
    QStringList studentList;
    QSqlQuery q;

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

void StudentDB::pushDB(int n)
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
    q.exec("DROP TABLE gradetable IF EXISTS");
    q.exec("CREATE TABLE gradetable(studentname varchar(30), id varchar (30)) IF NOT EXISTS");
    Student temp;
}

bool StudentDB::studentExist(QString &studentName)
{
    bool exist;
    QSqlQuery q;
    q.exec("SELECT studentname FROM gradetable");
    while(q.next())
    {
        if(q.value().toString() == studentName)
            exist = true;
    }
    //Check if the student exists here
    if(exist)
        return true;
    else
        return false;
}
void StudentDB::newQuiz(QString quizName, QVector<StudentQuiz> quizVector)
{

}
