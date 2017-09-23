#include <iostream>
using namespace std;

//calling fib(4) is 9 function calls. WILL BE ON EXAM.

int fib(int n) {
    if(n < 2) { //base case
        return n;
    } else { // recursive case
        return fib(n - 1) + fib(n - 2);
    }
}


int main(int argc, char const * argv[]) {
    cout << "Enter a positive integer: ";
    int x;
    cin >> x;
    cout << "fib("<<x<<") = " << fib(x) << endl;
}    