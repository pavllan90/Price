#ifndef COUNTDIALOG_H
#define COUNTDIALOG_H

#include <QDialog>
#include "queue.h"
#include "labeldialog.h"

namespace Ui {
class CountDialog;
}

class CountDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit CountDialog(Queue *_queue);
    ~CountDialog();
    
private:
    Ui::CountDialog *ui;
    Queue *queue;
    LabelDialog *labelDial;
private slots:
    void countMoney();
};

#endif // COUNTDIALOG_H
