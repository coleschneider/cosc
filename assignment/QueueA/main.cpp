// main.cpp

#include "QueueA.h"

int main(int argc, char const *argv[]) {
  QueueA<int> q;
  QueueA<double> r;
  q.enqueue(3);
  q.enqueue(8);
  q.enqueue(5);
  q.enqueue(7);
  cout << q << endl;
  q.dequeue();
  //cout << x <<endl;
  cout << q << endl;
  //q.enqueue(21);
  q.enqueue(45);
  q.enqueue(61);
  cout << q << endl;
  cout << q.reverse() << endl;
  int y = q.dequeue();
  //cout << y << endl;
  cout << q.headOf() << endl;
  cout << q.size() << endl;

  return 0;
}