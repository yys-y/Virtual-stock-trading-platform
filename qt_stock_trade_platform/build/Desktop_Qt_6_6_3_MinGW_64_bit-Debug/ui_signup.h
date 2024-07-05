/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_image;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_username;
    QLabel *label_5;
    QLineEdit *lineEdit_passwd;
    QLabel *label_6;
    QLineEdit *lineEdit_surepasswd;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->setMinimumSize(QSize(0, 0));
        Signup->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(Signup);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 50, 71, 21));
        label_3 = new QLabel(Signup);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(460, 100, 141, 31));
        label_image = new QLabel(Signup);
        label_image->setObjectName("label_image");
        label_image->setGeometry(QRect(23, 15, 281, 491));
        widget = new QWidget(Signup);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(390, 140, 291, 331));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));

        verticalLayout->addWidget(label_4);

        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName("lineEdit_username");

        verticalLayout->addWidget(lineEdit_username);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));

        verticalLayout->addWidget(label_5);

        lineEdit_passwd = new QLineEdit(widget);
        lineEdit_passwd->setObjectName("lineEdit_passwd");
        lineEdit_passwd->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_passwd);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));

        verticalLayout->addWidget(label_6);

        lineEdit_surepasswd = new QLineEdit(widget);
        lineEdit_surepasswd->setObjectName("lineEdit_surepasswd");
        lineEdit_surepasswd->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_surepasswd);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 123, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 123, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QWidget *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Signup", "Hello", nullptr));
        label_3->setText(QCoreApplication::translate("Signup", "Welcome to us", nullptr));
        label_image->setText(QString());
        label_4->setText(QCoreApplication::translate("Signup", "Username", nullptr));
        label_5->setText(QCoreApplication::translate("Signup", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("Signup", "Ensure your password", nullptr));
        pushButton->setText(QCoreApplication::translate("Signup", "Sure", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Signup", " Click there to return login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
