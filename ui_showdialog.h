/********************************************************************************
** Form generated from reading UI file 'showdialog.ui'
**
** Created: Wed 15. Nov 17:20:36 2017
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWDIALOG_H
#define UI_SHOWDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShowDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QDialog *ShowDialog)
    {
        if (ShowDialog->objectName().isEmpty())
            ShowDialog->setObjectName(QString::fromUtf8("ShowDialog"));
        ShowDialog->resize(450, 307);
        verticalLayout = new QVBoxLayout(ShowDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(ShowDialog);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(ShowDialog);

        QMetaObject::connectSlotsByName(ShowDialog);
    } // setupUi

    void retranslateUi(QDialog *ShowDialog)
    {
        ShowDialog->setWindowTitle(QApplication::translate("ShowDialog", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ShowDialog: public Ui_ShowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWDIALOG_H
