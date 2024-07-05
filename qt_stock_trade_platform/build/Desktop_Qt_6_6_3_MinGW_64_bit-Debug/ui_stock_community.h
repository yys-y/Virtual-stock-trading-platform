/********************************************************************************
** Form generated from reading UI file 'stock_community.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCK_COMMUNITY_H
#define UI_STOCK_COMMUNITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stock_Community
{
public:
    QGraphicsView *graphicsView;
    QLabel *label;

    void setupUi(QWidget *Stock_Community)
    {
        if (Stock_Community->objectName().isEmpty())
            Stock_Community->setObjectName("Stock_Community");
        Stock_Community->resize(578, 389);
        graphicsView = new QGraphicsView(Stock_Community);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(90, 50, 256, 192));
        label = new QLabel(Stock_Community);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 140, 40, 12));

        retranslateUi(Stock_Community);

        QMetaObject::connectSlotsByName(Stock_Community);
    } // setupUi

    void retranslateUi(QWidget *Stock_Community)
    {
        Stock_Community->setWindowTitle(QCoreApplication::translate("Stock_Community", "Form", nullptr));
        label->setText(QCoreApplication::translate("Stock_Community", "\347\244\276\345\214\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stock_Community: public Ui_Stock_Community {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCK_COMMUNITY_H
