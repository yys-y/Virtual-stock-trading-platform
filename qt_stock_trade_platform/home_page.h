#ifndef HOME_PAGE_H
#define HOME_PAGE_H

#include <QWidget>
#include<QSqlQuery>
#include<mystock.h>
#include<stock_community.h>
#include<stock_trade.h>
#include<administrator.h>
extern QString nowUserName;
extern QString nowbalance;
namespace Ui {
class Home_Page;//股市资讯，首页
}

class Home_Page : public QWidget
{
    Q_OBJECT

public:
    explicit Home_Page(QWidget *parent = nullptr);
    ~Home_Page();
 void set_button_visable(bool vision);

signals:
    void callUserName();
private slots:
    void on_pushButton_clicked();

    void on_trade_button_clicked();

    void on_community_button_clicked();

    void on_mystock_button_clicked();

    void on_admin_button_clicked();


    //void on_label_linkActivated(const QString &link);

private:
    Ui::Home_Page *ui;
};

#endif // HOME_PAGE_H
