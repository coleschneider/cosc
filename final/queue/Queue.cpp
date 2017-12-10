#include "Queue.h"


template <class T>
Queue<T>::Queue(){
    _front = _rear= 0;
}
template <class T>
bool Queue<T>::isEmpty() const {
    return _front == 0 && _rear == 0;
}
      
template <class T>
bool Queue<T>::isFull() const {
    _rear = (_rear + 1) % (CAPACITY + 1);
}
      



template <class T>
void enqueue(const T &val){
    assert(!isFull());
        body[_rear] = val;
        _rear = (_rear + 1) % (CAPACITY + 1);
}
      
template <class T> 
T dequeue(){
    assert(!isEmpty());
    T temp 
    _front = (_front + 1) % CAPACITY;
}
      
template <class T>
T Queue<T>::headOf() const
      
template <class T>   
Queue<T> reverse() const
      

void toStream(ostream &os) const
      