#ifndef SELECT_H
#define SELECT_H
#include <QDebug>
#include <QDialog>
#include <QPalette>
#include <QButtonGroup>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QVBoxLayout>
#include <manage.h>
#include <QDialog>

namespace Ui {
class updatebase;
}

class updatebase : public QDialog
{
    Q_OBJECT

public:
    explicit updatebase(QWidget *parent = 0);
    ~updatebase();

private slots:
    void backSlot();
    //void car();
    void sell();
    void need();
    void judgeSlot(QModelIndex,QModelIndex);
    void push();
public slots:
    void car();
private:
    Ui::updatebase *ui;
    QButtonGroup *radiogroup;
    int judge;
    QSqlTableModel *model;
};

#endif // UPDATEBASE_H
