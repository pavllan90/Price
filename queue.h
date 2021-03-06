#ifndef QUEUE_H
#define QUEUE_H

#include "donation.h"
#include <QFile>
#include <QStringList>

struct Node
{
    Node() : next(NULL), data(NULL){}
    Node* next;
    Buy *data;
};

class Queue
{
public:
    Queue();
    Queue(const Queue &a);
    ~Queue();
    void push(Buy *_data);
    Buy pop();
    Buy* front();
    bool isEmpty();
    int size();
    void save(QString f_name);
    void load(QString f_name);
    void show();
    int countMoney(Date d1, Time t1, Date d2, Time t2);
    Node *first;
private:
    Node *last;
    int sizeOf;
};

#endif // QUEUE_H
