/********************************************************************************
** Form generated from reading UI file 'mystock.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSTOCK_H
#define UI_MYSTOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mystock
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QPushButton *stock_held;
    QPushButton *recharge;
    QPushButton *set_message;
    QPushButton *history_trade;
    QGraphicsView *avator;
    QLabel *namelabel;
    QLineEdit *lineEdit;
    QPushButton *search;
    QLabel *label;
    QLabel *balancelabel;
    QLabel *label_2;

    void setupUi(QWidget *Mystock)
    {
        if (Mystock->objectName().isEmpty())
            Mystock->setObjectName("Mystock");
        Mystock->resize(758, 421);
        stackedWidget = new QStackedWidget(Mystock);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(260, 50, 501, 371));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        graphicsView = new QGraphicsView(Mystock);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 761, 51));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/images/145c34ad17d0371.jpg);"));
        graphicsView_2 = new QGraphicsView(Mystock);
        graphicsView_2->setObjectName("graphicsView_2");
        graphicsView_2->setGeometry(QRect(0, 220, 261, 211));
        graphicsView_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/v2-4bed12d53f95797b389478104565a5fe_r.jpg);"));
        stock_held = new QPushButton(Mystock);
        stock_held->setObjectName("stock_held");
        stock_held->setGeometry(QRect(0, 220, 261, 31));
        stock_held->setStyleSheet(QString::fromUtf8("background-image: url(:/images/v2-4bed12d53f95797b389478104565a5fe_r.jpg);\n"
"font: 500 16pt \"Noto Sans SC Medium\";"));
        stock_held->setFlat(true);
        recharge = new QPushButton(Mystock);
        recharge->setObjectName("recharge");
        recharge->setGeometry(QRect(0, 250, 261, 31));
        recharge->setStyleSheet(QString::fromUtf8("background-image: url(:/images/v2-4bed12d53f95797b389478104565a5fe_r.jpg);\n"
"font: 500 16pt \"Noto Sans SC Medium\";"));
        recharge->setFlat(true);
        set_message = new QPushButton(Mystock);
        set_message->setObjectName("set_message");
        set_message->setGeometry(QRect(0, 280, 261, 31));
        set_message->setStyleSheet(QString::fromUtf8("background-image: url(:/images/v2-4bed12d53f95797b389478104565a5fe_r.jpg);\n"
"font: 500 16pt \"Noto Sans SC Medium\";"));
        set_message->setFlat(true);
        history_trade = new QPushButton(Mystock);
        history_trade->setObjectName("history_trade");
        history_trade->setGeometry(QRect(0, 310, 261, 31));
        history_trade->setStyleSheet(QString::fromUtf8("background-image: url(:/images/v2-4bed12d53f95797b389478104565a5fe_r.jpg);\n"
"font: 500 16pt \"Noto Sans SC Medium\";"));
        history_trade->setFlat(true);
        avator = new QGraphicsView(Mystock);
        avator->setObjectName("avator");
        avator->setGeometry(QRect(10, 80, 71, 61));
        namelabel = new QLabel(Mystock);
        namelabel->setObjectName("namelabel");
        namelabel->setGeometry(QRect(170, 100, 91, 31));
        namelabel->setStyleSheet(QString::fromUtf8(""));
        lineEdit = new QLineEdit(Mystock);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 10, 181, 31));
        search = new QPushButton(Mystock);
        search->setObjectName("search");
        search->setGeometry(QRect(180, 10, 31, 31));
        search->setStyleSheet(QString::fromUtf8("background-image: url(:/E:/picture/94f6e78e91fc7dd9eed3_s (1).webp);"));
        label = new QLabel(Mystock);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 170, 91, 31));
        label->setStyleSheet(QString::fromUtf8(""));
        balancelabel = new QLabel(Mystock);
        balancelabel->setObjectName("balancelabel");
        balancelabel->setGeometry(QRect(120, 170, 51, 31));
        balancelabel->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(Mystock);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 100, 51, 31));

        retranslateUi(Mystock);

        QMetaObject::connectSlotsByName(Mystock);
    } // setupUi

    void retranslateUi(QWidget *Mystock)
    {
        Mystock->setWindowTitle(QCoreApplication::translate("Mystock", "Form", nullptr));
        stock_held->setText(QCoreApplication::translate("Mystock", "\345\275\223\345\211\215\346\214\201\350\202\241", nullptr));
        recharge->setText(QCoreApplication::translate("Mystock", "\350\264\247\345\270\201\345\205\205\345\200\274", nullptr));
        set_message->setText(QCoreApplication::translate("Mystock", "\344\277\241\346\201\257\344\277\256\346\224\271", nullptr));
        history_trade->setText(QCoreApplication::translate("Mystock", "\344\272\244\346\230\223\346\230\216\347\273\206", nullptr));
        namelabel->setText(QCoreApplication::translate("Mystock", "<html><head/><body><p><br/></p></body></html>", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Mystock", "\350\257\267\350\276\223\345\205\245\344\273\245\346\220\234\347\264\242", nullptr));
        search->setText(QString());
        label->setText(QCoreApplication::translate("Mystock", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">\350\264\246\346\210\267\344\275\231\351\242\235\357\274\232</span></p></body></html>", nullptr));
        balancelabel->setText(QCoreApplication::translate("Mystock", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Mystock", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mystock: public Ui_Mystock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSTOCK_H
