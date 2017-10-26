//LIKE ONE BIG IF STATEMENT
//copying variables from iostream twice

#ifndef STACK_H
#define STACK_H

//eg
//#define CAPACITY 8 is like saying const int capacity = 8

#include <iostream>
#include <cassert>
using namespace std;


const int SIZE = 8;

class StackA {
private:
    int _body[SIZE];
    int _top;
public:
    StackA();
    bool isEmpty() const;
    bool isFull() const;
    void push(int val); //precondition: the stack is not full
    int pop(); //precondition: the stack is not empty
    void toStream(ostream &os) const;
};

ostream &operator <<(ostream &os, const StackA &rhs);
#endif
//StackA s;
//cout << s;