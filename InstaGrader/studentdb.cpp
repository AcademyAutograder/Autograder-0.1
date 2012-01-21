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
void StudentDB::newStudent(QString &studentName, QString &id)
{

    //QString id = lastname;
    //id.prepend(firstname.at(0));
    QSqlQuery query;
    /*if(query.exec("CREATE TABLE gradetable (studentname varchar(30), id varchar(30))"))
        qDebug() << "Success";*/

    QString insert = "INSERT INTO gradetable (studentname, id) VALUES ('" + studentName + "', '" + id + "'";
    if(query.exec(insert))
        qDebug() << "Inserted";

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
bool StudentDB::studentExist(QString &studentName)
{
    bool exist;
    QSqlQuery q;
    q.exec("SELECT studentname FROM gradetable");
    while(q.next())
    {
        if(q.value(0).toString() == studentName)
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
    QSqlQuery q;
    QString addColumns = "UPDATE gradetable " + quizName ;
    QString makeComp = "ALTER TABLE gradetable ADD " + quizName + "CompileTime REAL";
    if(q.exec(makeComp))
        qDebug() << "Made Comp";
    QString makeStatus = "ALTER TABLE gradetable ADD " + quizName + "Status VARCHAR(30)";
    if(q.exec(makeStatus))
        qDebug() << "Made Status";
    QString makeReason = "ALTER TABLE gradetable ADD " + quizName + "Reason VARCHAR(30)";
    if(q.exec(makeReason))
        qDebug() << "Made Reason";
    QString makeDTime = "ALTER TABLE gradetable ADD " + quizName + "DeliveryTime VARCHAR(30)";
    if(q.exec(makeDTime))
        qDebug() << "Made Dtime";
    QString setDefaults = "UPDATE gradetable SET " + quizName +"CompileTime=0.00, " + quizName + "Status='FAIL', " + quizName + "Reason='Did Not Submit', " + quizName + "DeliveryTime='0:00'";
    if(q.exec(setDefaults))
        qDebug() << "SetDefaults";
    for (int i =0; i < quizVector.size(); i++)
    {
        QString updateStudent = "UPDATE gradetable SET " + quizName + "CompileTime=" + quizVector[i].getRunTime() + ", " + quizName + "Status='" + quizVector[i].getStatus() + "', " + quizName +"Reason='" + quizVector[i].getFailReason() + "', " + quizName +"DeliveryTime='" + quizVector[i].getTimeString() +"' WHERE studentname='" + quizVector[i].getStudentName() +"'";
        if(q.exec(updateStudent))
            qDebug() << "Set Student " << quizVector[i].getStudentName();
    }
}
// void newQuiz(QString quizName, QVector<StudentQuiz> quizVector)
// fill the database here
QString StudentDB::generateID(QString &firstName,QString &lastName)
{
    firstName = firstName.toLower();
    lastName = lastName.toLower();
    QString userID = lastName + firstName[0];
    qDebug() << userID;
    return userID;
}
void StudentDB::closeDB()
{
    db.close();
}
