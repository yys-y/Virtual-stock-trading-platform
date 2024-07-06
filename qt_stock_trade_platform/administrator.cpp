#include "administrator.h"
#include "ui_administrator.h"
Administrator::Administrator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Administrator),model(new QSqlTableModel),model2(new QSqlTableModel)
{
    ui->setupUi(this);
    model->setTable("user"); // 设置要查询的表格
    model->select(); // 执行查询
    model2->setTable("stock"); // 设置要查询的表格
    model2->select(); // 执行查询

    QStringList tables;
    tables << "id" << "用户名" << "密码";
        for(int i = 0 ; i < tables.count(); i++)
        model->setHeaderData(i,Qt::Horizontal,tables[i]);//设置显示框表头显示
    model->setSort(0,Qt::AscendingOrder);//设置按照第0列升序排序，DescendingOrder降序
    ui->tableView->horizontalHeader()->setStretchLastSection(true);//设置最后一列填充后面表格
    ui->tableView->setColumnHidden(0,true);//设置第0行隐藏
    ui->tableView->setColumnWidth(1,50);//设置列宽，界面看起来更舒适
    ui->tableView->setColumnWidth(2,30);//设置列宽，界面看起来更舒适
    ui->tableView->setModel(model);

    QStringList tables2;
    tables2<<"id"<<"股票代码"<<"股票名称"<<"股票价格"<<"股票涨跌幅"<<"股票涨跌额"<<"股票数量"<<"累计成交量";
    for(int i = 0 ; i < tables2.count(); i++)
        model2->setHeaderData(i,Qt::Horizontal,tables2[i]);
    ui->tableView2->horizontalHeader()->setStretchLastSection(true);//设置最后一列填充后面表格
    ui->tableView2->setColumnHidden(0,true);//设置第0行隐藏
    ui->tableView2->setColumnWidth(1,50);//设置列宽，界面看起来更舒适
    ui->tableView2->setColumnWidth(2,30);//设置列宽，界面看起来更舒适
    ui->tableView2->setModel(model2);

}

Administrator::~Administrator()
{
    delete ui;
}

void Administrator::on_search_id_clicked()
{
    QString username = ui->lineEdit->text();
    //根据姓名进行筛选
    if(ui->lineEdit->text().isEmpty())
    {
        model->setTable("user");
        model->select();
        ui->tableView->setModel(model);
    }
    else
    {
    model->setFilter(QString("username = '%1'").arg(username));
    model->select();
    ui->tableView->setModel(model);
    }
}

void Administrator::on_search_id2_clicked()
{
    QString stockid = ui->lineEdit_2->text();
    if(ui->lineEdit_2->text().isEmpty())
    {
    model2->setTable("stock");
    model2->select();
    ui->tableView2->setModel(model2);
    }
    else
    {
    model2->setFilter(QString("stockid = '%1'").arg(stockid));
    model2->select();
    ui->tableView2->setModel(model2);
    }


}

void Administrator::on_delete_selected_row_clicked()
{

        int curRow = ui->tableView->currentIndex().row();
        //删除该行
      int ret = QMessageBox::warning(this, tr("删除当前行"), tr("你确定要删除该行吗"), QMessageBox::Yes | QMessageBox::No);
        if (ret == QMessageBox::Yes)
        {
            //删除该行 提交到数据库
            model->removeRow(curRow);
            model->submitAll();
        }

}

void Administrator::on_delete_selected_row_2_clicked()
{
        int curRow = ui->tableView2->currentIndex().row();
        //删除该行
        int ret = QMessageBox::warning(this, tr("删除当前行"), tr("你确定要删除该行吗"), QMessageBox::Yes | QMessageBox::No);
            if (ret == QMessageBox::Yes)
            {
                //删除该行 提交到数据库
                model2->removeRow(curRow);
                model2->submitAll();
            }
}


void Administrator::on_pushButton_clicked()//新增数据
{
        int rowNum = model->rowCount(); //获得表的行数
        int id = 0;
        model->insertRow(rowNum); //添加一行
        model->setData(model->index(rowNum, 0), id);
        model->submitAll(); //可以直接提交
}

void Administrator::on_addnew_2_clicked()
{
        int rowNum = model2->rowCount(); //获得表的行数
        int id = 0;
        model2->insertRow(rowNum); //添加一行
        model2->setData(model2->index(rowNum, 0), id);
        model2->submitAll(); //可以直接提交

}

void Administrator::on_modify_clicked() //确定修改数据
{
    bool istrans = model->database().transaction();//开始事务操作
    if (!istrans)
    {
        return;
    }
    if (model->submitAll())//是否等待变化,提交到缓存
    {
        model->database().commit();//修改的数据提交数据库
    }
    else
    {
        model->database().rollback();//回滚
        QMessageBox::warning(this,"tableModel","database error");
    }
}

void Administrator::on_modify_2_clicked()
{
    bool istrans = model2->database().transaction();//开始事务操作
    if (!istrans)
    {
        return;
    }
    if (model2->submitAll())//是否等待变化,提交到缓存
    {
        model2->database().commit();//修改的数据提交数据库
    }
    else
    {
        model2->database().rollback();//回滚
        QMessageBox::warning(this,"tableModel","database error");
    }
}

