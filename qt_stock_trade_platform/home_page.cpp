#include "home_page.h"
#include "ui_home_page.h"

Home_Page::Home_Page(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Home_Page),mystock(new Mystock),stock_trade(new Stock_Trade),stock_community(new Stock_Community),administrator(new Administrator)
{
    ui->setupUi(this);
    ui->stackedWidget->addWidget(mystock);   //在stackwidget里加入切换的界面
    ui->stackedWidget->addWidget(stock_trade);
    ui->stackedWidget->addWidget(stock_community);
}

Home_Page::~Home_Page()
{
    delete ui;
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
    ui->stackedWidget->setCurrentWidget(stock_trade);
    ui->trade_button->setStyleSheet("QPushButton{background-color:rgb(159,252,253)}");
    ui->pushButton->setStyleSheet("QPushButton{background-color:white");
     ui->community_button->setStyleSheet("QPushButton{background-color:white");
     ui->mystock_button->setStyleSheet("QPushButton{background-color:white");
       ui->admin_button->setStyleSheet("QPushButton{background-color:white");
}


void Home_Page::on_community_button_clicked()
{
    ui->stackedWidget->setCurrentWidget(stock_community);
    ui->trade_button->setStyleSheet("QPushButton{background-color:white");
    ui->pushButton->setStyleSheet("QPushButton{background-color:white");
    ui->community_button->setStyleSheet("QPushButton{background-color:rgb(159,252,253)}");
    ui->mystock_button->setStyleSheet("QPushButton{background-color:white");
      ui->admin_button->setStyleSheet("QPushButton{background-color:white");
}


void Home_Page::on_mystock_button_clicked()
{
    ui->stackedWidget->setCurrentWidget(mystock);
    ui->trade_button->setStyleSheet("QPushButton{background-color:white");
    ui->pushButton->setStyleSheet("QPushButton{background-color:white");
    ui->community_button->setStyleSheet("QPushButton{background-color:white");
    ui->mystock_button->setStyleSheet("QPushButton{background-color:rgb(159,252,253)}");
      ui->admin_button->setStyleSheet("QPushButton{background-color:white");
}


void Home_Page::on_admin_button_clicked()
{
    administrator->show();
    ui->admin_button->setStyleSheet("QPushButton{background-color:rgb(159,252,253)}");
    ui->trade_button->setStyleSheet("QPushButton{background-color:white");
    ui->pushButton->setStyleSheet("QPushButton{background-color:white");
    ui->community_button->setStyleSheet("QPushButton{background-color:white");
    ui->mystock_button->setStyleSheet("QPushButton{background-color:white");
}

