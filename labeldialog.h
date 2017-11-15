#ifndef LABELDIALOG_H
#define LABELDIALOG_H

#include <QDialog>

namespace Ui {
class LabelDialog;
}

class LabelDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit LabelDialog(QString _text);
    ~LabelDialog();
    
private:
    Ui::LabelDialog *ui;
};

#endif // LABELDIALOG_H
