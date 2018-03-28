#include "storage.h"
#include "ui_storage.h"

storage::storage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::storage)
{
    ui->setupUi(this);
    //设置管理界面为固定大小
    //this->setMaximumSize(800,500);
    //this->setMinimumSize(850,500);

    //设置view列宽适应单元格内容
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    //设置管理界面的标题
    this->setWindowTitle("汽车库存管理系统-存储过程");

    //设置登录对话框的图标
    this->setWindowIcon(QIcon(":/car/img/Nisan.png"));


    //设置调色板,设置背景
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/car/img/loginbk1.jpg").scaled(this->size())));
    this->setPalette(palette);

    //设置groupbox，放置radiobutton
    radiogroup=new QButtonGroup(this);
    radiogroup->addButton(ui->qcradio,0);
    radiogroup->addButton(ui->needradio,1);

    //返回
    connect(ui->backButton,SIGNAL(clicked()),this,SLOT(backSlot()));
    //查询按钮
    connect(ui->okButton,SIGNAL(clicked()),this,SLOT(okSlot()));
}

storage::~storage()
{
    delete ui;
}
void storage::backSlot()
{
    manage* man=new manage;
    man->show();
    this->hide();
}

void storage::okSlot()
{
    model = new QSqlQueryModel;
    if(radiogroup->checkedId()==0)
    {

        model->setQuery("execute c1");

        ui->tableView->setModel(model);
        ui->tableView->show();
    }
    else if(radiogroup->checkedId()==1)
    {

        model->setQuery("execute c2");

        ui->tableView->setModel(model);
        ui->tableView->show();
    }
}




