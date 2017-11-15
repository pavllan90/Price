#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "queue.h"
#include <QTableWidgetItem>
#include "showdialog.h"
#include "labeldialog.h"
#include "QFileDialog"
#include "countdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    QTimer *checkTimer;
    Queue *queue;
    ShowDialog *showDial;
    LabelDialog * labelDial;
    CountDialog *countDial;
private slots:
    void check();
    void push();
    void showQ();
    void sizeQ();
    void pop();
    void isEmpty();
    void countMoney();
    void save();
    void load();
};

#endif // MAINWINDOW_H
