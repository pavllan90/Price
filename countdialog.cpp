#include "countdialog.h"
#include "ui_countdialog.h"

CountDialog::CountDialog(Queue *_queue) :
    ui(new Ui::CountDialog), queue(_queue)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(countMoney()));
}

void CountDialog::countMoney()
{
    labelDial = new LabelDialog("Profit for the period is " +QString::number( queue->countMoney(Date(ui->dateEdit->date().day(),
                                                                                   ui->dateEdit->date().month(),
                                                                                   ui->dateEdit->date().year()),
                                                                              Time(ui->timeEdit->time().hour(),
                                                                                   ui->timeEdit->time().minute(),
                                                                                   ui->timeEdit->time().second()),
                                                                              Date(ui->dateEdit_2->date().day(),
                                                                                   ui->dateEdit_2->date().month(),
                                                                                   ui->dateEdit_2->date().year()),
                                                                              Time(ui->timeEdit_2->time().hour(),
                                                                                   ui->timeEdit_2->time().minute(),
                                                                                   ui->timeEdit_2->time().second()))));
    labelDial->show();
}

CountDialog::~CountDialog()
{
    delete ui;
}
