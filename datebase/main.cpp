#include "LoginDialog.h"
#include <QApplication>
#include <QIcon>
#include <QSqlDatabase>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //设置app的图标
    a.setWindowIcon(QIcon("logo.ico"));
    //连接sql server数据库
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
     QString dsn = QString("DRIVER={SQL SERVER};SERVER=127.0.0.1,1433;DATABASE=SaveCar;");
     db.setDatabaseName(dsn);

     bool ok =db.open();
     if(ok)
     {
         LoginDialog w;
         w.show();
         return a.exec();

     }
    else
    {
        QMessageBox::information(NULL,"提示","系统载入数据库失败，无法运行",QMessageBox::Yes);
    }
    return 0;
}
