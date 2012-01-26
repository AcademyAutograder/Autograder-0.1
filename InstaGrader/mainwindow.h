#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "createnewquiz.h"
#include "editclass.h"
#include "results.h"
#include "studentdb.h"
#include "studenthistory.h"
#include "quizhistorywindow.h"
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
    int grade;
    StudentDB database;
    QString currentQuizName;

private slots:
    void on_actionNew_Quiz_triggered();

    void on_actionEdit_class_triggered();

    void on_Homeresultbutton_clicked();

    void on_actionQuit_triggered();

    void on_Homestudentlist_activated(const QModelIndex &index);

    void on_actionOpen_triggered();

    void on_actionQuiz_History_triggered();

    void on_actionResults_triggered();

    void on_CreateQuizCancelbutton_clicked();

private:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    CreateNewQuiz *one;
    EditClass *classedit;
    Results *resultobj;
    studenthistory *historystudent;
    QuizHistorywindow *windowhistory;

};

#endif // MAINWINDOW_H
