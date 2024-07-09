#include "mystock.h"
#include "ui_mystock.h"
#include"recharge.h"
#include"table.h"
#include"revise.h"
#include"mainwindow.h"
#include<QFont>
Mystock::Mystock(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Mystock)
{
    ui->setupUi(this);
}

Mystock::~Mystock()
{
    delete ui;
}

void Mystock::on_recharge_clicked()
{
    recharge*recharge_page=new recharge;
    ui->stackedWidget->addWidget(recharge_page);
    ui->stackedWidget->setCurrentWidget(recharge_page);
}
void Mystock::setUserName(){
    QFont font;//font-size:16pt; font-weight:700
    font.setPixelSize(16);
    font.setBold(true);
    ui->namelabel->setFont(font);
    ui->balancelabel->setFont(font);
    ui->namelabel->setText(nowUserName);
    ui->balancelabel->setText(nowbalance);
}


void Mystock::on_history_trade_clicked()
{
    table* table_page1=new table;
    ui->stackedWidget->addWidget(table_page1);
    ui->stackedWidget->setCurrentWidget(table_page1);
}


void Mystock::on_set_message_clicked()
{
    revise*revise_page=new revise;
    ui->stackedWidget->addWidget(revise_page);
    ui->stackedWidget->setCurrentWidget(revise_page);
    connect(revise_page,&revise::callUserName,this,&Mystock::setUserName);
}

