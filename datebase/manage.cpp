#include "manage.h"
#include "ui_manage.h"

manage::manage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manage)
{
    ui->setupUi(this);
    //设置管理界面为固定大小
    this->setMaximumSize(500,400);
    this->setMinimumSize(500,400);
    //设置管理界面的标题
    this->setWindowTitle("汽车库存管理系统");

    //设置登录对话框的图标
    this->setWindowIcon(QIcon(":/car/img/bmw.png"));

    //设置图标
    ui->cxlabel->setPixmap(QPixmap(":/car/img/find.png").scaled(ui->cxlabel->size()));
    ui->deletelabel->setPixmap(QPixmap(":/car/img/delete.png").scaled(ui->deletelabel->size()));
    ui->updatelabel->setPixmap(QPixmap(":/car/img/update.png").scaled(ui->updatelabel->size()));
    ui->insertlabel->setPixmap(QPixmap(":/car/img/insert.png").scaled(ui->insertlabel->size()));
    ui->storagelabel->setPixmap(QPixmap(":/car/img/storage.png").scaled(ui->storagelabel->size()));
    ui->backlabel->setPixmap(QPixmap(":/car/img/back.png").scaled(ui->backlabel->size()));
    ui->cancellabel->setPixmap(QPixmap(":/car/img/exit.png").scaled(ui->cancellabel->size()));




    //设置调色板,设置背景
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/car/img/loginbk1.jpg").scaled(this->size())));
    this->setPalette(palette);

    //设置定时器
    QTimer* timelinetimer=new QTimer(this);
    timelinetimer->setInterval(100);
    timelinetimer->start();
    connect(timelinetimer,SIGNAL(timeout()),this,SLOT(settimeline()));

    //退出系统按钮信号与槽连接
    connect(ui->exitButton,SIGNAL(clicked()),this,SLOT(exitbtnSlot()));
    //查询按钮
    connect(ui->selectButton,SIGNAL(clicked()),this,SLOT(selectbtn()));
    //更新
    connect(ui->updateButton,SIGNAL(clicked()),this,SLOT(updatebtn()));
    //删除
    connect(ui->deleteButton,SIGNAL(clicked()),this,SLOT(deletebtn()));
    //插入
    connect(ui->insertButton,SIGNAL(clicked()),this,SLOT(insertbtn()));
    //存储过程
    connect(ui->storageButton,SIGNAL(clicked()),this,SLOT(storagebtn()));

    //注销用户按钮信号与槽连接
    connect(ui->cancelButton,SIGNAL(clicked()),this,SLOT(cancelbtn()));

}

manage::~manage()
{
    delete ui;
}
//日期
void manage::settimeline()
{
    QDateTime time=QDateTime::currentDateTime();
    QString str=time.toString("yyyy-MM-dd hh:mm:ss ddd");
    ui->timeline->setText(str);
}
//退出
void manage::exitbtnSlot()
{
    if(QMessageBox::question(this,"提示","是否退出系统?",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
    this->close();
    delete this;
    }
}
//注销
void manage::cancelbtn()
{
    if(QMessageBox::question(this,"提示","是否注销?",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        LoginDialog* log=new LoginDialog;
        log->show();
        this->hide();
   }
}


void manage::insertbtn()
{

   insert* ins=new insert;
    ins->show();
     this->hide();
}
void manage::deletebtn()
{
    del* de=new del;
    de->show();
    this->hide();
}

void manage::updatebtn()
{


    updatebase* upd=new updatebase;
    upd->show();
    this->hide();
    upd->updatebase::car();


}
void manage::selectbtn()
{
    cx* c=new cx;
    c->show();
    this->hide();
}
void manage::storagebtn()
{
    storage *s=new storage;
    s->show();
    this->hide();

}

