#include "LoginDialog.h"
#include "ui_LoginDialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    //创建QSqlTableModel
    model=new QSqlTableModel(this);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    //设置登录对话框的标题
    this->setWindowTitle("登录");

    //设置登录对话框的图标
    this->setWindowIcon(QIcon(":/car/img/bc.png"));
    //设置图片
    //ui->piclabel->setPixmap(QPixmap(":/car/img/bmw.png").scaled(ui->piclabel->size()));
    ui->pic1->setPixmap(QPixmap(":/car/img/bl.png").scaled(ui->pic1->size()));

    //设置登录对话框大小固定为399*252
    this->setMaximumSize(400,320);
    this->setMinimumSize(400,320);

    //设置调色板,用于设置titlelabel的颜色
    QPalette p;
    p.setColor(QPalette::WindowText,Qt::black);
    ui->label->setPalette(p);

    //设置验证码
    QTime t;
    t= QTime::currentTime();
    qsrand(t.msec()+t.second()*1000);
    this->setyanzheng();

    //设置调色板,用于设置logindialog的背景
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap(":/car/img/loginbk1.jpg").scaled(this->size())));
    this->setPalette(palette);

    //设置按钮的图标
    ui->exitbtn->setIcon(QIcon(":/car/img/exit.png"));
    ui->loginbtn->setIcon(QIcon(":/car/img/Enter.png"));


    //设置登录按钮不可用
    ui->loginbtn->setEnabled(false);
    //设置lineedit提示语句
    ui->userline->setPlaceholderText("请输入用户名");
    ui->passwordline->setPlaceholderText("请输入密码");
    ui->yanzhengline->setPlaceholderText("请输入验证码");

    //设置passlineedit显示为密码模式
    ui->passwordline->setEchoMode(QLineEdit::Password);
    //连接信号与槽
    connect(ui->loginbtn,SIGNAL(clicked()),this,SLOT(loginbtnSlot()));
    connect(ui->exitbtn,SIGNAL(clicked()),this,SLOT(exitbtnSlot()));
    //设置登录按钮可用
    connect(ui->userline,SIGNAL(textChanged(QString)),this,SLOT(loginbtnSetSlot(QString)));
    connect(ui->passwordline,SIGNAL(textChanged(QString)),this,SLOT(loginbtnSetSlot(QString)));
}
LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::loginbtnSlot()
{

    QString str1 = ui->userline->text();
    QString str2 = ui->passwordline->text();
    int val1 = str1.toInt();
    int val2 = str2.toInt();

    //判断验证码输入是否正确
    if(ui->yanzhenglabel->text()!=ui->yanzhengline->text())
    {
        QMessageBox::warning(this,"警告","验证码输入错误",QMessageBox::Yes);
        this->clearAll();
        this->setyanzheng();
        return;

    }
    else
    {
        if(val1==111)
        {

            if(val2==111)
            {
                QString str3="登录成功";
                QMessageBox::information(this,"提示",str3,QMessageBox::Yes);

                //创建管理窗口
                manage* manage1=new manage;
                manage1->show();
                this->clearAll();
                this->hide();
                return;
            }
            else
            {
                QMessageBox::information(this,"提示","密码输入有误",QMessageBox::Yes);
                this->clearAll();
                return;
            }
        }
        else
        {
            QMessageBox::warning(this,"提示","用户名错误，请重新输入！",QMessageBox::Yes);
            this->clearAll();
            return;
        }

    }

}


void LoginDialog::exitbtnSlot()
{
    this->close();
}
void LoginDialog::loginbtnSetSlot(QString)
{
    ui->loginbtn->setEnabled(true);
}
void LoginDialog::clearAll()
{
    ui->userline->clear();
    ui->passwordline->clear();
    ui->yanzhengline->clear();
}
bool LoginDialog::judgeEmpty()
{
    if(ui->userline->text().isEmpty())
    {
        QMessageBox::warning(this,"警告","用户名不能为空");
        return false;
    }
    if(ui->passwordline->text().isEmpty())
    {
        QMessageBox::warning(this,"警告","密码不能为空");
        return false;
    }
    else
        return true;
}


//设置验证码
void LoginDialog::setyanzheng()
{
    QPalette p1;
    p1.setColor(QPalette::WindowText,Qt::red);
    yanzheng=qrand()%10000;
    while(yanzheng<1000)
        yanzheng=qrand()%10000;
    ui->yanzhenglabel->setText(QString::number(yanzheng));
    ui->yanzhenglabel->setPalette(p1);
}
