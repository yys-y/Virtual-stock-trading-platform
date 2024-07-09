/********************************************************************************
** Form generated from reading UI file 'recharge.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
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
        recharge->resize(501, 371);
        recharge->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        sureButtom = new QPushButton(recharge);
        sureButtom->setObjectName("sureButtom");
        sureButtom->setGeometry(QRect(170, 210, 80, 18));
        rechargeEdit = new QLineEdit(recharge);
        rechargeEdit->setObjectName("rechargeEdit");
        rechargeEdit->setGeometry(QRect(80, 160, 289, 22));
        rechargeEdit->setEchoMode(QLineEdit::Normal);

        retranslateUi(recharge);

        QMetaObject::connectSlotsByName(recharge);
    } // setupUi

    void retranslateUi(QDialog *recharge)
    {
        recharge->setWindowTitle(QCoreApplication::translate("recharge", "Dialog", nullptr));
        sureButtom->setText(QCoreApplication::translate("recharge", "Sure", nullptr));
        rechargeEdit->setInputMask(QString());
        rechargeEdit->setPlaceholderText(QCoreApplication::translate("recharge", "\350\257\267\350\276\223\345\205\245\344\275\240\346\203\263\350\246\201\345\205\205\345\200\274\347\232\204\351\207\221\351\242\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recharge: public Ui_recharge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHARGE_H
