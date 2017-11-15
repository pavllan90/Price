#ifndef CHAGEDIALOG_H
#define CHAGEDIALOG_H

#include <QDialog>
#include "donation.h"


namespace Ui {
class ChageDialog;
}

class ChageDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ChageDialog(Buy *_change, bool *_redo);
    ~ChageDialog();
    
private:
    Ui::ChageDialog *ui;
    Buy *change;
    bool *redo;
private slots:
    void changing();
};

#endif // CHAGEDIALOG_H
