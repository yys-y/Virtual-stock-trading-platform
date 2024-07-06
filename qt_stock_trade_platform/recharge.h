#ifndef RECHARGE_H
#define RECHARGE_H

#include <QDialog>//账户充值

namespace Ui {
class recharge;
}

class recharge : public QDialog
{
    Q_OBJECT

public:
    explicit recharge(QWidget *parent = nullptr);
    ~recharge();

private slots:
    void on_sureButtom_clicked();

private:
    Ui::recharge *ui;
};

#endif // RECHARGE_H
