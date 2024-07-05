#include "stock_community.h"
#include "ui_stock_community.h"

Stock_Community::Stock_Community(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Stock_Community)
{
    ui->setupUi(this);
}

Stock_Community::~Stock_Community()
{
    delete ui;
}
