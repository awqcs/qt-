#include "del.h"
#include "ui_del.h"

del::del(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::del)
{
    ui->setupUi(this);
    //设置管理界面为固定大小
    //this->setMaximumSize(650,400);
    //this->setMinimumSize(650,400);
    //设置管理界面的标题
    this->setWindowTitle("汽车库存管理系统-删除");

    //设置view列宽适应单元格内容
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    //设置登录对话框的图标
    this->setWindowIcon(QIcon(":/car/img/Toyota.png"));


    //设置调色板,设置背景
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/car/img/loginbk1.jpg").scaled(this->size())));
    this->setPalette(palette);


    //设置不可用
    ui->line->setEnabled(false);
    ui->deleteline->setEnabled(false);
    ui->line->setPlaceholderText("请输入供应商编号");
    ui->deleteline->setPlaceholderText("请输入汽车编号");

    //设置groupbox，放置radiobutton
    radiogroup=new QButtonGroup(this);
    radiogroup->addButton(ui->carradio,0);
    radiogroup->addButton(ui->sellradio,1);
    radiogroup->addButton(ui->needradio,2);


    //返回主菜单
    connect(ui->backButton,SIGNAL(clicked()),this,SLOT(backSlot()));
    //查询汽车
    connect(ui->carradio,SIGNAL(clicked()),this,SLOT(car()));
    //查询供应商
    connect(ui->sellradio,SIGNAL(clicked()),this,SLOT(sell()));
    //查询需求
    connect(ui->needradio,SIGNAL(clicked()),this,SLOT(need()));
    //点击删除
    connect(ui->deleteButton,SIGNAL(clicked()),this,SLOT(dele()));

}

del::~del()
{
    delete ui;
}

void del::backSlot()
{
    manage* man=new manage;
    man->show();
    this->hide();
}

void del::car()
{
    ui->deleteline->setEnabled(true);
    ui->line->setEnabled(false);
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("select * from Car ");

    ui->tableView->setModel(model);
    ui->tableView->show();

}
void del::sell()
{
    ui->deleteline->setEnabled(false);
    ui->line->setEnabled(true);
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("select * from Sale ");

    ui->tableView->setModel(model);
    ui->tableView->show();
}
void del::need()
{
    ui->deleteline->setEnabled(true);
    ui->line->setEnabled(true);
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("select * from Need ");

    ui->tableView->setModel(model);
    ui->tableView->show();
}
void del::dele()
{
    if(radiogroup->checkedId()==0)        
    {


        if(ui->deleteline->text().isEmpty())
        {
            QMessageBox::warning(this,"警告","删除输入框不能为空");
            return;
        }
        else
        {
            if(QMessageBox::question(this,"提示","确定要删除吗？",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
            {
                QSqlQuery query;
                query.exec("delete from Need where  Cno='"+ ui->deleteline->text() +"'");
                query.exec("delete from Car where  Cno='"+ ui->deleteline->text() +"'");               
                QMessageBox::information(this,"提示","操作成功",QMessageBox::Yes);
            }
        }
        ui->deleteline->clear();
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("select * from Car ");
        ui->tableView->setModel(model);
        ui->tableView->show();
    }
    else if(radiogroup->checkedId()==1)
    {


        if(ui->line->text().isEmpty())
        {
            QMessageBox::warning(this,"警告","删除输入框不能为空");
            return;
        }
        else
        {
            if(QMessageBox::question(this,"提示","确定要删除吗？",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
           {
            QSqlQuery query ;
            query.exec("delete from Need where  Sno='"+ ui->line->text() +"'");
            query.exec("delete from Sale where  Sno='"+ ui->line->text() +"'");
            QMessageBox::information(this,"提示","操作成功",QMessageBox::Yes);
            }
        }

        ui->line->clear();
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("select * from Sale ");
        ui->tableView->setModel(model);
        ui->tableView->show();
    }
    else if(radiogroup->checkedId()==2)
    {

        if(ui->deleteline->text().isEmpty())
        {
            QMessageBox::warning(this,"警告","删除输入框不能为空");
            return;
        }
        else
        {
            if(QMessageBox::question(this,"提示","确定要删除吗？",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
           {
            QSqlQuery query ;
            query.exec("delete from Need where  Sno='"+ ui->deleteline->text() +"' and Cno='"+ ui->line->text() +"'" );
            QMessageBox::information(this,"提示","操作成功",QMessageBox::Yes);
            }
        }

        ui->deleteline->clear();
        ui->line->clear();
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("select * from Need ");
        ui->tableView->setModel(model);
        ui->tableView->show();
    }
}
