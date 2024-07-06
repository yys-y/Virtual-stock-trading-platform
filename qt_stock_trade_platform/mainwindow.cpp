#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signup.h"
#include<qsqlquery.h>
#include <QSqlError>

#include <QGraphicsDropShadowEffect>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),homepage(new Home_Page)
{
    ui->setupUi(this);
    //设置图片
    QPixmap *pix = new QPixmap(":/images/DM_20240704113903_001.png");
    QSize sz = ui->label_image->size();
    ui->label_image->setPixmap(pix->scaled(sz));

    //设置图片阴影效果
    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    shadow->setOffset(-3, 0);
    shadow->setColor(QColor("#888888"));
    shadow->setBlurRadius(30);
    ui->label_image->setGraphicsEffect(shadow);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void sqlite_Init()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("user.db");
    if(!db.open())
    {
        qDebug()<<"open error";
    }
    //create excle
    QString createsql=QString("create table if not exists user(id integer primary key autoincrement,"
                                "username ntext unique not NULL,"
                                "password ntext not NULL,"
                                "balance integer)");
    QSqlQuery query;
    if(!query.exec(createsql)){
        qDebug()<<"table create error";
    }
    else{
        qDebug()<<"table create success";
    }
    // 创建 stock 表
    QString createStockTable = QString("CREATE TABLE IF NOT EXISTS stock ("
                                       "id INTEGER PRIMARY KEY AUTOINCREMENT, "//定义表中列的属性
                                       "stock_code NTEXT UNIQUE NOT NULL, "//股票代码
                                       "stock_name NTEXT NOT NULL, "//股票名称
                                       "stock_price REAL NOT NULL, "//股票价格
                                       "stock_change_rate REAL, "//涨跌幅
                                       "stock_change_amount REAL, "//涨跌额
                                       "stock_quantity INTEGER, "//股票数量
                                       "stock_total_volume INTEGER)"//累计成交量
                                       );
    QSqlQuery query1;
    if(!query1.exec(createsql)){
        qDebug()<<"table create error";
    }
    else{
        qDebug()<<"table create success";
    }
    if (!query1.exec(createStockTable)) {
        qDebug() << "Stock table creation error:" << query1.lastError().text();
    } else {
        qDebug() << "Stock table created successfully";
    }
}


void MainWindow::on_signup_clicked()
{
 sqlite_Init();
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString sql=QString("select * from user where username='%1' and password='%2'")
            .arg(username).arg(password);
    //创建执行语句对象
    QSqlQuery query(sql);
    //判断执行结果
    if(!query.next())
    {
        qDebug()<<"Login error";
        QMessageBox::information(this,"登录认证","登录失败,账户或者密码错误");
    }
    else
    {
        qDebug()<<"Login success";
        QMessageBox::information(this,"登录认证","登录成功");
        //登录成功后可以跳转到其他页面
        homepage->show();
        homepage->set_button_visable(false);
        if(username=="Administrate"||username=="a")
        {
            homepage->set_button_visable(true);
        }
          nowUserName=username;
        this->close();
    }
}


void MainWindow::on_signin_clicked()
{
    this->close();
    Signup *s = new Signup;
    s->show();

}

