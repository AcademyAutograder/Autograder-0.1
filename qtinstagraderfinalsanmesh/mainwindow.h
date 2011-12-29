#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include "createnewquiz.h"

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

private:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    CreateNewQuiz *one;

};

#endif // MAINWINDOW_H
