#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase> //数据驱动
#include <QSqlQuery> //数据库执行语句QSqlDatabase
#include <QMessageBox>//消息盒子
#include <QDebug>
#include<home_page.h>
void sqlite_Init();

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_signup_clicked();

    void on_signin_clicked();

private:
    Ui::MainWindow *ui;
    Home_Page* homepage;
};
#endif // MAINWINDOW_H
