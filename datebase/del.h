#ifndef DEL_H
#define DEL_H
#include <QDebug>
#include <QDialog>
#include <QPalette>
#include <QButtonGroup>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QVBoxLayout>
#include <manage.h>
#include<QSqlQuery>

namespace Ui {
class del;
}

class del : public QDialog
{
    Q_OBJECT

public:
    explicit del(QWidget *parent = 0);
    ~del();
private:
    QButtonGroup *radiogroup;

private slots:
    void backSlot();
    void sell();
    void car();
    void dele();
    void need();


private:
    Ui::del *ui;
};

#endif // DEL_H
