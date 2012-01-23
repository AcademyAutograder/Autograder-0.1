#ifndef COMMONTABLE_H
#define COMMONTABLE_H

#include <QDialog>

namespace Ui {
class commontable;
}

class commontable : public QDialog
{
    Q_OBJECT
    
public:
    explicit commontable(QWidget *parent = 0);
    ~commontable();
    
private:
    Ui::commontable *ui;
};

#endif // COMMONTABLE_H
