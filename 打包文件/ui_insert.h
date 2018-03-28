/********************************************************************************
** Form generated from reading UI file 'insert.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERT_H
#define UI_INSERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_insert
{
public:
    QLabel *label;
    QPushButton *backButton;
    QPushButton *okButton;
    QTabWidget *tabWidget;
    QWidget *widget;
    QLineEdit *qc2;
    QLineEdit *qc6;
    QLineEdit *qc3;
    QLineEdit *qc1;
    QLineEdit *qc7;
    QLineEdit *qc4;
    QLineEdit *qc8;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *qc5;
    QWidget *tab_2;
    QLineEdit *gy1;
    QLineEdit *gy2;
    QLineEdit *gy3;
    QLineEdit *gy4;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *tab_3;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *xq1;
    QLineEdit *xq2;
    QLineEdit *xq3;
    QPushButton *clearButton;

    void setupUi(QDialog *insert)
    {
        if (insert->objectName().isEmpty())
            insert->setObjectName(QStringLiteral("insert"));
        insert->resize(543, 404);
        label = new QLabel(insert);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 10, 231, 71));
        backButton = new QPushButton(insert);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(350, 350, 71, 21));
        okButton = new QPushButton(insert);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(110, 350, 75, 23));
        tabWidget = new QTabWidget(insert);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 90, 501, 246));
        tabWidget->setIconSize(QSize(25, 16));
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        qc2 = new QLineEdit(widget);
        qc2->setObjectName(QStringLiteral("qc2"));
        qc2->setGeometry(QRect(310, 30, 133, 20));
        qc6 = new QLineEdit(widget);
        qc6->setObjectName(QStringLiteral("qc6"));
        qc6->setGeometry(QRect(310, 120, 133, 20));
        qc3 = new QLineEdit(widget);
        qc3->setObjectName(QStringLiteral("qc3"));
        qc3->setGeometry(QRect(70, 70, 141, 20));
        qc1 = new QLineEdit(widget);
        qc1->setObjectName(QStringLiteral("qc1"));
        qc1->setGeometry(QRect(69, 27, 141, 20));
        qc7 = new QLineEdit(widget);
        qc7->setObjectName(QStringLiteral("qc7"));
        qc7->setGeometry(QRect(69, 177, 141, 20));
        qc4 = new QLineEdit(widget);
        qc4->setObjectName(QStringLiteral("qc4"));
        qc4->setGeometry(QRect(310, 70, 133, 20));
        qc8 = new QLineEdit(widget);
        qc8->setObjectName(QStringLiteral("qc8"));
        qc8->setGeometry(QRect(310, 180, 133, 20));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(9, 27, 54, 16));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 51, 20));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 120, 54, 21));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(9, 177, 54, 16));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(250, 30, 54, 21));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(250, 70, 54, 16));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(250, 120, 54, 16));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(250, 180, 54, 16));
        qc5 = new QLineEdit(widget);
        qc5->setObjectName(QStringLiteral("qc5"));
        qc5->setGeometry(QRect(70, 120, 141, 20));
        tabWidget->addTab(widget, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gy1 = new QLineEdit(tab_2);
        gy1->setObjectName(QStringLiteral("gy1"));
        gy1->setGeometry(QRect(80, 80, 151, 20));
        gy2 = new QLineEdit(tab_2);
        gy2->setObjectName(QStringLiteral("gy2"));
        gy2->setGeometry(QRect(320, 80, 151, 20));
        gy3 = new QLineEdit(tab_2);
        gy3->setObjectName(QStringLiteral("gy3"));
        gy3->setGeometry(QRect(80, 140, 151, 20));
        gy4 = new QLineEdit(tab_2);
        gy4->setObjectName(QStringLiteral("gy4"));
        gy4->setGeometry(QRect(320, 140, 151, 20));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 80, 54, 21));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(250, 80, 54, 21));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 140, 54, 21));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(250, 142, 54, 20));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(40, 70, 54, 21));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(260, 60, 54, 41));
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(40, 140, 54, 21));
        xq1 = new QLineEdit(tab_3);
        xq1->setObjectName(QStringLiteral("xq1"));
        xq1->setGeometry(QRect(100, 70, 141, 20));
        xq2 = new QLineEdit(tab_3);
        xq2->setObjectName(QStringLiteral("xq2"));
        xq2->setGeometry(QRect(320, 70, 131, 20));
        xq3 = new QLineEdit(tab_3);
        xq3->setObjectName(QStringLiteral("xq3"));
        xq3->setGeometry(QRect(100, 140, 141, 20));
        tabWidget->addTab(tab_3, QString());
        clearButton = new QPushButton(insert);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(230, 350, 75, 23));

        retranslateUi(insert);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(insert);
    } // setupUi

    void retranslateUi(QDialog *insert)
    {
        insert->setWindowTitle(QApplication::translate("insert", "Dialog", 0));
        label->setText(QApplication::translate("insert", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\344\277\241\346\201\257\346\267\273\345\212\240</span></p></body></html>", 0));
        backButton->setText(QApplication::translate("insert", "\350\277\224\345\233\236", 0));
        okButton->setText(QApplication::translate("insert", "\347\241\256\350\256\244", 0));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QApplication::translate("insert", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("insert", " \346\261\275\350\275\246\347\274\226\345\217\267", 0));
        label_3->setText(QApplication::translate("insert", "\345\207\272\345\216\202\346\227\245\346\234\237", 0));
        label_4->setText(QApplication::translate("insert", "<html><head/><body><p align=\"center\"> \351\242\234\350\211\262</p></body></html>", 0));
        label_5->setText(QApplication::translate("insert", "   \345\236\213\345\217\267", 0));
        label_6->setText(QApplication::translate("insert", " \346\261\275\350\275\246\345\223\201\347\211\214", 0));
        label_7->setText(QApplication::translate("insert", "  \350\200\227\346\262\271\351\207\217", 0));
        label_8->setText(QApplication::translate("insert", "<html><head/><body><p align=\"center\">\346\225\260\351\207\217</p></body></html>", 0));
        label_9->setText(QApplication::translate("insert", "  \344\273\267\346\240\274", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("insert", "\346\261\275\350\275\246\350\241\250", 0));
        label_10->setText(QApplication::translate("insert", "\344\276\233\345\272\224\345\225\206\345\217\267", 0));
        label_11->setText(QApplication::translate("insert", "\344\276\233\345\272\224\345\225\206\345\220\215", 0));
        label_12->setText(QApplication::translate("insert", "   \345\237\216\345\270\202", 0));
        label_13->setText(QApplication::translate("insert", "  \347\224\265\350\257\235", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("insert", " \344\276\233\345\272\224\345\225\206", 0));
        label_14->setText(QApplication::translate("insert", "\344\276\233\345\272\224\345\225\206\345\217\267", 0));
        label_15->setText(QApplication::translate("insert", " \346\261\275\350\275\246\345\217\267", 0));
        label_16->setText(QApplication::translate("insert", " \351\234\200\346\261\202\351\207\217", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("insert", "\351\234\200\346\261\202\350\241\250", 0));
        clearButton->setText(QApplication::translate("insert", " \346\270\205\347\251\272", 0));
    } // retranslateUi

};

namespace Ui {
    class insert: public Ui_insert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_H
