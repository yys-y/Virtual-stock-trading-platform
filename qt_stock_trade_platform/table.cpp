#include "table.h"
#include "ui_table.h"
#include"mainwindow.h"
table::table(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::table)
{
    ui->setupUi(this);
    QSqlTableModel*model=new QSqlTableModel();
    model->setTable("user"); // 设置要查询的表格
    model->select(); // 执行查询
    ui->tableView->setModel(model);
}

table::~table()
{
    delete ui;
}
