#include "studentdb.h"
/*if(query.exec("CREATE TABLE gradetable (studentname varchar(30), id varchar(30))"))
    qDebug() << "Success";*/
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
    q.exec("CREATE TABLE IF NOT EXISTS gradetable (studentname varchar(30), id varchar (30))");
}

void StudentDB::newStudent(QString &studentName)
{
    QSqlQuery query;
    QString insert = "INSERT INTO gradetable (studentname, id) VALUES ('" + studentName + "', '" + generateID(studentName,studentName) + "')";
    if(query.exec(insert))
        qDebug() << "Inserted";
    qDebug() << studentName;
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
    q.exec("SELECT * FROM gradetable ORDER BY studentName");
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
    return exist;
}
void StudentDB::newQuiz(QString quizName, QVector<StudentQuiz> quizVector)
{
    QSqlQuery q;
    //QString addColumns = "UPDATE gradetable " + quizName ;
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
        qDebug() << quizVector[i].getRunTimeString();

        QString updateStudent = "UPDATE gradetable SET " + quizName + "CompileTime=" + quizVector[i].getRunTimeString() + ", " + quizName + "Status='" + quizVector[i].getStatus() + "', " + quizName +"Reason='" + quizVector[i].getFailReason() + "', " + quizName +"DeliveryTime='" + quizVector[i].getTimeString() +"' WHERE studentname='" + quizVector[i].getName() +"'";
        if(q.exec(updateStudent))
            qDebug() << "Set Student " << quizVector[i].getName();
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
