#include "chagedialog.h"
#include "ui_chagedialog.h"

ChageDialog::ChageDialog(Buy *_change, bool *_redo) :
    ui(new Ui::ChageDialog), change(_change), redo(_redo)
{
    ui->setupUi(this);
    if(change->getType()==0) ui->lineEdit_2->setVisible(false);
    else ui->lineEdit_2->setText(dynamic_cast<Donation*>(_change)->getName());
    QDate _date;
    _date.setDate(_change->getDate().year, _change->getDate().month,_change->getDate().day);
    QTime _time ;
    _time.setHMS(_change->getTime().hours, _change->getTime().minutes, _change->getTime().seconds);
    ui->dateEdit->setDate(_date);
    ui->timeEdit->setTime(_time);
    ui->lineEdit->setText(QString::number(_change->getPrice()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(changing()));
}

void ChageDialog::changing()
{
    change->setDate(Date(ui->dateEdit->date().day(), ui->dateEdit->date().month(), ui->dateEdit->date().year()));
    change->setTime(Time(ui->timeEdit->time().hour(),ui->timeEdit->time().minute(),ui->timeEdit->time().second()));
    change->setPrice(ui->lineEdit->text().toInt());
    if(change->getType()==1) dynamic_cast<Donation*>(change)->setName(ui->lineEdit_2->text());
    *redo = true;
    close();
}

ChageDialog::~ChageDialog()
{
    delete ui;
}
