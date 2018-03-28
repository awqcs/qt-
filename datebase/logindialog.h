#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
#include <QDebug>
#include <QDialog>
#include <QPalette>
#include <QButtonGroup>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QVBoxLayout>
#include <manage.h>
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();
    void clearAll();
    bool judgeEmpty();
private:
    Ui::LoginDialog *ui;
    QButtonGroup *radiogroup;
    QSqlTableModel *model;
    int yanzheng;


private slots:
    void exitbtnSlot();
    void loginbtnSlot();
    void loginbtnSetSlot(QString);
    void setyanzheng();
};

#endif // LOGINDIALOG_H
