#ifndef STOCK_TRADE_H
#define STOCK_TRADE_H

#include <QWidget>

namespace Ui {
class Stock_Trade;
}

class Stock_Trade : public QWidget
{
    Q_OBJECT

public:
    explicit Stock_Trade(QWidget *parent = nullptr);
    ~Stock_Trade();

private:
    Ui::Stock_Trade *ui;
};

#endif // STOCK_TRADE_H
