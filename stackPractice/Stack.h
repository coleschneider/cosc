#ifndef STACKA_H
#define STACKA_H

const int SIZE = 5;
template <class T>
StackA class {
private: 
    int _body[SIZE];
    int _top;
public:
    //constructor
    StatckA();
    bool isEmpty() const;
    bool isFull() const;
    void push(int val);
    int pop();
    int size() const;
    int top() const;
    void clear();
    void toStream(ostream &os) const;
    
};






#endif