#include "home_page.h"
#include "ui_home_page.h"

Home_Page::Home_Page(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Home_Page)
{
    ui->setupUi(this);

}


Home_Page::~Home_Page()
{
    delete ui;
}
void Home_Page::set_button_visable(bool vision)
{
    if(vision)
        ui->admin_button->show();
    else {
        ui->admin_button->hide();
    }
}
void Home_Page::on_pushButton_clicked()//首页
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->trade_button->setStyleSheet("QPushButton{background-color:white");     //切换按钮时的颜色设置
    ui->pushButton->setStyleSheet("QPushButton{background-color:rgb(159,252,253)}");
    ui->community_button->setStyleSheet("QPushButton{background-color:white");
    ui->mystock_button->setStyleSheet("QPushButton{background-color:white");
      ui->admin_button->setStyleSheet("QPushButton{background-color:white");
}


void Home_Page::on_trade_button_clicked()
{
    Stock_Trade*stock_trade=new Stock_Trade;
    ui->stackedWidget->addWidget(stock_trade);
    ui->stackedWidget->setCurrentWidget(stock_trade);
    ui->trade_button->setStyleSheet("QPushButton{background-color:rgb(159,252,253)}");
    ui->pushButton->setStyleSheet("QPushButton{background-color:white");
     ui->community_button->setStyleSheet("QPushButton{background-color:white");
     ui->mystock_button->setStyleSheet("QPushButton{background-color:white");
       ui->admin_button->setStyleSheet("QPushButton{background-color:white");
}


void Home_Page::on_community_button_clicked()
{
    Stock_Community*stock_community=new Stock_Community;
    ui->stackedWidget->addWidget(stock_community);
    ui->stackedWidget->setCurrentWidget(stock_community);
    ui->trade_button->setStyleSheet("QPushButton{background-color:white");
    ui->pushButton->setStyleSheet("QPushButton{background-color:white");
    ui->community_button->setStyleSheet("QPushButton{background-color:rgb(159,252,253)}");
    ui->mystock_button->setStyleSheet("QPushButton{background-color:white");
      ui->admin_button->setStyleSheet("QPushButton{background-color:white");
}


void Home_Page::on_mystock_button_clicked()
{
    Mystock*mystock=new Mystock;
    QString sql=QString("select * from user where username='%1' ")
                      .arg(nowUserName);
    QSqlQuery query(sql);
    query.next();
    nowbalance=query.value(3).toString();
    mystock->setUserName();
    ui->stackedWidget->addWidget(mystock);
    ui->stackedWidget->setCurrentWidget(mystock);
    ui->trade_button->setStyleSheet("QPushButton{background-color:white");
    ui->pushButton->setStyleSheet("QPushButton{background-color:white");
    ui->community_button->setStyleSheet("QPushButton{background-color:white");
    ui->mystock_button->setStyleSheet("QPushButton{background-color:rgb(159,252,253)}");
      ui->admin_button->setStyleSheet("QPushButton{background-color:white");
}


void Home_Page::on_admin_button_clicked()
{
    Administrator *administrator=new Administrator;
    administrator->show();
    ui->admin_button->setStyleSheet("QPushButton{background-color:rgb(159,252,253)}");
    ui->trade_button->setStyleSheet("QPushButton{background-color:white");
    ui->pushButton->setStyleSheet("QPushButton{background-color:white");
    ui->community_button->setStyleSheet("QPushButton{background-color:white");
    ui->mystock_button->setStyleSheet("QPushButton{background-color:white");
}

