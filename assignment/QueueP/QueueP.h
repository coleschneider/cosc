#ifndef QUEUEP_H
#define QUEUEP_H

#include <iostream>
#include <cassert>
using namespace std;

class  Node {
    friend class QueueP;
private:
    int _val;
    Node *_next;
public:
    //initialize value to number then _next to nullptr like 
    //Stack
    Node(int val);
    ~Node();
};

class QueueP {
private:
    Node *_front;
    Node *_rear;
public:
    QueueP();
    QueueP(const QueueP &q); // copy constructor
    ~QueueP();
    void enqueue(int val); // goes into the rear. dont have to change fron
    //unless the queue is empty
    int dequeue(); //if empty the only time have to worry about 
    bool isEmpty() const;
    void clear();
    void toStream(ostream &os) const;
    int size() const;
    int max() const;
};
//can do &operator or *operator
ostream *operator <<(ostream &os, const QueueP &rhs);

#endif