/********************************************************************************
** Form generated from reading UI file 'countdialog.ui'
**
** Created: Wed 15. Nov 19:05:03 2017
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTDIALOG_H
#define UI_COUNTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CountDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QTimeEdit *timeEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QDateEdit *dateEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QTimeEdit *timeEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *CountDialog)
    {
        if (CountDialog->objectName().isEmpty())
            CountDialog->setObjectName(QString::fromUtf8("CountDialog"));
        CountDialog->resize(381, 164);
        verticalLayout_3 = new QVBoxLayout(CountDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_7 = new QLabel(CountDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setPointSize(12);
        label_7->setFont(font);

        verticalLayout_3->addWidget(label_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(CountDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(CountDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        dateEdit = new QDateEdit(CountDialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_2->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(CountDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        timeEdit = new QTimeEdit(CountDialog);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        horizontalLayout->addWidget(timeEdit);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(CountDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(CountDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        dateEdit_2 = new QDateEdit(CountDialog);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));

        horizontalLayout_3->addWidget(dateEdit_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(CountDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        timeEdit_2 = new QTimeEdit(CountDialog);
        timeEdit_2->setObjectName(QString::fromUtf8("timeEdit_2"));

        horizontalLayout_4->addWidget(timeEdit_2);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        pushButton = new QPushButton(CountDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);


        retranslateUi(CountDialog);

        QMetaObject::connectSlotsByName(CountDialog);
    } // setupUi

    void retranslateUi(QDialog *CountDialog)
    {
        CountDialog->setWindowTitle(QApplication::translate("CountDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CountDialog", "Count money:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CountDialog", "From:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CountDialog", "Date:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CountDialog", "Time:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CountDialog", "To:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CountDialog", "Date:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CountDialog", "Time:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CountDialog", "Calculate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CountDialog: public Ui_CountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTDIALOG_H
