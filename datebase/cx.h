#ifndef CX_H
#define CX_H
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
class cx;
}

class cx : public QDialog
{
    Q_OBJECT

public:
    explicit cx(QWidget *parent = 0);
    ~cx();

private slots:
    void backSlot();
    void begin();
    void clearAll();
private:
    Ui::cx *ui;
    QButtonGroup *radiogroup;
    QSqlQueryModel *model;
};

#endif // CX_H
