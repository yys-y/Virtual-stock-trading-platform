#ifndef STOCK_COMMUNITY_H
#define STOCK_COMMUNITY_H

#include <QWidget>

namespace Ui {
class Stock_Community;
}

class Stock_Community : public QWidget
{
    Q_OBJECT

public:
    explicit Stock_Community(QWidget *parent = nullptr);
    ~Stock_Community();

private:
    Ui::Stock_Community *ui;
};

#endif // STOCK_COMMUNITY_H
