#include "stock_trade.h"
#include "ui_stock_trade.h"

Stock_Trade::Stock_Trade(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Stock_Trade)
{
    ui->setupUi(this);
}

Stock_Trade::~Stock_Trade()
{
    delete ui;
}
