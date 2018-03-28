/********************************************************************************
** Form generated from reading UI file 'del.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEL_H
#define UI_DEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_del
{
public:
    QLabel *label;
    QPushButton *backButton;
    QTableView *tableView;
    QPushButton *deleteButton;
    QLineEdit *deleteline;
    QLabel *label_2;
    QRadioButton *carradio;
    QRadioButton *sellradio;
    QRadioButton *needradio;
    QLineEdit *line;

    void setupUi(QDialog *del)
    {
        if (del->objectName().isEmpty())
            del->setObjectName(QStringLiteral("del"));
        del->resize(589, 396);
        label = new QLabel(del);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 0, 231, 71));
        backButton = new QPushButton(del);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(480, 340, 75, 21));
        tableView = new QTableView(del);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 70, 591, 192));
        deleteButton = new QPushButton(del);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(390, 340, 75, 23));
        deleteline = new QLineEdit(del);
        deleteline->setObjectName(QStringLiteral("deleteline"));
        deleteline->setGeometry(QRect(140, 340, 131, 20));
        label_2 = new QLabel(del);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 330, 91, 41));
        carradio = new QRadioButton(del);
        carradio->setObjectName(QStringLiteral("carradio"));
        carradio->setGeometry(QRect(90, 280, 89, 31));
        sellradio = new QRadioButton(del);
        sellradio->setObjectName(QStringLiteral("sellradio"));
        sellradio->setGeometry(QRect(230, 280, 89, 31));
        needradio = new QRadioButton(del);
        needradio->setObjectName(QStringLiteral("needradio"));
        needradio->setGeometry(QRect(370, 290, 89, 16));
        line = new QLineEdit(del);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(140, 370, 131, 20));

        retranslateUi(del);

        QMetaObject::connectSlotsByName(del);
    } // setupUi

    void retranslateUi(QDialog *del)
    {
        del->setWindowTitle(QApplication::translate("del", "Dialog", 0));
        label->setText(QApplication::translate("del", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\344\277\241\346\201\257\345\210\240\351\231\244</span></p></body></html>", 0));
        backButton->setText(QApplication::translate("del", "\350\277\224\345\233\236", 0));
        deleteButton->setText(QApplication::translate("del", "\345\210\240\351\231\244", 0));
        label_2->setText(QApplication::translate("del", "\350\257\267\350\276\223\345\205\245\347\274\226\345\217\267\357\274\232", 0));
        carradio->setText(QApplication::translate("del", "\346\261\275\350\275\246\350\241\250", 0));
        sellradio->setText(QApplication::translate("del", "\344\276\233\345\272\224\345\225\206\350\241\250", 0));
        needradio->setText(QApplication::translate("del", "\351\234\200\346\261\202\350\241\250", 0));
    } // retranslateUi

};

namespace Ui {
    class del: public Ui_del {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_H
