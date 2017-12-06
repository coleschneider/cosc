#include <iostream>
using namespace std;

#ifndef STACKP_H
#define STACKP_H

class Node {
    friend class StackP;
    //makes public private parts to StackP
private:
    int _val;
    Node *_next; //recursive class/data structure
public:
    Node(int val);
    ~Node();
};

class StackP {
private:
    Node *_top;
public:
    StackP(); //initialize to the empty stack
    ~StackP(); //destructor. 
    void push(int val);
    

};
//new creates a new object
//delete destroys a previously created object
#endif