#ifndef STOCK_COMMUNITY_H
#define STOCK_COMMUNITY_H

#include <QWidget>
#include <QListWidget>  // 加载QListWidget头文件
#include <QtSql>        // 加载Qt SQL模块头文件


namespace Ui {
class Stock_Community;
}

class Stock_Community : public QWidget
{
    Q_OBJECT

public:
    explicit Stock_Community(QWidget *parent = nullptr);
    ~Stock_Community();

private slots:
    void on_submitButton_clicked();

private:
    Ui::Stock_Community *ui;
    void setupDatabase();
    void loadPosts();
};

#endif // STOCK_COMMUNITY_H
