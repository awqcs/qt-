/********************************************************************************
** Form generated from reading UI file 'storage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORAGE_H
#define UI_STORAGE_H

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

class Ui_storage
{
public:
    QRadioButton *qcradio;
    QTableView *tableView;
    QLabel *label;
    QPushButton *okButton;
    QPushButton *backButton;
    QRadioButton *needradio;

    void setupUi(QDialog *storage)
    {
        if (storage->objectName().isEmpty())
            storage->setObjectName(QStringLiteral("storage"));
        storage->resize(685, 455);
        qcradio = new QRadioButton(storage);
        qcradio->setObjectName(QStringLiteral("qcradio"));
        qcradio->setGeometry(QRect(58, 125, 131, 31));
        tableView = new QTableView(storage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(230, 80, 431, 281));
        label = new QLabel(storage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 20, 191, 41));
        okButton = new QPushButton(storage);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(140, 400, 75, 23));
        backButton = new QPushButton(storage);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(370, 400, 75, 23));
        needradio = new QRadioButton(storage);
        needradio->setObjectName(QStringLiteral("needradio"));
        needradio->setGeometry(QRect(60, 200, 161, 31));

        retranslateUi(storage);

        QMetaObject::connectSlotsByName(storage);
    } // setupUi

    void retranslateUi(QDialog *storage)
    {
        storage->setWindowTitle(QApplication::translate("storage", "Dialog", 0));
        qcradio->setText(QApplication::translate("storage", "\347\273\237\350\256\241\345\220\204\347\261\273\346\261\275\350\275\246\346\200\273\346\225\260", 0));
        label->setText(QApplication::translate("storage", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\345\255\230\345\202\250\350\277\207\347\250\213</span></p></body></html>", 0));
        okButton->setText(QApplication::translate("storage", "\347\241\256\345\256\232", 0));
        backButton->setText(QApplication::translate("storage", "\350\277\224\345\233\236", 0));
        needradio->setText(QApplication::translate("storage", "\347\273\237\350\256\241\345\220\204\344\276\233\345\272\224\345\225\206\346\200\273\351\234\200\346\261\202\351\207\217", 0));
    } // retranslateUi

};

namespace Ui {
    class storage: public Ui_storage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORAGE_H
