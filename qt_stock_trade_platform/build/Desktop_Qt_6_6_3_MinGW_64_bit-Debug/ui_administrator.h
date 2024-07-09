/********************************************************************************
** Form generated from reading UI file 'administrator.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATOR_H
#define UI_ADMINISTRATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administrator
{
public:
    QLineEdit *lineEdit;
    QPushButton *search_id;
    QPushButton *modify;
    QPushButton *delete_selected_row;
    QLineEdit *lineEdit_2;
    QPushButton *search_id2;
    QTableView *tableView;
    QTableView *tableView2;
    QPushButton *pushButton;
    QPushButton *modify_2;
    QPushButton *delete_selected_row_2;
    QPushButton *addnew_2;

    void setupUi(QWidget *Administrator)
    {
        if (Administrator->objectName().isEmpty())
            Administrator->setObjectName("Administrator");
        Administrator->resize(922, 673);
        Administrator->setMinimumSize(QSize(0, 0));
        Administrator->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(Administrator);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 0, 171, 31));
        search_id = new QPushButton(Administrator);
        search_id->setObjectName("search_id");
        search_id->setGeometry(QRect(170, 0, 41, 31));
        modify = new QPushButton(Administrator);
        modify->setObjectName("modify");
        modify->setGeometry(QRect(210, 0, 41, 31));
        delete_selected_row = new QPushButton(Administrator);
        delete_selected_row->setObjectName("delete_selected_row");
        delete_selected_row->setGeometry(QRect(250, 0, 41, 31));
        lineEdit_2 = new QLineEdit(Administrator);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(420, 0, 141, 31));
        search_id2 = new QPushButton(Administrator);
        search_id2->setObjectName("search_id2");
        search_id2->setGeometry(QRect(560, 0, 41, 31));
        tableView = new QTableView(Administrator);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 30, 421, 651));
        tableView2 = new QTableView(Administrator);
        tableView2->setObjectName("tableView2");
        tableView2->setGeometry(QRect(420, 30, 511, 651));
        pushButton = new QPushButton(Administrator);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 0, 41, 31));
        modify_2 = new QPushButton(Administrator);
        modify_2->setObjectName("modify_2");
        modify_2->setGeometry(QRect(600, 0, 41, 31));
        delete_selected_row_2 = new QPushButton(Administrator);
        delete_selected_row_2->setObjectName("delete_selected_row_2");
        delete_selected_row_2->setGeometry(QRect(640, 0, 41, 31));
        addnew_2 = new QPushButton(Administrator);
        addnew_2->setObjectName("addnew_2");
        addnew_2->setGeometry(QRect(680, 0, 41, 31));

        retranslateUi(Administrator);

        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(QWidget *Administrator)
    {
        Administrator->setWindowTitle(QCoreApplication::translate("Administrator", "\347\256\241\347\220\206\345\221\230", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Administrator", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\345\255\227\344\273\245\346\237\245\350\257\242", nullptr));
        search_id->setText(QCoreApplication::translate("Administrator", "\346\237\245\350\257\242", nullptr));
        modify->setText(QCoreApplication::translate("Administrator", "\347\241\256\345\256\232", nullptr));
        delete_selected_row->setText(QCoreApplication::translate("Administrator", "\345\210\240\351\231\244", nullptr));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Administrator", "\350\276\223\345\205\245\350\202\241\347\245\250\345\220\215\346\210\226\344\273\243\347\240\201\344\273\245\346\237\245\350\257\242", nullptr));
        search_id2->setText(QCoreApplication::translate("Administrator", "\346\237\245\350\257\242", nullptr));
        pushButton->setText(QCoreApplication::translate("Administrator", "\346\226\260\345\242\236", nullptr));
        modify_2->setText(QCoreApplication::translate("Administrator", "\347\241\256\345\256\232", nullptr));
        delete_selected_row_2->setText(QCoreApplication::translate("Administrator", "\345\210\240\351\231\244", nullptr));
        addnew_2->setText(QCoreApplication::translate("Administrator", "\346\226\260\345\242\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
