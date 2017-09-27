/*
Stack = LIFO structure
A Data structure where there last thing put in is the last getting taken out

Two stack operation:

1. Push puts item onto the stack (on top of the stack)

////////////////
____________________
////////////////////|
__4__________________|
s.push(4)
push more stack looks like:
_______________________
////////////////////|
__8__________________|
////////////////////|
__4__________________|
s.push(8)


2. Pop - Takes item off the type of the structure
can be an int because the only thing you can 'pop' off from the 
stack is the top one.

handling memory and computations uses a stack

FUNCTION CALLS use dem stacks too boi. 4 things happen when you call a function:
1. Push return value of the function to the stack
2. Push the parameters to the stack
3. Push the return address to the stack
4.push any local variable to the stack
ALL FOUR OF THESE MAKE UP A FUNCTION CALL

e.g. on board


                                                                2
                                                double f(double x) {
                        int main's func call       double y;
                                        4            y = x * 20;
                                     1               return y;
                                                }
*/