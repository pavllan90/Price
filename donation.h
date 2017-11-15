#ifndef DONATION_H
#define DONATION_H

#include "buy.h"

class Donation : public Buy
{
public:
    Donation();
    Donation(Time _time, Date _date, int _price, QString _name);
    Donation(const Donation &copy);
    ~Donation();
    QString getName();
    void setName(QString _name);
    virtual int getType();
    virtual void show();
private:
    QString name;
};

#endif // DONATION_H
