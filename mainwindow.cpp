#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton->setChecked(true);
    ui->label_5->setVisible(false);
    ui->lineEdit_2->setVisible(false);
    checkTimer = new QTimer;
    checkTimer->start(100);
    queue = new Queue;
    connect(checkTimer, SIGNAL(timeout()), this, SLOT(check()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(push()));
    connect(ui->actionShow, SIGNAL(triggered()), this, SLOT(showQ()));
    connect(ui->actionEmptiness, SIGNAL(triggered()), this, SLOT(isEmpty()));
    connect(ui->actionSize, SIGNAL(triggered()), this, SLOT(sizeQ()));
    connect(ui->actionSave_as, SIGNAL(triggered()), this, SLOT(save()));
    connect(ui->actionLoad, SIGNAL(triggered()), this, SLOT(load()));
    connect(ui->actionCount_money, SIGNAL(triggered()), this, SLOT(countMoney()));
    connect(ui->actionDelete_first, SIGNAL(triggered()), this, SLOT(pop()));
}

void MainWindow::countMoney()
{
    countDial = new CountDialog(queue);
    countDial->show();
}

void MainWindow::pop()
{
    if(!queue->isEmpty())
    {
        queue->pop();
        labelDial = new LabelDialog("First deleted, size is "+QString::number(queue->size()));
    }
    else
    {
        labelDial = new LabelDialog("List is empty");
    }
    labelDial->show();
}

void MainWindow::isEmpty()
{
    if(queue->isEmpty())labelDial = new LabelDialog("Empty");
    else labelDial = new LabelDialog("Not empty");
    labelDial->show();
}

void MainWindow::sizeQ()
{
    labelDial = new LabelDialog("Size is " + QString::number(queue->size()));
    labelDial->show();
}

void MainWindow::save()
{
    QString name = QFileDialog::getOpenFileName(0, "Open Dialog","", "*.dat");
    queue->save(name);
    labelDial = new LabelDialog("Saved");
    labelDial->show();
}

void MainWindow::load()
{
    QString name = QFileDialog::getOpenFileName(0, "Open Dialog","", "*.dat");
    queue->load(name);
    labelDial = new LabelDialog("Loaded, size is "+QString::number(queue->size()));
    labelDial->show();
}

void MainWindow::check()
{
    if(ui->radioButton->isChecked()) ui->label->setText("Add buy:"),ui->label_5->setVisible(false), ui->lineEdit_2->setVisible(false);
    else  ui->label->setText("Add donation:"), ui->label_5->setVisible(true), ui->lineEdit_2->setVisible(true);
    if(queue->isEmpty()) ui->actionShow->setDisabled(true), ui->actionSave_as->setDisabled(true);
    else ui->actionShow->setEnabled(true), ui->actionSave_as->setEnabled(true);
}

void MainWindow::showQ()
{
    showDial = new ShowDialog(queue);
    showDial->show();
}

void MainWindow::push()
{
    QDate _date = ui->dateEdit->date();
    QTime _time = ui->timeEdit->time();
    if(ui->radioButton_2->isChecked())
    {
        queue->push(new Donation(Time(_time.hour(), _time.minute(), _time.second()), Date(_date.day(), _date.month(), _date.year()), ui->lineEdit->text().toInt(), ui->lineEdit_2->text()));
    }
    else
    {
        queue->push(new Buy(Time(_time.hour(), _time.minute(), _time.second()), Date(_date.day(), _date.month(), _date.year()), ui->lineEdit->text().toInt()));
    }
    cout<<queue->size()<<endl;
    queue->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
