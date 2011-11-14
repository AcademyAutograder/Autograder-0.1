#ifndef GRADEMENU_H
#define GRADEMENU_H

#include <QMainWindow>

namespace Ui {
    class grademenu;
}

class grademenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit grademenu(QWidget *parent = 0);
    ~grademenu();

private slots:
    void on_opentxt_clicked();

private:
    Ui::grademenu *ui;
};

#endif // GRADEMENU_H
