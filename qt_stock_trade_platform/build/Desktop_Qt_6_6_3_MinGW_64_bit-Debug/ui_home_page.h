/********************************************************************************
** Form generated from reading UI file 'home_page.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_PAGE_H
#define UI_HOME_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home_Page
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QPushButton *pushButton;
    QPushButton *mystock_button;
    QPushButton *community_button;
    QPushButton *trade_button;
    QPushButton *admin_button;

    void setupUi(QWidget *Home_Page)
    {
        if (Home_Page->objectName().isEmpty())
            Home_Page->setObjectName("Home_Page");
        Home_Page->resize(900, 430);
        Home_Page->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        stackedWidget = new QStackedWidget(Home_Page);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(120, 0, 760, 430));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        pushButton = new QPushButton(Home_Page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 121, 41));
        mystock_button = new QPushButton(Home_Page);
        mystock_button->setObjectName("mystock_button");
        mystock_button->setGeometry(QRect(0, 120, 121, 41));
        community_button = new QPushButton(Home_Page);
        community_button->setObjectName("community_button");
        community_button->setGeometry(QRect(0, 40, 121, 41));
        trade_button = new QPushButton(Home_Page);
        trade_button->setObjectName("trade_button");
        trade_button->setGeometry(QRect(0, 80, 121, 41));
        admin_button = new QPushButton(Home_Page);
        admin_button->setObjectName("admin_button");
        admin_button->setGeometry(QRect(0, 160, 121, 41));

        retranslateUi(Home_Page);

        QMetaObject::connectSlotsByName(Home_Page);
    } // setupUi

    void retranslateUi(QWidget *Home_Page)
    {
        Home_Page->setWindowTitle(QCoreApplication::translate("Home_Page", "\350\231\232\346\213\237\350\202\241\347\245\250\344\272\244\346\230\223\345\271\263\345\217\260", nullptr));
        pushButton->setText(QCoreApplication::translate("Home_Page", "\350\202\241\345\270\202\350\265\204\350\256\257", nullptr));
        mystock_button->setText(QCoreApplication::translate("Home_Page", "\346\210\221\347\232\204\350\202\241\345\270\202", nullptr));
        community_button->setText(QCoreApplication::translate("Home_Page", "\350\202\241\345\270\202\344\272\244\346\265\201", nullptr));
        trade_button->setText(QCoreApplication::translate("Home_Page", "\350\202\241\345\270\202\344\272\244\346\230\223", nullptr));
        admin_button->setText(QCoreApplication::translate("Home_Page", "\347\256\241\347\220\206\345\221\230\345\205\245\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home_Page: public Ui_Home_Page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_PAGE_H
