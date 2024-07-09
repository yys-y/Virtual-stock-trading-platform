#include "revise.h"
#include "ui_revise.h"
#include"mainwindow.h"
revise::revise(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::revise)
{
    ui->setupUi(this);
}

revise::~revise()
{
    delete ui;
}

void revise::on_sureButtom_clicked()
{
    QString oldName=ui->oldName->text();
    QString sql=QString("select * from user where username='%1'")
                      .arg(oldName);
    QSqlQuery query(sql);
    //判断执行结果
    if(!query.next())
    {
        qDebug()<<"Revise error";
        QMessageBox::information(this,"修改用户名","修改用户名失败，原用户名错误");
        ui->newName->clear();
        ui->oldName->clear();
        return;
    }
    QString newName=ui->newName->text();
    if(oldName==newName){
        QMessageBox::information(this,"修改用户名","修改用户名失败，修改前后用户名相同");
        ui->newName->clear();
        ui->oldName->clear();
        return;
    }
    QString sql1=QString("update user set username='%1' where username='%2'")
                       .arg(newName).arg(oldName);
    QSqlQuery query1(sql1);
    QMessageBox::information(this,"用户名修改","用户名修改成功");
    nowUserName=newName;
    emit callUserName();
    this->close();
}

