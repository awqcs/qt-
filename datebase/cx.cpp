#include "cx.h"
#include "ui_cx.h"

cx::cx(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cx)
{
    ui->setupUi(this);

    //设置管理界面的标题
    this->setWindowTitle("汽车库存管理系统-信息查询");

    //设置view列宽适应单元格内容
     ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);


    //设置对话框的图标
    this->setWindowIcon(QIcon(":/car/img/Audi.png"));

    //设置调色板,设置背景
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/car/img/loginbk1.jpg").scaled(this->size())));
    this->setPalette(palette);

    //设置groupbox，放置radiobutton
    radiogroup=new QButtonGroup(this);
    //checkgroup=new QButtonGroup(this);
    //checkgroup->setExclusive(false);//互斥为假，可以多选

    radiogroup->addButton(ui->gy5,15);
    radiogroup->addButton(ui->qc9,16);
    radiogroup->addButton(ui->xq5,17);

    //返回主菜单
    connect(ui->backButton,SIGNAL(clicked()),this,SLOT(backSlot()));
    //查询
    connect(ui->cxButton,SIGNAL(clicked()),this,SLOT(begin()));
}

cx::~cx()
{
    delete ui;
}
void cx::backSlot()
{
    manage* man=new manage;
    man->show();
    this->hide();
}
void cx::begin()
{
    model = new QSqlQueryModel;
    QString s;


    if(ui->tabWidget->currentIndex()==0)
    {
         if(ui->tabWidget_2->currentIndex()==0)
         {

             if(radiogroup->checkedId()==16)
             {

                 model->setQuery("select * from Car");
                 ui->table1->setModel(model);
                 ui->table1->show();
             }

             {

                 if(!ui->lineEditCar2->text().isEmpty())
                 {
                     model->setQuery("select * from Car where  Cname"+s+" = '" +ui->lineEditCar2->text()+ "'");
                     ui->table1->setModel(model);
                     ui->table1->show();
                 }
                 if(!ui->lineEditCar3->text().isEmpty())
                 {
                     model->setQuery("select * from Car where  Cbir"+s+" = '" +ui->lineEditCar3->text()+ "'");
                     ui->table1->setModel(model);
                     ui->table1->show();
                 }
                 if(!ui->lineEditCar4->text().isEmpty())
                 {
                     model->setQuery("select * from Car where  Coil"+s+" = '" +ui->lineEditCar4->text()+ "'");
                     ui->table1->setModel(model);
                     ui->table1->show();
                 }
                 if(!ui->lineEditCar5->text().isEmpty())
                 {
                     model->setQuery("select * from Car where  Ccolor"+s+" = '" +ui->lineEditCar5->text()+ "'");
                     ui->table1->setModel(model);
                     ui->table1->show();
                 }
                 if(!ui->lineEditCar6->text().isEmpty())
                 {
                     model->setQuery("select * from Car where  Ccount"+s+" = '" +ui->lineEditCar6->text()+ "'");
                     ui->table1->setModel(model);
                     ui->table1->show();
                 }
                 if(!ui->lineEditCar7->text().isEmpty())
                 {
                     model->setQuery("select * from Car where  Csize"+s+" = '" +ui->lineEditCar7->text()+ "'");
                     ui->table1->setModel(model);
                     ui->table1->show();
                 }
                 if(!ui->lineEditCar8->text().isEmpty())
                 {
                     model->setQuery("select * from Car where  Cprice = '" +ui->lineEditCar8->text()+ "'");
                     ui->table1->setModel(model);
                     ui->table1->show();
                 }
                 if(!ui->lineEditCar->text().isEmpty())
                 {
                     model->setQuery("select * from Car where  Cno"+s+" = '" +ui->lineEditCar->text()+ "'");
                     ui->table1->setModel(model);
                     ui->table1->show();
                 }

            }
             //clearAll();
         }
          if(ui->tabWidget_2->currentIndex()==1)
         {

             if(radiogroup->checkedId()==15)
             {
                 model->setQuery("select * from Sale");
                 ui->table2->setModel(model);
                 ui->table2->show();
             }
             {

                  if(!ui->lineEditSale2->text().isEmpty())
                  {

                      model->setQuery("select * from Sale where  Sname"+s+" = '" +ui->lineEditSale2->text()+ "'");
                      ui->table2->setModel(model);
                      ui->table2->show();
                  }
                  if(!ui->lineEditSale3->text().isEmpty())
                  {

                      model->setQuery("select * from Sale where  Scity"+s+" = '" +ui->lineEditSale3->text()+ "'");
                      ui->table2->setModel(model);
                      ui->table2->show();
                  }
                  if(!ui->lineEditSale4->text().isEmpty())
                  {

                      model->setQuery("select * from Sale where  Stel"+s+" = '" +ui->lineEditSale4->text()+ "'");
                      ui->table2->setModel(model);
                      ui->table2->show();
                  }
                  if(!ui->lineEditSale->text().isEmpty())
                  {

                      model->setQuery("select * from Sale where  Sno"+s+" = '" +ui->lineEditSale->text()+ "'");
                      ui->table2->setModel(model);
                      ui->table2->show();
                  }
            }
             //clearAll();
          }
          if(ui->tabWidget_2->currentIndex()==2)
         {

             if(radiogroup->checkedId()==17)
             {
                 model->setQuery("select * from Need");
                 ui->table3->setModel(model);
                 ui->table3->show();
             }

             {

                 if(!ui->lineEdit2->text().isEmpty())
                 {
                     model = new QSqlQueryModel;
                     model->setQuery("select * from Need where  Cno"+s+" = '" +ui->lineEdit2->text()+ "'");
                     ui->table3->setModel(model);
                     ui->table3->show();
                 }
                 if(!ui->lineEdit3->text().isEmpty())
                 {
                     model = new QSqlQueryModel;
                     model->setQuery("select * from Need where  need"+s+" = '" +ui->lineEdit3->text()+ "'");
                     ui->table3->setModel(model);
                     ui->table3->show();
                 }
                 if(!ui->lineEdit->text().isEmpty())
                 {
                     model = new QSqlQueryModel;
                     model->setQuery("select * from Need where  Sno"+s+" = '" +ui->lineEdit->text()+ "'");
                     ui->table3->setModel(model);
                     ui->table3->show();
                 }
            }
             //clearAll();
         }


    }
    else if(ui->tabWidget->currentIndex()==1)
    {
        if(ui->tableslineEdit->text().isEmpty())
        {
            QMessageBox::warning(this,"警告","请输入供应商序号！");
            return;
        }
        else
        {
            model->setQuery("select Need.Sno,Sname,Car.Cno,Cname,Cprice ,need from Car,Sale,Need where Sale.Sno='" +ui->tableslineEdit->text()+ "'and Sale.Sno=need.Sno and need.Cno=Car.cno group by Need.Sno,Sname,Car.Cno,Cname,Cprice,need");
            ui->tableView->setModel(model);
            ui->tableView->show();
        }
    }
    //clearAll();
}
void cx::clearAll()
{
    ui->lineEditCar->clear();
    ui->lineEditCar2->clear();
    ui->lineEditCar3->clear();
    ui->lineEditCar4->clear();
    ui->lineEditCar5->clear();
    ui->lineEditCar6->clear();
    ui->lineEditCar7->clear();
    ui->lineEditCar8->clear();
    ui->lineEditSale->clear();
    ui->lineEditSale2->clear();
    ui->lineEditSale3->clear();
    ui->lineEditSale4->clear();
    ui->lineEdit->clear();
    ui->lineEdit2->clear();
    ui->lineEdit3->clear();
}
