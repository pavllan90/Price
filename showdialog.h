#ifndef SHOWDIALOG_H
#define SHOWDIALOG_H

#include <QDialog>
#include "queue.h"
#include <QTableWidgetItem>
#include "chagedialog.h"
#include <QTimer>

namespace Ui {
class ShowDialog;
}

class ShowDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ShowDialog(QWidget *parent = 0);
    ShowDialog(Queue *_queue);
    ~ShowDialog();
    
private:
    Ui::ShowDialog *ui;
    Queue *queue;
    ChageDialog *chDial;
    QTimer *upd;
    bool changed;
private slots:
    void showOne(int col, int row);
    void updateTable();
};

#endif // SHOWDIALOG_H
