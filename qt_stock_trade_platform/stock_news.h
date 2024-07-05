#ifndef STOCK_NEWS_H
#define STOCK_NEWS_H

#include <QWidget>

namespace Ui {
class Stock_News;
}

class Stock_News : public QWidget
{
    Q_OBJECT

public:
    explicit Stock_News(QWidget *parent = nullptr);
    ~Stock_News();

private:
    Ui::Stock_News *ui;
};

#endif // STOCK_NEWS_H
