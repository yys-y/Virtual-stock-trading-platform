#ifndef STOCK_TRADE_H
#define STOCK_TRADE_H
#include <QTableWidget>
#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include<QMenu>
#include<QAction>
namespace Ui {
class Stock_Trade;
}


class Stock_Trade : public QWidget
{
    Q_OBJECT

public:
    explicit Stock_Trade(QWidget *parent = nullptr);
    ~Stock_Trade();
    void on_button_clicked();
public slots:
    void on_deleteRow_triggered();
    void on_addRow_triggered();


private:
    Ui::Stock_Trade *ui;
    QPushButton *button;
};
#endif // STOCK_TRADE_H
