
  #ifndef STACK_H
  #define STACK_H

  #include <iostream>
  using namespace std;

  const int SIZE = 8;

  class Stack {
  private:
    int _body[SIZE];
    int _top;  // where the next item will be popped
  public:
    Stack(); // initializes to the empty stack, i.e. _top == -1
    bool isEmpty() const;
    bool isFull() const;
    void push(int val);
    int pop();
    int size() const;
    int top() const;
    void clear();
    void toStream(ostream &os) const;
  };

  ostream &operator <<(ostream &os, const Stack &rhs);

  #endif //STACK_H
