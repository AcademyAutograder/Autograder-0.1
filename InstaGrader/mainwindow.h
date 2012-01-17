#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "createnewquiz.h"
#include "editclass.h"
#include "results.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    friend MainWindow &instance();
    Ui::MainWindow *ui;

private slots:
    void on_actionNew_Quiz_triggered();

    void on_actionEdit_class_triggered();

    void on_Homeresultbutton_clicked();

    void on_actionQuit_triggered();

    void on_Homestudentlist_activated(const QModelIndex &index);



private:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    CreateNewQuiz *one;
    EditClass *classedit;
    Results *resultobj;
};

#endif // MAINWINDOW_H
