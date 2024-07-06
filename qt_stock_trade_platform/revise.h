#ifndef REVISE_H
#define REVISE_H

#include <QDialog>//个人信息修改

namespace Ui {
class revise;
}

class revise : public QDialog
{
    Q_OBJECT

public:
    explicit revise(QWidget *parent = nullptr);
    ~revise();

signals:
    void callUserName();

private slots:
    void on_sureButtom_clicked();

private:
    Ui::revise *ui;
};

#endif // REVISE_H
