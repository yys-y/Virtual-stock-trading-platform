#include "stock_trade.h"
#include "ui_stock_trade.h"

Stock_Trade::Stock_Trade(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Stock_Trade)
{
    ui->setupUi(this);

    int rowCount = ui->tableWidget->rowCount();
    for (int i = 0; i < rowCount; ++i) {
        QPushButton* button = new QPushButton("股票代码", this);        //尚未导入数据
        connect(button, &QPushButton::clicked, this, &Stock_Trade::on_button_clicked);
        ui->tableWidget->setCellWidget(i, 0, button);
    }

    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);  //设置表格不可被编辑

    // 创建右键菜单,这个功能应该只有管理员可以访问，且管理员具有编辑功能
    QAction *addAction = new QAction("增加行", this);
    QAction *deleteAction = new QAction("删除行", this);
    // 将菜单动作连接到槽函数
    connect(addAction, &QAction::triggered, this, &Stock_Trade::on_addRow_triggered);
    connect(deleteAction, &QAction::triggered, this, &Stock_Trade::on_deleteRow_triggered);
    // 创建右键菜单并设置菜单项
    QMenu *menu = new QMenu(ui->tableWidget);
    menu->addAction(addAction);
    menu->addAction(deleteAction);
    // 将右键菜单设置给表格
    ui->tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->tableWidget, &QTableWidget::customContextMenuRequested, [=](const QPoint &pos) {
        menu->exec(ui->tableWidget->mapToGlobal(pos));
    });
}
void Stock_Trade::on_addRow_triggered() {
    // 在表格末尾增加一行
    int rowCount = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(rowCount);
    QPushButton* button = new QPushButton("股票代码", this);        //尚未导入数据
    connect(button, &QPushButton::clicked, this, &Stock_Trade::on_button_clicked);
    ui->tableWidget->setCellWidget(rowCount, 0, button);
}

void Stock_Trade::on_deleteRow_triggered() {
    // 删除选中的行
    int selectedRow = ui->tableWidget->currentRow();
    if (selectedRow != -1) {
        ui->tableWidget->removeRow(selectedRow);
    }
}
Stock_Trade::~Stock_Trade()
{
    delete ui;
}


void Stock_Trade::on_button_clicked()
{
    QObject* obj = sender();
    if (obj != nullptr) {
        // 获取按钮所在的单元格坐标
        QModelIndex index = ui->tableWidget->indexAt(static_cast<QPushButton*>(obj)->pos());
        int row = index.row();
        int column = index.column();

        // 获取该单元格对应的数据项,后期应改为切换到股票详情
        QTableWidgetItem* item = ui->tableWidget->item(row, column);
        if (item != nullptr) {
            QString data = item->data(Qt::DisplayRole).toString();
            qDebug() << "Button clicked: " << data;
        }
    }
}
