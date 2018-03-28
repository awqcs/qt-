/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

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

class Ui_LoginDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *userline;
    QLineEdit *passwordline;
    QLabel *piclabel;
    QLabel *pic1;
    QLineEdit *yanzhengline;
    QLabel *yanzhenglabel;
    QPushButton *loginbtn;
    QPushButton *exitbtn;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(435, 326);
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 271, 51));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 150, 54, 21));
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 190, 54, 21));
        userline = new QLineEdit(LoginDialog);
        userline->setObjectName(QStringLiteral("userline"));
        userline->setGeometry(QRect(160, 150, 113, 20));
        passwordline = new QLineEdit(LoginDialog);
        passwordline->setObjectName(QStringLiteral("passwordline"));
        passwordline->setGeometry(QRect(160, 190, 113, 20));
        piclabel = new QLabel(LoginDialog);
        piclabel->setObjectName(QStringLiteral("piclabel"));
        piclabel->setGeometry(QRect(280, 120, 101, 101));
        pic1 = new QLabel(LoginDialog);
        pic1->setObjectName(QStringLiteral("pic1"));
        pic1->setGeometry(QRect(130, 0, 151, 141));
        yanzhengline = new QLineEdit(LoginDialog);
        yanzhengline->setObjectName(QStringLiteral("yanzhengline"));
        yanzhengline->setGeometry(QRect(160, 230, 113, 20));
        yanzhenglabel = new QLabel(LoginDialog);
        yanzhenglabel->setObjectName(QStringLiteral("yanzhenglabel"));
        yanzhenglabel->setGeometry(QRect(110, 230, 61, 21));
        QFont font;
        font.setFamily(QStringLiteral("Franklin Gothic Demi"));
        yanzhenglabel->setFont(font);
        loginbtn = new QPushButton(LoginDialog);
        loginbtn->setObjectName(QStringLiteral("loginbtn"));
        loginbtn->setGeometry(QRect(110, 270, 75, 23));
        exitbtn = new QPushButton(LoginDialog);
        exitbtn->setObjectName(QStringLiteral("exitbtn"));
        exitbtn->setGeometry(QRect(240, 270, 75, 23));
        piclabel->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        userline->raise();
        passwordline->raise();
        pic1->raise();
        yanzhengline->raise();
        yanzhenglabel->raise();
        loginbtn->raise();
        exitbtn->raise();

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", 0));
        label->setText(QApplication::translate("LoginDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt;\">\346\261\275\350\275\246\345\272\223\345\255\230\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("LoginDialog", "<html><head/><body><p>\347\224\250\346\210\267\345\220\215\357\274\232</p></body></html>", 0));
        label_3->setText(QApplication::translate("LoginDialog", "<html><head/><body><p>\345\257\206\347\240\201\357\274\232</p></body></html>", 0));
        piclabel->setText(QString());
        pic1->setText(QApplication::translate("LoginDialog", "TextLabel", 0));
        yanzhenglabel->setText(QApplication::translate("LoginDialog", "<html><head/><body><p><span style=\" font-size:11pt;\">test</span></p></body></html>", 0));
        loginbtn->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", 0));
        exitbtn->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
