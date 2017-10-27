#include <iostream>
using namespace std;

#ifndef QUEUEA_H
#define QUEUEA_H

const int SIZE = 8;

template <class T>
class QueueA {
private: 
    T _body[SIZE];
    int _front;
    int rear;
public:
    QueueA();
    void enqueue(int val);
    T dequeue();
    T size() const;
    void clear();
    bool isEmpty() const;
    bool isFull() const;

};

template <class T> 

QueueA::QueueA() {
    _front = 0; //image front and rear. Both will be point at 0 at first
    _rear = 0;
}

void QueueA::enqueue(int val) {

}

T QueueA::dequeue() const {

}

T QueueA::size() const {

}



#endif