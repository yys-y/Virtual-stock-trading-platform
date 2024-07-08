/********************************************************************************
** Form generated from reading UI file 'stock_trade.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCK_TRADE_H
#define UI_STOCK_TRADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stock_Trade
{
public:
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QWidget *Stock_Trade)
    {
        if (Stock_Trade->objectName().isEmpty())
            Stock_Trade->setObjectName("Stock_Trade");
        Stock_Trade->resize(774, 431);
        tableWidget = new QTableWidget(Stock_Trade);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
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
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget->rowCount() < 21)
            tableWidget->setRowCount(21);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget->setItem(0, 0, __qtablewidgetitem7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 80, 771, 351));
        label = new QLabel(Stock_Trade);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 771, 81));

        retranslateUi(Stock_Trade);

        QMetaObject::connectSlotsByName(Stock_Trade);
    } // setupUi

    void retranslateUi(QWidget *Stock_Trade)
    {
        Stock_Trade->setWindowTitle(QCoreApplication::translate("Stock_Trade", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Stock_Trade", "\350\202\241\347\245\250\344\273\243\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Stock_Trade", "\350\202\241\347\245\250\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Stock_Trade", "\346\234\200\346\226\260\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Stock_Trade", "\346\266\250\350\267\214\345\271\205", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Stock_Trade", "\346\266\250\350\267\214\351\242\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Stock_Trade", "\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Stock_Trade", "\346\210\220\344\272\244\346\225\260\351\207\217", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("Stock_Trade", "<html><head/><body><p><img src=\"file:///C:\\Users\\xing2\\AppData\\Roaming\\Tencent\\Users\\2170907380\\QQ\\WinTemp\\RichOle\\)LT$DS)62$~08Z8VAXO~GFI.png\"/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stock_Trade: public Ui_Stock_Trade {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCK_TRADE_H
