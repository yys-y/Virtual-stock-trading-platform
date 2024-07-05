#ifndef HOME_PAGE_H
#define HOME_PAGE_H

#include <QWidget>
#include<mystock.h>
#include<stock_community.h>
#include<stock_trade.h>
#include<administrator.h>
namespace Ui {
class Home_Page;//股市资讯，首页
}

class Home_Page : public QWidget
{
    Q_OBJECT

public:
    explicit Home_Page(QWidget *parent = nullptr);
    ~Home_Page();

private slots:
    void on_pushButton_clicked();

    void on_trade_button_clicked();

    void on_community_button_clicked();

    void on_mystock_button_clicked();

    void on_admin_button_clicked();

private:
    Ui::Home_Page *ui;
    Mystock* mystock;//我的股市
    Stock_Trade *stock_trade;//股市行情
    Stock_Community *stock_community;//股市交流
    Administrator*administrator;//管理员入口
};

#endif // HOME_PAGE_H
