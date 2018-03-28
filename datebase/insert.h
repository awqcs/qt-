#ifndef INSERT_H
#define INSERT_H
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
class insert;
}

class insert : public QDialog
{
    Q_OBJECT

public:
    explicit insert(QWidget *parent = 0);
    ~insert();

private slots:
    void backSlot();
    void ok();
    void clear();

private:
    Ui::insert *ui;
    QSqlQueryModel *model;
    QSqlTableModel *model1;
};

#endif // INSERT_H
