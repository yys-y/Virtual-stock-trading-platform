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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stock_Trade
{
public:
    QGraphicsView *graphicsView;
    QLabel *label;

    void setupUi(QWidget *Stock_Trade)
    {
        if (Stock_Trade->objectName().isEmpty())
            Stock_Trade->setObjectName("Stock_Trade");
        Stock_Trade->resize(506, 396);
        graphicsView = new QGraphicsView(Stock_Trade);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(180, 60, 256, 192));
        label = new QLabel(Stock_Trade);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 150, 71, 21));

        retranslateUi(Stock_Trade);

        QMetaObject::connectSlotsByName(Stock_Trade);
    } // setupUi

    void retranslateUi(QWidget *Stock_Trade)
    {
        Stock_Trade->setWindowTitle(QCoreApplication::translate("Stock_Trade", "Form", nullptr));
        label->setText(QCoreApplication::translate("Stock_Trade", "\350\202\241\345\270\202\350\241\214\346\203\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stock_Trade: public Ui_Stock_Trade {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCK_TRADE_H
