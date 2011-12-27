#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void on_homeopen_clicked();
    void on_homehome_clicked();

    void on_homehelp_clicked();

    void on_homegrade_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
