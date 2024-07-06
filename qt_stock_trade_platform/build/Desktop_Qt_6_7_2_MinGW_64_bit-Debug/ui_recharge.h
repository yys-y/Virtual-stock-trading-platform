/********************************************************************************
** Form generated from reading UI file 'recharge.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECHARGE_H
#define UI_RECHARGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_recharge
{
public:
    QPushButton *sureButtom;
    QLineEdit *rechargeEdit;

    void setupUi(QDialog *recharge)
    {
        if (recharge->objectName().isEmpty())
            recharge->setObjectName("recharge");
        recharge->resize(758, 421);
        sureButtom = new QPushButton(recharge);
        sureButtom->setObjectName("sureButtom");
        sureButtom->setGeometry(QRect(290, 230, 80, 18));
        rechargeEdit = new QLineEdit(recharge);
        rechargeEdit->setObjectName("rechargeEdit");
        rechargeEdit->setGeometry(QRect(220, 150, 289, 22));
        rechargeEdit->setEchoMode(QLineEdit::Password);

        retranslateUi(recharge);

        QMetaObject::connectSlotsByName(recharge);
    } // setupUi

    void retranslateUi(QDialog *recharge)
    {
        recharge->setWindowTitle(QCoreApplication::translate("recharge", "Dialog", nullptr));
        sureButtom->setText(QCoreApplication::translate("recharge", "Sure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recharge: public Ui_recharge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHARGE_H
