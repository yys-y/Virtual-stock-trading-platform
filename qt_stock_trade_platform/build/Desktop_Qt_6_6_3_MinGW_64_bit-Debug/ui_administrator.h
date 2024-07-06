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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QTableView *tableView;

    void setupUi(QWidget *Administrator)
    {
        if (Administrator->objectName().isEmpty())
            Administrator->setObjectName("Administrator");
        Administrator->resize(690, 475);
        Administrator->setMinimumSize(QSize(690, 475));
        Administrator->setMaximumSize(QSize(690, 475));
        Administrator->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(Administrator);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 60, 111, 31));
        pushButton = new QPushButton(Administrator);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 60, 41, 31));
        pushButton_2 = new QPushButton(Administrator);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 60, 41, 31));
        pushButton_3 = new QPushButton(Administrator);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(190, 60, 41, 31));
        lineEdit_2 = new QLineEdit(Administrator);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(460, 60, 111, 31));
        pushButton_4 = new QPushButton(Administrator);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(570, 60, 41, 31));
        tableView = new QTableView(Administrator);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 90, 321, 381));

        retranslateUi(Administrator);

        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(QWidget *Administrator)
    {
        Administrator->setWindowTitle(QCoreApplication::translate("Administrator", "\347\256\241\347\220\206\345\221\230", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Administrator", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\345\255\227\344\273\245\346\237\245\350\257\242", nullptr));
        pushButton->setText(QCoreApplication::translate("Administrator", "\346\237\245\350\257\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Administrator", "\344\277\256\346\224\271", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Administrator", "\345\210\240\351\231\244", nullptr));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Administrator", "\350\276\223\345\205\245\350\202\241\347\245\250\345\220\215\346\210\226\344\273\243\347\240\201\344\273\245\346\237\245\350\257\242", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Administrator", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
