#ifndef RESULTS_H
#define RESULTS_H
#include <QString>
#include <QSqlQueryModel>

#include <QDialog>

namespace Ui {
class Results;
}

class Results : public QDialog
{
    Q_OBJECT
    
public:
    explicit Results(QWidget *parent = 0);
    void displayResults(QString &);

    ~Results();
    
private:
    Ui::Results *ui;
    QSqlQueryModel *model;
};

#endif // RESULTS_H
