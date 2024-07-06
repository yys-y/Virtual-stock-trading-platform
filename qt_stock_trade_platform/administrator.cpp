#include "administrator.h"
#include "ui_administrator.h"
Administrator::Administrator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Administrator)
{
    ui->setupUi(this);
    QSqlTableModel*model=new QSqlTableModel();
    model->setTable("user"); // 设置要查询的表格
    model->select(); // 执行查询
    ui->tableView->setModel(model);
}

Administrator::~Administrator()
{
    delete ui;
}
