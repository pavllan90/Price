#include "showdialog.h"
#include "ui_showdialog.h"

ShowDialog::ShowDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowDialog)
{
    ui->setupUi(this);
}

ShowDialog::ShowDialog(Queue *_queue) :queue(_queue), ui(new Ui::ShowDialog), changed(true)
{
    ui->setupUi(this);
    upd = new QTimer;
    upd->start(100);
    updateTable();
    connect(ui->tableWidget, SIGNAL(cellClicked(int,int)), this, SLOT(showOne(int, int)));
    connect(upd, SIGNAL(timeout()), this, SLOT(updateTable()));
}

void ShowDialog::updateTable()
{
    if(changed)
    {
        ui->tableWidget->setColumnCount(4);
        ui->tableWidget->setRowCount(queue->size());
        ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Time"));
        ui->tableWidget->setHorizontalHeaderItem(1, new QTableWidgetItem("Date"));
        ui->tableWidget->setHorizontalHeaderItem(2, new QTableWidgetItem("Price"));
        ui->tableWidget->setHorizontalHeaderItem(3, new QTableWidgetItem("Fond"));
        int i =0;
        for(Node* temp = queue->first; temp; temp = temp->next, i++)
        {
            ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(temp->data->getTime().hours)+":"
                                                                +QString::number(temp->data->getTime().minutes)+":"
                                                                +QString::number(temp->data->getTime().seconds)));
            ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(temp->data->getDate().day)+"/"
                                                                +QString::number(temp->data->getDate().month)+"/"
                                                                +QString::number(temp->data->getDate().year)));
            ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(temp->data->getPrice())));
            if(temp->data->getType()==1)
            {
                ui->tableWidget->setItem(i, 3, new QTableWidgetItem(dynamic_cast<Donation*>(temp->data)->getName()));
            }
            else
            {
                ui->tableWidget->setItem(i, 3, new QTableWidgetItem("----"));
            }
        }
        changed = false;
    }
}

void ShowDialog::showOne(int col, int row)
{
    Node* temp = queue->first;
    for(int i = 0; i<col; i++) temp = temp->next;
    chDial = new ChageDialog(temp->data, &changed);
    chDial->show();
}

ShowDialog::~ShowDialog()
{
    delete ui;
}
