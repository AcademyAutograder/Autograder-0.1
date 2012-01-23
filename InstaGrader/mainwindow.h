#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "createnewquiz.h"
#include "editclass.h"
#include "results.h"
#include "displaytable.h"
#include "studentdb.h"
#include "studenthistory.h"
#include "quizhistorywindow.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    friend MainWindow &instance();
    Ui::MainWindow *ui;
    int grade; //0 = 9th, 1 = 10th, etc;
    StudentDB database;

private slots:
    void on_actionNew_Quiz_triggered();

    void on_actionEdit_class_triggered();

    void on_Homeresultbutton_clicked();

    void on_actionQuit_triggered();

    void on_Homestudentlist_activated(const QModelIndex &index);



    void on_actionOpen_class_records_triggered();

    void on_actionOpen_triggered();

    void on_actionQuiz_History_triggered();

    void on_actionResults_triggered();

private:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    CreateNewQuiz *one;
    EditClass *classedit;
    Results *resultobj;
    DisplayTable *disptable;
    studenthistory *historystudent;
    QuizHistorywindow *windowhistory;



};

#endif // MAINWINDOW_H
