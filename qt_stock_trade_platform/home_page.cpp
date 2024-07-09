#include "home_page.h"
#include "ui_home_page.h"
#include <QApplication>
#include <QLabel>

Home_Page::Home_Page(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Home_Page)
{
    ui->setupUi(this);
    ui->label->setText(tr("<a href = 'https://finance.eastmoney.com/a/202407083123894387.html'>虚拟股票交易系统</a>"));
    ui->label->setOpenExternalLinks( true );
}


Home_Page::~Home_Page()
{
    delete ui;
}
void Home_Page::set_button_visable(bool vision)
{
    if(vision)
        ui->admin_button->show();
    else {
        ui->admin_button->hide();
    }
}
QString styleSheet1 = "QPushButton {"
                     "    background-color: #e74c3c;"  /* 按钮背景颜色 */
                     "    border: none;"                /* 无边框 */
                     "    color: white;"                /* 字体颜色 */
                     "    padding: 10px 20px;"          /* 内边距 */
                     "    text-align: center;"          /* 文本居中 */
                     "    font-size: 16px;"             /* 字体大小 */
                     "    border-radius: 5px;"          /* 边角圆润 */
                     "}"
                     "QPushButton:hover {"
                     "    background-color: #c0392b;"   /* 鼠标悬停时的背景颜色 */
                     "}"
                     "QPushButton:pressed {"
                     "    background-color: #a93226;"   /* 按下时的背景颜色 */
                     "}"
                     "QPushButton:disabled {"
                     "    background-color: #e6b0aa;"   /* 禁用时的背景颜色 */
                     "    color: #aab7b8;"              /* 禁用时的字体颜色 */
                     "}";

QString styleSheet2 = "QPushButton {"
                      "    background-color:  #3498db;"  /* 按钮背景颜色 */
                      "    border: none;"                /* 无边框 */
                      "    color: white;"                /* 字体颜色 */
                      "    padding: 10px 20px;"          /* 内边距 */
                      "    text-align: center;"          /* 文本居中 */
                      "    font-size: 16px;"             /* 字体大小 */
                      "    border-radius: 5px;"          /* 边角圆润 */
                      "}"
                      "QPushButton:hover {"
                      "    background-color: #c0392b;"   /* 鼠标悬停时的背景颜色 */
                      "}"
                      "QPushButton:pressed {"
                      "    background-color: #a93226;"   /* 按下时的背景颜色 */
                      "}"
                      "QPushButton:disabled {"
                      "    background-color: #e6b0aa;"   /* 禁用时的背景颜色 */
                      "    color: #aab7b8;"              /* 禁用时的字体颜色 */
                      "}";
void Home_Page::on_pushButton_clicked()//首页
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->trade_button->setStyleSheet(styleSheet2);     //切换按钮时的颜色设置
    ui->pushButton->setStyleSheet(styleSheet1);
    ui->community_button->setStyleSheet(styleSheet2);
    ui->mystock_button->setStyleSheet(styleSheet2);
      ui->admin_button->setStyleSheet(styleSheet2);
}


void Home_Page::on_trade_button_clicked()
{
    Stock_Trade*stock_trade=new Stock_Trade;
    ui->stackedWidget->addWidget(stock_trade);
    ui->stackedWidget->setCurrentWidget(stock_trade);
    ui->trade_button->setStyleSheet(styleSheet1);
    ui->pushButton->setStyleSheet(styleSheet2);
     ui->community_button->setStyleSheet(styleSheet2);
     ui->mystock_button->setStyleSheet(styleSheet2);
       ui->admin_button->setStyleSheet(styleSheet2);
}


void Home_Page::on_community_button_clicked()
{
    Stock_Community*stock_community=new Stock_Community;
    ui->stackedWidget->addWidget(stock_community);
    ui->stackedWidget->setCurrentWidget(stock_community);
    ui->trade_button->setStyleSheet(styleSheet2);
    ui->pushButton->setStyleSheet(styleSheet2);
    ui->community_button->setStyleSheet(styleSheet1);
    ui->mystock_button->setStyleSheet(styleSheet2);
      ui->admin_button->setStyleSheet(styleSheet2);
}


void Home_Page::on_mystock_button_clicked()
{
    Mystock*mystock=new Mystock;
    QString sql=QString("select * from user where username='%1' ")
                      .arg(nowUserName);
    QSqlQuery query(sql);
    query.next();
    nowbalance=query.value(3).toString();
    mystock->setUserName();
    ui->stackedWidget->addWidget(mystock);
    ui->stackedWidget->setCurrentWidget(mystock);
    ui->trade_button->setStyleSheet(styleSheet2);
    ui->pushButton->setStyleSheet(styleSheet2);
    ui->community_button->setStyleSheet(styleSheet2);
    ui->mystock_button->setStyleSheet(styleSheet1);
      ui->admin_button->setStyleSheet(styleSheet2);
}


void Home_Page::on_admin_button_clicked()
{
    Administrator *administrator=new Administrator;
    administrator->show();
    ui->admin_button->setStyleSheet(styleSheet1);
    ui->trade_button->setStyleSheet(styleSheet2);
    ui->pushButton->setStyleSheet(styleSheet2);
    ui->community_button->setStyleSheet(styleSheet2);
    ui->mystock_button->setStyleSheet(styleSheet2);
}




