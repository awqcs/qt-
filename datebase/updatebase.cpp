#include "updatebase.h"
#include "ui_updatebase.h"

updatebase::updatebase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updatebase)
{
    ui->setupUi(this);
    //设置view列宽适应单元格内容
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    //判断是否保存
    judge=1;

    //设置管理界面的标题
    this->setWindowTitle("汽车库存管理系统-信息更新");

    //设置登录对话框的图标
    this->setWindowIcon(QIcon(":/car/img/Mazda.png"));


    //设置调色板,设置背景
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/car/img/loginbk1.jpg").scaled(this->size())));
    this->setPalette(palette);    


    //返回主菜单
    connect(ui->backButton,SIGNAL(clicked()),this,SLOT(backSlot()));
    //选择汽车表
    connect(ui->carradio,SIGNAL(clicked()),this,SLOT(car()));
    //选择供应商表
    connect(ui->sellradio,SIGNAL(clicked()),this,SLOT(sell()));
    //选择需求表
    connect(ui->needradio,SIGNAL(clicked()),this,SLOT(need()));
    //确认
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(push()));

    ui->carradio->setChecked(true);
}

updatebase::~updatebase()
{
    delete ui;
}

void updatebase::backSlot()
{
    if(judge==1)
    {
        manage* man=new manage;
        man->show();
        this->hide();
    }
    else if(QMessageBox::question(this,"提示","尚未保存，是否保存",QMessageBox::Yes,QMessageBox::No)==QMessageBox::Yes)
    {
        if(model->submitAll())
            QMessageBox::information(this,"提示","修改成功",QMessageBox::Yes);
        else
        {
            QMessageBox::information(this,"提示","修改失败",QMessageBox::Yes);
            model->revertAll();
        }
        manage* man=new manage;
        man->show();
        this->hide();
        judge=1;
        return ;
    }
    else
         judge=1;


}
void updatebase::push()
{
    if(model->submitAll())
        QMessageBox::information(this,"提示","修改成功",QMessageBox::Yes);
    else
    {
        QMessageBox::information(this,"提示","修改失败",QMessageBox::Yes);
        model->revertAll();
    }
    judge=1;
}
void updatebase::car()
{

        model=new QSqlTableModel(this);
        model->setTable("Car");


        model->select();
        ui->tableView->setModel(model);
        judge =0;

}
void updatebase::sell()
{
    model=new QSqlTableModel(this);
    model->setTable("Sale");
    model->select();
    ui->tableView->setModel(model);
    judge =0;
}
void updatebase::need()
{
    model=new QSqlTableModel(this);
    model->setTable("Need");
    model->select();
    ui->tableView->setModel(model);
    judge =0;
}
void updatebase::judgeSlot(QModelIndex, QModelIndex)
{
    judge=0;
}
