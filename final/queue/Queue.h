#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <cassert>
using namespace std;

const int CAPACITY = 8;

  template<class T>
  class Queue {
  private:
      T body[CAPACITY + 1];
      int _front, _rear;

  public:
      Queue();
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

      Queue<T> reverse() const;
      // Post: Returns a new Queue containing the same elements of this queue in reverse order

      void toStream(ostream &os) const;
      // Post: All the items on this queue from tail to head are written to os.
  };




#endif