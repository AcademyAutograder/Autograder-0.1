/********************************************************************************
** Form generated from reading UI file 'grademenu.ui'
**
** Created: Tue Dec 27 21:35:54 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADEMENU_H
#define UI_GRADEMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grademenu
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *openback;
    QPushButton *opengradebutton;
    QLabel *label;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_2;
    QPushButton *txtselect;
    QLabel *label_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *cppselect;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *grademenu)
    {
        if (grademenu->objectName().isEmpty())
            grademenu->setObjectName(QString::fromUtf8("grademenu"));
        grademenu->resize(477, 346);
        centralwidget = new QWidget(grademenu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 270, 181, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        openback = new QPushButton(layoutWidget);
        openback->setObjectName(QString::fromUtf8("openback"));

        horizontalLayout_3->addWidget(openback);

        opengradebutton = new QPushButton(layoutWidget);
        opengradebutton->setObjectName(QString::fromUtf8("opengradebutton"));
        opengradebutton->setEnabled(false);

        horizontalLayout_3->addWidget(opengradebutton);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 91, 21));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(120, 110, 321, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(true);

        horizontalLayout_2->addWidget(lineEdit_2);

        txtselect = new QPushButton(layoutWidget_2);
        txtselect->setObjectName(QString::fromUtf8("txtselect"));

        horizontalLayout_2->addWidget(txtselect);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 110, 91, 20));
        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(120, 60, 321, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        cppselect = new QPushButton(layoutWidget_3);
        cppselect->setObjectName(QString::fromUtf8("cppselect"));
        cppselect->setEnabled(true);

        horizontalLayout->addWidget(cppselect);

        grademenu->setCentralWidget(centralwidget);
        layoutWidget->raise();
        label->raise();
        layoutWidget_2->raise();
        label_2->raise();
        layoutWidget_3->raise();
        lineEdit->raise();
        cppselect->raise();
        menubar = new QMenuBar(grademenu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 477, 21));
        grademenu->setMenuBar(menubar);
        statusbar = new QStatusBar(grademenu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        grademenu->setStatusBar(statusbar);

        retranslateUi(grademenu);

        QMetaObject::connectSlotsByName(grademenu);
    } // setupUi

    void retranslateUi(QMainWindow *grademenu)
    {
        grademenu->setWindowTitle(QApplication::translate("grademenu", "MainWindow", 0, QApplication::UnicodeUTF8));
        openback->setText(QApplication::translate("grademenu", "Back", 0, QApplication::UnicodeUTF8));
        opengradebutton->setText(QApplication::translate("grademenu", "Grade", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("grademenu", ".cpp Source Folder", 0, QApplication::UnicodeUTF8));
        txtselect->setText(QApplication::translate("grademenu", "Browse", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("grademenu", "Testcase File (.txt)", 0, QApplication::UnicodeUTF8));
        cppselect->setText(QApplication::translate("grademenu", "Browse", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class grademenu: public Ui_grademenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADEMENU_H
