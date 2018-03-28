/********************************************************************************
** Form generated from reading UI file 'manage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_H
#define UI_MANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_manage
{
public:
    QPushButton *exitButton;
    QPushButton *selectButton;
    QPushButton *updateButton;
    QPushButton *deleteButton;
    QPushButton *storageButton;
    QPushButton *insertButton;
    QLabel *label;
    QLineEdit *timeline;
    QPushButton *cancelButton;
    QLabel *label_2;
    QLabel *cxlabel;
    QLabel *deletelabel;
    QLabel *updatelabel;
    QLabel *insertlabel;
    QLabel *storagelabel;
    QLabel *backlabel;
    QLabel *cancellabel;

    void setupUi(QDialog *manage)
    {
        if (manage->objectName().isEmpty())
            manage->setObjectName(QStringLiteral("manage"));
        manage->resize(518, 377);
        exitButton = new QPushButton(manage);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(370, 290, 81, 31));
        selectButton = new QPushButton(manage);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setGeometry(QRect(120, 100, 81, 41));
        updateButton = new QPushButton(manage);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setGeometry(QRect(120, 220, 81, 41));
        deleteButton = new QPushButton(manage);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(320, 160, 81, 41));
        storageButton = new QPushButton(manage);
        storageButton->setObjectName(QStringLiteral("storageButton"));
        storageButton->setGeometry(QRect(320, 100, 81, 41));
        insertButton = new QPushButton(manage);
        insertButton->setObjectName(QStringLiteral("insertButton"));
        insertButton->setGeometry(QRect(120, 160, 81, 41));
        label = new QLabel(manage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 340, 161, 31));
        timeline = new QLineEdit(manage);
        timeline->setObjectName(QStringLiteral("timeline"));
        timeline->setGeometry(QRect(290, 340, 181, 31));
        timeline->setStyleSheet(QStringLiteral("border :1px ;background: transparent"));
        cancelButton = new QPushButton(manage);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(230, 290, 71, 31));
        label_2 = new QLabel(manage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 30, 261, 61));
        cxlabel = new QLabel(manage);
        cxlabel->setObjectName(QStringLiteral("cxlabel"));
        cxlabel->setGeometry(QRect(80, 110, 31, 31));
        deletelabel = new QLabel(manage);
        deletelabel->setObjectName(QStringLiteral("deletelabel"));
        deletelabel->setGeometry(QRect(280, 170, 31, 31));
        updatelabel = new QLabel(manage);
        updatelabel->setObjectName(QStringLiteral("updatelabel"));
        updatelabel->setGeometry(QRect(80, 230, 31, 31));
        insertlabel = new QLabel(manage);
        insertlabel->setObjectName(QStringLiteral("insertlabel"));
        insertlabel->setGeometry(QRect(80, 170, 31, 31));
        storagelabel = new QLabel(manage);
        storagelabel->setObjectName(QStringLiteral("storagelabel"));
        storagelabel->setGeometry(QRect(280, 110, 31, 31));
        backlabel = new QLabel(manage);
        backlabel->setObjectName(QStringLiteral("backlabel"));
        backlabel->setGeometry(QRect(340, 290, 31, 31));
        cancellabel = new QLabel(manage);
        cancellabel->setObjectName(QStringLiteral("cancellabel"));
        cancellabel->setGeometry(QRect(200, 290, 31, 31));

        retranslateUi(manage);

        QMetaObject::connectSlotsByName(manage);
    } // setupUi

    void retranslateUi(QDialog *manage)
    {
        manage->setWindowTitle(QApplication::translate("manage", "Dialog", 0));
        exitButton->setText(QApplication::translate("manage", "\351\200\200\345\207\272", 0));
        selectButton->setText(QApplication::translate("manage", "\346\225\260\346\215\256\346\237\245\350\257\242", 0));
        updateButton->setText(QApplication::translate("manage", "\346\225\260\346\215\256\344\277\256\346\224\271", 0));
        deleteButton->setText(QApplication::translate("manage", "\346\225\260\346\215\256\345\210\240\351\231\244", 0));
        storageButton->setText(QApplication::translate("manage", "\345\255\230\345\202\250\350\277\207\347\250\213", 0));
        insertButton->setText(QApplication::translate("manage", "\346\225\260\346\215\256\345\242\236\345\212\240", 0));
        label->setText(QApplication::translate("manage", "<html><head/><body><p><span style=\" font-size:11pt;\">\347\263\273\347\273\237\346\227\266\351\227\264\357\274\232</span></p></body></html>", 0));
        timeline->setText(QApplication::translate("manage", "TextLabel", 0));
        cancelButton->setText(QApplication::translate("manage", "\346\263\250\351\224\200", 0));
        label_2->setText(QApplication::translate("manage", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\346\261\275\350\275\246\345\272\223\345\255\230\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", 0));
        cxlabel->setText(QApplication::translate("manage", "TextLabel", 0));
        deletelabel->setText(QApplication::translate("manage", "TextLabel", 0));
        updatelabel->setText(QApplication::translate("manage", "TextLabel", 0));
        insertlabel->setText(QApplication::translate("manage", "TextLabel", 0));
        storagelabel->setText(QApplication::translate("manage", "TextLabel", 0));
        backlabel->setText(QApplication::translate("manage", "TextLabel", 0));
        cancellabel->setText(QApplication::translate("manage", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class manage: public Ui_manage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_H
