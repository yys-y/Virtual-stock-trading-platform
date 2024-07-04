#include "stock_news.h"
#include "ui_stock_news.h"

Stock_News::Stock_News(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Stock_News)
{
    ui->setupUi(this);
}

Stock_News::~Stock_News()
{
    delete ui;
}
