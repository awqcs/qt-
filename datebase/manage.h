#ifndef MANAGE_H
#define MANAGE_H
#include<QTimer>
#include <QMessageBox>
#include<del.h>
#include<insert.h>
#include<updatebase.h>
#include<cx.h>
#include <QDateTime>
#include <QDialog>
#include<logindialog.h>
#include<storage.h>
namespace Ui {
class manage;
}

class manage : public QDialog
{
    Q_OBJECT

public:
    explicit manage(QWidget *parent = 0);
    ~manage();

private slots:

    void settimeline();
    void exitbtnSlot();
    void cancelbtn();
    void deletebtn();
    void insertbtn();
    void selectbtn();
    void updatebtn();
    void storagebtn();

private:
    Ui::manage *ui;

};

#endif // MANAGE_H
