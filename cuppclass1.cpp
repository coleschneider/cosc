//sample c++ program
#include <iostream>
using namespace std;

int main() {
    cout << "hello world";
    return 0;
}

//# begins preprocessor directive
//<>encloses ile name in include directive
//() used when naming a function
//{} encloses a group of statements
//"" encloses a string of chaacters
// '' a single character
// ends a programming statement
//cout object displays information on a computer screen
// Use << to send information to cout
//<< operator can send multiple items eg cout << "hello "  << "there";
//to get multiple lines of output on screen
cout << "hello there" << endl;
// this can be done with \n as well
cout << "hello there\n";
//#include
//the include directive inserts contents of another file into the program
//It is a preprocessor directive
//javascript is an interpreted language. While, C++ is a compiled language. 


//variables
//you must define variables (indicae the name and the type of value that it 
//can hold) before you can use it to store a value
// int age declares age as type integer
//age = 17; asssigns value 17 to age
// possible in one statement int month = 9
// by c++ law, you may only declare
// int age = 17 //okay

//A literal is a piece of data that is written directly in the source code of the program

unsigned int age;

//int age or signed int age. not necessary because default.

//available in different sizes (ie number of bytes): short int, int, long int, and long long

unsigned short int age;

// byte having to do with the type of computer processor owned.

//define variales in seperate statements like int length; and int width
//or same statement like int length, width; as long as they are of the same integer type

//int can be ommitted from a variable definition unless itts and int itself.

//to store an integer literal in a long memory location put "L" at the end of tw number
//use  "LL" for long long integral literal.

// literals begining with 0 are octal base 8:

//floating data typesww

//float daata types is less double is default and long double is double the double data type. 

//floating-point literals can be represented in fixed point (decimal) notationss: 31.3159 0.0000625
//e notation 3.14159E1 6.25e-5

//integer can be like 16 or x
//literal can be only numbers like 16
//the fractional part of will be truncated.\
//int rainfall=3.88 theen cout << rainfall is going to display 3

//char data type. Used to hold single characters or very small integer values.

//2^8 1 byte of memory so each character is gauranteed to be 1 byte of children

//"hello" is a string literal.
//hello is basically a string of 5 numbers so betwee 255 bytes.
//'c' is a single character. "c" is a string literal followed by the \0
// /* This is a */ First Rate Program
 //**// This is a //**// First Rate Program //**//
 //* This is a //*// First Rate Program //*//
 /*First Rate Program */

//SCOPE
int num1 = 5;
cout << num1; //legal
cout << num2;
int num2 = 7; //illegal

//C++ has three OPERATORS
//unary (1 operator) -5
//binar (2 operands) 13-7
//ternary (3 operands) exp1 ? exp2 : exp 3
//e.g.

string climate = temp > 90? "hot" : "cool";
//if greater temp than 90 climate recieves hot if less than 90 recieves "cool" as string value

// For division, if it has integer var on each side will return integer division, but double on both results in "real" division
//e.g.
cout << 13/5;

// if either operan is floating-point the result is floating point

cout<< 13 / 5.0; //displays 2.6
cout<< 2.0 / 4; //displays 0.5

//sing comment(//this is single line)
//multi line (/*lorem ipsum*/)



//CHAPTER 3
//cout associated with screen
//cin console input. Getting input via keyboard.

//console can only give string

/*DATA TYPE CONVERSION AND TYPE CASTING
operations are performed between operands of the same type
If operands do not thave the same type C++ will automatically convert one or the other

TYPE COERCION

COERCION: automatically converts operand to another data type
promotion: conversion to a higher type
demotion: conversion to a lower type

e.g. of demotion
int x = 3.4 + 9.2;
would return 12 rather than 12.6 because of precedent on the left side

TYPE CASTING = manual data type conversion
format - new style c++
static_cast<Data Type(e.g. int double etc.)>(value)
e.g.
cout << static_cast<int>(4.2);

second way to do it:

intVol1 = (int) volume;


OVERFLOW

occurs when assigning ta value that is to large (overflow)
or too close to 0 (underflow) to hold in a variable

e.g.

short int num = 32767;
cout << num //returns 32767
num = num + 1;
cout << num; //displays -32768 
so es brokeeeeeeeeen


const int NUM_KIDS = 4;
const double PI = 3.14159;
