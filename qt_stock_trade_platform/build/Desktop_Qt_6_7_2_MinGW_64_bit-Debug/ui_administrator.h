/********************************************************************************
** Form generated from reading UI file 'administrator.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administrator
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;

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
        tableWidget = new QTableWidget(Administrator);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 20)
            tableWidget->setRowCount(20);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(240, 90, 421, 391));
        tableWidget->setRowCount(20);
        tableWidget->setColumnCount(5);
        pushButton_2 = new QPushButton(Administrator);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 60, 41, 31));
        pushButton_3 = new QPushButton(Administrator);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(190, 60, 41, 31));
        tableWidget_2 = new QTableWidget(Administrator);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        if (tableWidget_2->rowCount() < 20)
            tableWidget_2->setRowCount(20);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(0, 90, 241, 391));
        tableWidget_2->setRowCount(20);
        tableWidget_2->setColumnCount(3);
        lineEdit_2 = new QLineEdit(Administrator);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(240, 60, 111, 31));
        pushButton_4 = new QPushButton(Administrator);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(350, 60, 41, 31));

        retranslateUi(Administrator);

        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(QWidget *Administrator)
    {
        Administrator->setWindowTitle(QCoreApplication::translate("Administrator", "\347\256\241\347\220\206\345\221\230", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Administrator", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\345\255\227\344\273\245\346\237\245\350\257\242", nullptr));
        pushButton->setText(QCoreApplication::translate("Administrator", "\346\237\245\350\257\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Administrator", "\350\257\201\345\210\270\344\273\243\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Administrator", "\350\257\201\345\210\270\347\256\200\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Administrator", "\350\257\201\345\210\270\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Administrator", "\346\234\200\346\226\260\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Administrator", "\346\266\250\350\267\214\345\271\205", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Administrator", "\344\277\256\346\224\271", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Administrator", "\345\210\240\351\231\244", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Administrator", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Administrator", "\345\257\206\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Administrator", "\350\264\246\345\217\267\344\275\231\351\242\235", nullptr));
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
