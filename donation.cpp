#include "donation.h"

Donation::Donation()
{
    time = Time(12, 34, 11);
    date = Date(10, 10, 2001);
    name = "Greenpeace";
    price = 122;
}

Donation::Donation(Time _time, Date _date, int _price, QString _name) : Buy(_time, _date, _price)
{
    name = _name!="" ? _name : Donation().name;
}

Donation::Donation(const Donation &copy) : Buy(copy.time, copy.date, copy.price) , name(copy.name){ }

Donation::~Donation()
{

}

QString Donation::getName()
{
    return name;
}

void Donation::setName(QString _name)
{
    name = _name!="" ? _name : name;
}

int Donation::getType()
{
    return 1;
}

void Donation::show()
{
    cout<<"Date: "<<date.day<<"/"<<date.month<<"/"<<date.year<<endl;
    cout<<"Time: "<<time.hours<<":"<<time.minutes<<":"<<time.seconds<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Fond name: "<<name.toLatin1().data()<<endl<<endl;
}
