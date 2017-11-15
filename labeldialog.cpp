#include "labeldialog.h"
#include "ui_labeldialog.h"

LabelDialog::LabelDialog(QString _text) :
    ui(new Ui::LabelDialog)
{
    ui->setupUi(this);
    ui->label->setText(_text);
}

LabelDialog::~LabelDialog()
{
    delete ui;
}
