#include "stock_community.h"
#include "ui_stock_community.h"
#include <QMessageBox>
#include <QStandardItem>
#include<QDateTime>
#include"mainwindow.h"
#include<QtSql>
Stock_Community::Stock_Community(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Stock_Community)
{
    ui->setupUi(this);
    setupDatabase();
    loadPosts();

}

void Stock_Community::loadPosts() {
    // 确保数据库已连接
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        if (!db.open()) {
            qDebug() << "Error: Failed to connect to database.";
            return;
        }
    }

    QSqlQuery query("SELECT username, content, timestamp FROM posts ORDER BY id DESC");
    while (query.next()) {
        QString username = query.value(0).toString();
        QString content = query.value(1).toString();
        QString timestamp = query.value(2).toString();

        // 格式化帖子信息并添加到列表中
        QString listItemText = QString("[%1] %2: %3").arg(timestamp, username, content);
        QListWidgetItem *item = new QListWidgetItem(listItemText);
        ui->postList->addItem(item);
    }
}

Stock_Community::~Stock_Community()
{
    delete ui;
}
void Stock_Community::setupDatabase() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("forum.db");
    if (!db.open()) {
        qDebug() << "Error: unable to open database.";
        return;
    }

    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS posts ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
               "username TEXT, "
               "content TEXT, "
               "timestamp TEXT)");
}
void Stock_Community::on_submitButton_clicked()
{
    QString postContent = ui->newPostArea->toPlainText();  // 获取文本编辑器中的内容
    if (postContent.trimmed().isEmpty()) {
        QMessageBox::warning(this, "Warning", "内容不能为空");
        return;
    }
    QString currentTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");

    // 插入帖子到数据库
    QSqlQuery query;
    query.prepare("INSERT INTO posts (username, content, timestamp) VALUES (?, ?, ?)");
    query.addBindValue(nowUserName);
    query.addBindValue(postContent);
    query.addBindValue(currentTime);
    if (!query.exec()) {
        qDebug() << "Error inserting post:" << query.lastError();
        return;
    }

    // 创建并显示列表项
    QString listItemText = QString("[%1] %2: %3").arg(currentTime, nowUserName, postContent);
    QListWidgetItem *newItem = new QListWidgetItem(listItemText);
    ui->postList->insertItem(0, newItem);  // 添加到列表顶部
    qDebug() << "New Post Submitted:" << postContent;
    QMessageBox::information(this, "Success", "发布成功");
    ui->newPostArea->clear();  // 清空文本编辑器
}

