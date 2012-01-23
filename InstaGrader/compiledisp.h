#ifndef COMPILEDISP_H
#define COMPILEDISP_H

#include <QDialog>

namespace Ui {
class compiledisp;
}

class compiledisp : public QDialog
{
    Q_OBJECT
    
public:
    explicit compiledisp(QWidget *parent = 0);
    void addTextToBox(QString &);
    ~compiledisp();
    
private:
    Ui::compiledisp *ui;
};

#endif // COMPILEDISP_H
