#ifndef MYSTOCK_H
#define MYSTOCK_H

#include <QWidget>

namespace Ui {
class Mystock;
}

class Mystock : public QWidget
{
    Q_OBJECT

public:
    explicit Mystock(QWidget *parent = nullptr);
    ~Mystock();

private:
    Ui::Mystock *ui;
};

#endif // MYSTOCK_H
