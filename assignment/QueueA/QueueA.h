#include <iostream>
#include <cassert>
using namespace std;

#ifndef QUEUEA_H
#define QUEUEA_H

const int CAPACITY = 8;

template <class T>
class QueueA {
private:
  T _body[CAPACITY + 1];  // add an extra element to distinguish
                      // empty queue from full queue
  int _front;
  int _rear;
public:
  QueueA();
  void enqueue(const T &val);
  T dequeue();
  T headOf() const;
  QueueA<T> reverse() const;  
  int size() const;
  bool isEmpty() const;
  bool isFull() const;
  void toStream(ostream &os) const;
};

template <class T>
ostream &operator <<(ostream &os, const QueueA<T> &rhs);


template <class T>
QueueA<T>::QueueA() {
  _front = 0;
  _rear = 0;
}

template <class T>
T QueueA<T>::dequeue() {
  assert(!isEmpty());
  T temp = headOf();
  //check if only one element
  temp = _body[_front];
  _front = (_front+1)%CAPACITY;
  return temp;
}

template <class T>
int QueueA<T>::size() const{
  return (_rear - _front);
}

template <class T>
bool QueueA<T>::isEmpty() const {
  return (_front == 0 && _rear == 0);
}

template <class T>
void QueueA<T>::enqueue(const T &val) {
  assert(!isFull());
  _body[_rear] = val;
  _rear = (_rear + 1) % (CAPACITY + 1);
}

template <class T>
bool QueueA<T>::isFull() const {
  return _front == (_rear + 1) % (CAPACITY + 1);
}

template <class T>
T QueueA<T>::headOf() const {
   assert(!isEmpty());
      return _body[_front];
  }
template <class T>
QueueA<T> QueueA<T>::reverse() const {
  QueueA<int> tempArr;
  for (int i = _rear - 1; i >=_front; i--) {
    tempArr.enqueue(_body[i]);
  }
  return tempArr;
}
  

template <class T>
void QueueA<T>::toStream(ostream &os) const {
  if (_front < _rear) {
    for (int i = _front; i < _rear; i++) {
      os << _body[i] << " ";
    }
  } else {
    for (int i = _front; i < (CAPACITY + 1); i++) {
      os << _body[i] << " ";
    }
    for (int i = 0; i < _rear; i++) {
      os << _body[i] << " ";
    }
  }
  os << endl;
}

template <class T>
ostream &operator <<(ostream &os, const QueueA<T> &rhs) {
  rhs.toStream(os);
  return os;
}



#endif