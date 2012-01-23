#include "studentdb.h"

StudentDB::StudentDB()
{
}
void StudentDB::openDB(int n)
{
    QString dbName = "Grade" + QString::number(n) + ".db";
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbName);
    if (db.open())
        qDebug() << "Open" << dbName;
    QSqlQuery q;
    q.exec("CREATE TABLE IF NOT EXISTS studentlist (studentname varchar(30), id varchar (30))");
    q.exec("CREATE TABLE IF NOT EXISTS quizlist (quizname varchar(30))");
}

void StudentDB::newStudent(QString &studentName)
{
    QSqlQuery query;
    QString insert = "INSERT INTO studentlist (studentname, id) VALUES ('" + studentName + "', '" + studentName + "')";
    query.exec(insert);
}

void StudentDB::deleteStudent(QString &studentName)
{
   QSqlQuery query;
   QString myQuery = "DELETE FROM studentlist WHERE studentname='";
   myQuery += studentName;
   myQuery +="'";
   query.exec(myQuery);
}

QStringList StudentDB::getNames()
{
    QStringList studentList;
    QSqlQuery q;

    q.exec("SELECT * FROM gradetable ORDER BY studentName");
    q.exec("SELECT studentname FROM gradetable ");

    //int reps = q.size();
    //QSqlRecord rec = q.record();
    //int reps = rec.size();


    q.exec("SELECT * FROM gradetable ORDER BY studentName");



    q.exec("SELECT studentname FROM studentlist ");
    q.exec("SELECT * FROM studentlist ORDER BY studentName");

    while(q.next())
    {
        studentList += q.value(0).toString();
    }

    return studentList;
}

QStringList StudentDB::getQuizzes()
{
    QStringList quizList;
    QSqlQuery q;

    q.exec("SELECT quizname FROM quizlist ");
    q.exec("SELECT * FROM quizlist ORDER BY quizname");
    while(q.next())
    {
        quizList += q.value(0).toString();
    }
    return quizList;
}

bool StudentDB::studentExist(QString &studentName)
{
    bool exist;
    QSqlQuery q;
    q.exec("SELECT studentname FROM studentlist");
    while(q.next())
    {
        if(q.value(0).toString() == studentName)
            exist = true;
    }
    return exist;
}
void StudentDB::newQuiz(QString quizName, QVector<StudentQuiz> quizVector)
{
    QSqlQuery q;
    QString insert = "INSERT INTO quizlist (quizname) VALUES ('" + quizName + "')";
    q.exec(insert);
    QString newQuizTable = "CREATE TABLE IF NOT EXISTS " + quizName + " (StudentName varchar(30), ExecuteTime real, Status varchar(30), Reason varchar(30), DeliveryTime varchar(30))";
    q.exec(newQuizTable);

    QStringList names = getNames();
    for(int x = 0; x < names.size(); x++)
    {
        QString insert = "INSERT INTO " + quizName + " (StudentName) VALUES ('" + names[x] + "')";
        q.exec(insert);
    }

    QString setDefaults = "UPDATE " + quizName + " SET ExecuteTime=0.00, Status='FAIL', Reason='Did Not Submit', DeliveryTime='0:00'";
    q.exec(setDefaults);
    for (int i =0; i < quizVector.size(); i++)
    {
        QString updateStudent = "UPDATE " + quizName + " SET ExecuteTime='" + quizVector[i].getRunTimeString() + "', Status='" + quizVector[i].getStatus() + "', Reason='" + quizVector[i].getFailReason() + "', DeliveryTime='" + quizVector[i].getTimeString() +"' WHERE studentname='" + quizVector[i].getName() +"'";
        q.exec(updateStudent);
    }

}
QString StudentDB::generateID(QString &firstName,QString &lastName)
{
    QString f,l;
    f = firstName.toLower();
    l = lastName.toLower();
    QString userID = l + f[0];
    return userID;
}
void StudentDB::closeDB()
{
    db.close();
}
