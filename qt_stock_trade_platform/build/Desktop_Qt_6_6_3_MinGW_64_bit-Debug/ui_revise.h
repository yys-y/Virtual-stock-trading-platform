/********************************************************************************
** Form generated from reading UI file 'revise.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVISE_H
#define UI_REVISE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_revise
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *oldName;
    QLabel *label_2;
    QLineEdit *newName;
    QSpacerItem *verticalSpacer;
    QPushButton *sureButtom;

    void setupUi(QDialog *revise)
    {
        if (revise->objectName().isEmpty())
            revise->setObjectName("revise");
        revise->resize(748, 421);
        layoutWidget = new QWidget(revise);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(190, 70, 281, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        oldName = new QLineEdit(layoutWidget);
        oldName->setObjectName("oldName");
        oldName->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(oldName);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        newName = new QLineEdit(layoutWidget);
        newName->setObjectName("newName");
        newName->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(newName);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        sureButtom = new QPushButton(layoutWidget);
        sureButtom->setObjectName("sureButtom");

        verticalLayout->addWidget(sureButtom);


        retranslateUi(revise);

        QMetaObject::connectSlotsByName(revise);
    } // setupUi

    void retranslateUi(QDialog *revise)
    {
        revise->setWindowTitle(QCoreApplication::translate("revise", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("revise", "\345\216\237\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("revise", "\346\226\260\347\224\250\346\210\267\345\220\215", nullptr));
        sureButtom->setText(QCoreApplication::translate("revise", "Sure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class revise: public Ui_revise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVISE_H
