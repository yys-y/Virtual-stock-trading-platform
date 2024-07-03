#include "user.h"
#include "ui_user.h"

user::user(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::user)
{
    ui->setupUi(this);
}

user::~user()
{
    delete ui;
}

//当前持股界面
void user::on_pushButton_clicked()
{

}

//账户余额界面
void user::on_pushButton_2_clicked()
{

}

//货币充值界面
void user::on_pushButton_3_clicked()
{

}

//信息修改界面
void user::on_pushButton_4_clicked()
{

}

//交易明细界面
void user::on_pushButton_5_clicked()
{

}

