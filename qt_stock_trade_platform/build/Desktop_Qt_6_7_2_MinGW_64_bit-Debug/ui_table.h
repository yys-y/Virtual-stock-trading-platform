/********************************************************************************
** Form generated from reading UI file 'table.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_H
#define UI_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_table
{
public:
    QTableView *tableView;

    void setupUi(QDialog *table)
    {
        if (table->objectName().isEmpty())
            table->setObjectName("table");
        table->resize(748, 421);
        tableView = new QTableView(table);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(90, 50, 431, 311));

        retranslateUi(table);

        QMetaObject::connectSlotsByName(table);
    } // setupUi

    void retranslateUi(QDialog *table)
    {
        table->setWindowTitle(QCoreApplication::translate("table", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class table: public Ui_table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_H
