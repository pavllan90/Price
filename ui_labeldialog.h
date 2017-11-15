/********************************************************************************
** Form generated from reading UI file 'labeldialog.ui'
**
** Created: Wed 15. Nov 17:29:01 2017
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABELDIALOG_H
#define UI_LABELDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LabelDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *LabelDialog)
    {
        if (LabelDialog->objectName().isEmpty())
            LabelDialog->setObjectName(QString::fromUtf8("LabelDialog"));
        LabelDialog->resize(309, 72);
        verticalLayout = new QVBoxLayout(LabelDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(LabelDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout->addWidget(label);


        retranslateUi(LabelDialog);

        QMetaObject::connectSlotsByName(LabelDialog);
    } // setupUi

    void retranslateUi(QDialog *LabelDialog)
    {
        LabelDialog->setWindowTitle(QApplication::translate("LabelDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LabelDialog", "Size is", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LabelDialog: public Ui_LabelDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABELDIALOG_H
