#include "recharge.h"
#include "ui_recharge.h"
#include"mainwindow.h"
recharge::recharge(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recharge)
{
    ui->setupUi(this);
}

recharge::~recharge()
{
    delete ui;
}

void recharge::on_sureButtom_clicked()
{
    QSqlQuery query;
    QString sql=QString("SELECT * FROM user WHERE username = '%1';").arg(nowUserName);
    query.exec(sql);
    query.next();
    int oldBalance=query.value(3).toInt();
    int recharge=ui->rechargeEdit->text().toInt();
    int newBalance=oldBalance+recharge;
    sql=QString("update user set balance='%1' where username='%2'")
              .arg(newBalance).arg(nowUserName);
    query.exec(sql);
    QMessageBox::information(this,"充值","充值成功");
    this->close();
}


