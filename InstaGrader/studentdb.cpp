#include "studentdb.h"

StudentDB::StudentDB(int n)
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
    q.exec("CREATE TABLE gradetable (studentname varchar(30), id varchar (30) IF NOT EXISTS");
    //return true;
}
void StudentDB::newStudent(QString &studentName)
{
    //QString id = lastname;
    //id.prepend(firstname.at(0));
    QSqlQuery query;
    query.exec("CREATE TABLE gradetable (studentname varchar(30)) IF NOT EXISTS");
    query.prepare("INSERT INTO gradetable  VALUES (?)");
    query.bindValue(0, studentName);
    query.exec();
    if(quizGrade == 9)
    {
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
   // int counter = 0;
    q.exec("CREATE TABLE gradetable (studentname varchar(30), id varchar (30))IF NOT EXISTS");
    q.exec("select studentname from gradetable");
    while(q.next())
    {
        Student temp;
        QString name = q.value(0).toString();
        temp.setName(name);
        studentVector += temp;
        StudentQuiz tempQuiz;
        if(quizGrade == 9)
        {
            for(int i = 0; i < quizlist9.length(); i++ )
            {
                tempQuiz.setName(quizlist9.at(i));
                QString exec = "SELECT ";
                exec += quizlist9.at(i);
                exec += "FROM gradetable";
                QSqlQuery q;
                q.exec(exec);
                tempQuiz.setStatus(q.value(0).toBool());
            }
        }
        if(quizGrade == 10)
        {
            for(int i = 0; i < quizlist10.length(); i++ )
            {
                tempQuiz.setName(quizlist10.at(i));
                QString exec = "SELECT ";
                exec += quizlist10.at(i);
                exec += "FROM gradetable";
                QSqlQuery q;
                q.exec(exec);
                tempQuiz.setStatus(q.value(0).toBool());
            }
        }
        if(quizGrade == 11)
        {
            for(int i = 0; i < quizlist11.length(); i++ )
            {
                tempQuiz.setName(quizlist11.at(i));
                QString exec = "SELECT ";
                exec += quizlist11.at(i);
                exec += "FROM gradetable";
                QSqlQuery q;
                q.exec(exec);
                tempQuiz.setStatus(q.value(0).toBool());
            }
        }
        if(quizGrade == 12)
        {
            for(int i = 0; i < quizlist12.length(); i++ )
            {
                tempQuiz.setName(quizlist12.at(i));
                QString exec = "SELECT ";
                exec += quizlist12.at(i);
                exec += "FROM gradetable";
                QSqlQuery q;
                q.exec(exec);
                tempQuiz.setStatus(q.value(0).toBool());
            }
        }

    }

}

void StudentDB::newQuiz(QString &quizName, QVector<int> compileTimes, QVector<QString> statuses)
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
    QString quizMaker = "CREATE TABLE ";
    quizMaker += quizName;
    quizMaker += "(studentname varchar(30), compiletime INT, status varchar(15)) IF NOT EXISTS";
    q.exec(quizMaker);
    q.exec("CREATE TABLE gradetable (studentname varchar(30), id varchar (30)) IF NOT EXISTS");
    query = "ALTER TABLE gradetable ADD ";
    query += quizName;
    query += "varchar(100)";
    q.exec(query);
    QSqlQuery qu;
    int counter = 0;
    qu.exec("SELECT studentname FROM gradetable ");
    while(qu.next())
    {
        QSqlQuery makeQuiz;
        QString quizRow = "UPDATE gradetable SET ";
        quizRow += quizName;
        quizRow += "='SELECT ";
        quizRow += qu.value(0).toString();
        quizRow += "FROM " + quizName + "'";
        makeQuiz.exec(quizRow);
        QString myquery = "INSERT INTO " + quizName + " VALUES (?,?,?)";
        makeQuiz.exec(myquery);
        makeQuiz.bindValue(0, qu.value(0).toString());
        makeQuiz.bindValue(1, compileTimes.at(counter));
        makeQuiz.bindValue(2, statuses.at(counter));
        counter++;
    }
}
