#include "administrator.h"
#include "ui_administrator.h"
Administrator::Administrator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Administrator),model(new QSqlTableModel)
{
    ui->setupUi(this);
    model->setTable("user"); // 设置要查询的表格
    model->select(); // 执行查询
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


void Administrator::on_pushButton_clicked()//新增数据
{
        int rowNum = model->rowCount(); //获得表的行数
        int id = 5;
        model->insertRow(rowNum); //添加一行
        model->setData(model->index(rowNum, 0), id);
        model->submitAll(); //可以直接提交
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

