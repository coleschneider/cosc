
  #ifndef STACK_I
  #define STACK_I

  #include <iostream>
  using namespace std;

  class Stack {
  private:
    int _body[8];
    int _top;  // where the next item will be popped
  public:
    Stack(); // initializes to the empty stack, i.e. _top == -1
    void push(int val);
    int pop();
    int size() const;
    void toStream(ostream &os) const;
  };

  ostream &operator <<(ostream &os, const Stack &rhs);

  #endif //STACK_H