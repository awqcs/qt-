/********************************************************************************
** Form generated from reading UI file 'updatebase.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEBASE_H
#define UI_UPDATEBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_updatebase
{
public:
    QPushButton *backButton;
    QLabel *label;
    QPushButton *pushButton;
    QTableView *tableView;
    QLabel *label_2;
    QRadioButton *carradio;
    QRadioButton *sellradio;
    QRadioButton *needradio;

    void setupUi(QDialog *updatebase)
    {
        if (updatebase->objectName().isEmpty())
            updatebase->setObjectName(QStringLiteral("updatebase"));
        updatebase->resize(674, 465);
        backButton = new QPushButton(updatebase);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(470, 340, 75, 23));
        label = new QLabel(updatebase);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 10, 191, 51));
        pushButton = new QPushButton(updatebase);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 340, 75, 23));
        tableView = new QTableView(updatebase);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 110, 531, 192));
        label_2 = new QLabel(updatebase);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 340, 241, 41));
        carradio = new QRadioButton(updatebase);
        carradio->setObjectName(QStringLiteral("carradio"));
        carradio->setGeometry(QRect(100, 60, 111, 51));
        sellradio = new QRadioButton(updatebase);
        sellradio->setObjectName(QStringLiteral("sellradio"));
        sellradio->setGeometry(QRect(250, 70, 89, 31));
        needradio = new QRadioButton(updatebase);
        needradio->setObjectName(QStringLiteral("needradio"));
        needradio->setGeometry(QRect(400, 60, 89, 51));

        retranslateUi(updatebase);

        QMetaObject::connectSlotsByName(updatebase);
    } // setupUi

    void retranslateUi(QDialog *updatebase)
    {
        updatebase->setWindowTitle(QApplication::translate("updatebase", "Dialog", 0));
        backButton->setText(QApplication::translate("updatebase", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("updatebase", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\344\277\241\346\201\257\346\233\264\346\226\260</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("updatebase", "\347\241\256\350\256\244", 0));
        label_2->setText(QApplication::translate("updatebase", "\346\217\220\347\244\272\357\274\232\345\217\214\345\207\273\347\202\271\345\207\273\351\200\211\344\270\255\351\234\200\350\246\201\344\277\256\346\224\271\344\277\241\346\201\257\350\277\233\350\241\214\344\277\256\346\224\271", 0));
        carradio->setText(QApplication::translate("updatebase", "  \346\261\275\350\275\246\350\241\250", 0));
        sellradio->setText(QApplication::translate("updatebase", "\344\276\233\345\272\224\345\225\206\350\241\250", 0));
        needradio->setText(QApplication::translate("updatebase", "\351\234\200\346\261\202\350\241\250", 0));
    } // retranslateUi

};

namespace Ui {
    class updatebase: public Ui_updatebase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEBASE_H
