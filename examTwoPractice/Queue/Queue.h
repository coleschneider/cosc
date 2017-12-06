#ifndef QUEUE_B
#define QUEUE_B

#include <iostream>
#include <cassert>
using namespace std;

  const int CAPACITY = 8;

  template<class T>
  class QueueA {
  private:
      T body[CAPACITY + 1];
      int _front, _rear;

  public:
      QueueA();
      // Post: This queue is initialized to be empty.

      bool isEmpty() const;
      // Post: true is returned if this queue is empty; otherwise, false is returned.

      bool isFull() const;
      // Post: true is returned if this queue is full; otherwise, false is returned.

      void enqueue(const T &val);
      // Pre: This queue is not full.
      // Post: val is stored at the tail of this queue.
    
      T dequeue();
      // Pre: This queue is not empty.
      // Post: The head value in this queue is removed and returned.

      T headOf() const;
      // Pre: This queue is not empty.
      // Post: The head value from this queue is returned.

      QueueA<T> reverse() const;
      // Post: Returns a new Queue containing the same elements of this queue in reverse order

      void toStream(ostream &os) const;
      // Post: All the items on this queue from tail to head are written to os.
  };

  

template<class T>
QueueA<T>::QueueA() {
    _front = 0;
    _rear = 0;
}

template<class T>
bool QueueA<T>::isEmpty() const {
    if(_front == 0 && _rear == 0) {
        return true;
    } else {
        return false;
    }
}

template<class T>
bool QueueA<T>::isFull() const {
  if (_front = (_rear + 1) % (CAPACITY + 1)) {
      return true;
  } else {
      return false;
  }
}
template<class T>
T QueueA<T>::dequeue() {
    assert(!isEmpty());
    return _front = 
}

template<class T>
void QueueA<T>::enqueue(const T &val) {
    assert(!isFull());
    if (isEmpty()) {
        _body[_rear] = val;
        _rear = (_rear + 1) % (CAPACITY + 1);
    }
}

#endif