#ifndef MYSTOCK_H
#define MYSTOCK_H

#include <QWidget>
#include<recharge.h>
#include<revise.h>
#include<table.h>
namespace Ui {
class Mystock;
}

class Mystock : public QWidget
{
    Q_OBJECT

public:
    explicit Mystock(QWidget *parent = nullptr);
    ~Mystock();

public slots:
    void on_pushButton_clicked();
    void setUserName();

private slots:
    void on_recharge_clicked();

    void on_history_trade_clicked();

    void on_set_message_clicked();

private:
    Ui::Mystock *ui;
};

#endif // MYSTOCK_H
