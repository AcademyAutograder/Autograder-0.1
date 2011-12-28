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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionNew_Quiz_triggered();

private:///////////////////////////////////////////////////////////////////////////////////////////////////////

    Ui::MainWindow *ui;
    CreateNewQuiz *one;
    QStringListModel *model;
};

#endif // MAINWINDOW_H
