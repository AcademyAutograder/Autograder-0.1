#ifndef OPENFILE_H
#define OPENFILE_H

#include <QDialog>

namespace Ui {
class OpenFile;
}

class OpenFile : public QDialog
{
    Q_OBJECT
    
public:
    explicit OpenFile(QWidget *parent = 0);
    ~OpenFile();
    
private:
    Ui::OpenFile *ui;
};

#endif // OPENFILE_H
