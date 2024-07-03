#ifndef USER_H
#define USER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class user; }
QT_END_NAMESPACE

class user : public QMainWindow
{
    Q_OBJECT

public:
    user(QWidget *parent = nullptr);
    ~user();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::user *ui;
};
#endif // USER_H
