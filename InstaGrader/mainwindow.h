#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "createnewquiz.h"
#include "editclass.h"
#include "results.h"
#include "displaytable.h"
#include "studentdb.h"


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

private slots:
    void on_actionNew_Quiz_triggered();

    void on_actionEdit_class_triggered();

    void on_Homeresultbutton_clicked();

    void on_actionQuit_triggered();

    void on_Homestudentlist_activated(const QModelIndex &index);



    void on_actionOpen_class_records_triggered();


    void on_actionView_Student_Records_triggered();

    void on_actionOpen_triggered();


private:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    CreateNewQuiz *one;
    EditClass *classedit;
    Results *resultobj;
    DisplayTable *disptable;
    StudentDB database;

};

#endif // MAINWINDOW_H
