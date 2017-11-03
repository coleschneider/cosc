#include <iostream>
#include "QueueA.h"
#include <cassert>


template <class T> 
QueueA<T>::QueueA() {
    _front = 0; //image front and rear. Both will be point at 0 at first
    _rear = 0;
}
template <class T> 
bool QueueA<T>::isEmpty() const {
    return _front = _rear;
}
template <class T> 
bool QueueA<T>::isFull() const {
    return _front = (_rear + 1) % CAPACITY;
}
template <class T> 
void T QueueA<T>::enqueue(const T &val) {
    assert(!isFull());
    body[_rear] = val;
    _rear++;
}
template <class T> 
T QueueA::dequeue() const {
    assert(isEmpty());
    //check if only one element
    if (_front == _rear) {
        _front = -1;
        _rear = -1;
    } else {
        if (_front == CAPACITY - 1) {
            _front = 0;
        } else {
            _front = _front + 1;
        }
        return front;
    }
}
/*
T QueueA::size() const {

}
*/


//#endif