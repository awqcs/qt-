#include "insert.h"
#include "ui_insert.h"

insert::insert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::insert)
{
    ui->setupUi(this);
    //设置管理界面为固定大小
    this->setMaximumSize(550,400);
    this->setMinimumSize(550,400);
    //设置管理界面的标题
    this->setWindowTitle("汽车库存管理系统-插入");

    //设置登录对话框的图标
    this->setWindowIcon(QIcon(":/car/img/Porsche.png"));


   //设置lineedit提示字段
   ui->gy1->setPlaceholderText("请输入供应商号（非空）");
   ui->gy2->setPlaceholderText("请输入供应商姓名");
   ui->gy3->setPlaceholderText("请输入供应商所在城市");
   ui->gy4->setPlaceholderText("请输入供应商电话号码");

   ui->qc1->setPlaceholderText("请输入汽车编号（非空）");
   ui->qc2->setPlaceholderText("请输入汽车品牌");
   ui->qc3->setPlaceholderText("请输入出厂日期");
   ui->qc4->setPlaceholderText("请输入耗油量");
   ui->qc5->setPlaceholderText("请输入颜色");
   ui->qc6->setPlaceholderText("请输入数量");
   ui->qc7->setPlaceholderText("请输入型号");
   ui->qc8->setPlaceholderText("请输入价格");

   ui->xq1->setPlaceholderText("请输入供应商号（非空）");
   ui->xq2->setPlaceholderText("请输入汽车编号（非空）");
   ui->xq3->setPlaceholderText("请输入需求量");

    //返回主菜单
    connect(ui->backButton,SIGNAL(clicked()),this,SLOT(backSlot()));
    //确认
    connect(ui->okButton,SIGNAL(clicked()),this,SLOT(ok()));
    //清除
    connect(ui->clearButton,SIGNAL(clicked()),this,SLOT(clear()));

}

insert::~insert()
{
    delete ui;
}

void insert::backSlot()
{
    manage* man=new manage;
    man->show();
    this->hide();
}
void insert::clear()
{
    ui->gy1->clear();
    ui->gy2->clear();
    ui->gy3->clear();
    ui->gy4->clear();
    ui->qc1->clear();
    ui->qc2->clear();
    ui->qc3->clear();
    ui->qc4->clear();
    ui->qc5->clear();
    ui->qc6->clear();
    ui->qc7->clear();
    ui->qc8->clear();
    ui->xq1->clear();
    ui->xq2->clear();
    ui->xq3->clear();
}
void insert::ok()
{

    if(ui->tabWidget->currentIndex()==1)
    {

        if(ui->gy1->text().isEmpty())
        {
            QMessageBox::warning(this,"警告","供应商号不能为空");
            return;
        }
        else
       {

        model = new QSqlQueryModel;
        QString str1 = ui->gy1->text();
        QString str2 = ui->gy2->text();
        QString str3 = ui->gy3->text();
        QString str4 = ui->gy4->text();
        model->setQuery("insert into Sale(Sno,Sname,Scity,Stel) values('" + str1 + "','" + str2 + "','" + str3 + "','" + str4 + "')");

        QMessageBox::information(this,"提示","添加成功",QMessageBox::Yes);
        }
    }
    else if(ui->tabWidget->currentIndex()==0)
    {
        QString s = ui->qc7->text();
        if(ui->qc1->text().isEmpty())
        {

            QMessageBox::warning(this,"警告","汽车编号不能为空");
            return;
        }
        else if((s!="中")&&(s!="大")&&(s!="小"))
        {

                  QMessageBox::information(this,"提示","型号错误",QMessageBox::Yes);
                  return;


        }

            else
            {
                model = new QSqlQueryModel;
                QString str1 = ui->qc1->text();
                QString str2 = ui->qc2->text();
                QString str3 = ui->qc3->text();
                QString str4 = ui->qc4->text();
                QString str5 = ui->qc5->text();
                QString str6 = ui->qc6->text();
                QString str7 = ui->qc7->text();
                QString str8 = ui->qc8->text();
                model->setQuery("insert into Car(Cno,Cname,Cbir,Coil,Ccolor,Ccount,Csize,Cprice) values('" + str1 + "','" + str2 + "','" + str3 + "','" + str4 + "','"+ str5+ "','"+ str6 +"','"+ str7 +"','"+ str8 +"')");
                QMessageBox::information(this,"提示","添加成功",QMessageBox::Yes);

            }
    }
    else if(ui->tabWidget->currentIndex()==2)
    {
        if(ui->xq1->text().isEmpty())
        {
            QMessageBox::warning(this,"警告","供应商号不能为空");
            return;
        }
        else if(ui->xq2->text().isEmpty())
        {
            QMessageBox::warning(this,"警告","汽车编号不能为空");
            return;
        }
        else
        {
        model = new QSqlQueryModel;
        QString str1 = ui->xq1->text();
        QString str2 = ui->xq2->text();
        QString str3 = ui->xq3->text();
        model->setQuery("insert into Need(Sno,Cno,need) values('" + str1 + "','" + str2 + "','" + str3 + "')");
        QMessageBox::information(this,"提示","添加成功",QMessageBox::Yes);
        }
    }
}
