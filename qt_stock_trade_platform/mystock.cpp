#include "mystock.h"
#include "ui_mystock.h"

Mystock::Mystock(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Mystock)
{
    ui->setupUi(this);
}

Mystock::~Mystock()
{
    delete ui;
}
