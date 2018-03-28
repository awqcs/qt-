#ifndef STORAGE_H
#define STORAGE_H
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
class storage;
}

class storage : public QDialog
{
    Q_OBJECT

public:
    explicit storage(QWidget *parent = 0);
    ~storage();

private slots:
    void backSlot();
    void okSlot();

private:
    Ui::storage *ui;
    QButtonGroup *radiogroup;
    QSqlQueryModel *model;
};

#endif // STORAGE_H
