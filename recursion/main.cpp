/*
5! = 5 * 4 * 3 * 2 * 1
    4! = 4 * 3!
        3! = 3 * 2!

    Recursion Tree
        fact(4)
            |
            NODE
            |
        fact(3)
            |
only send cupp the function but not the call in main

        */
#include <iostream>
using namespace std;



long long int fact(int n) {
    if (n == 0) { //base case
        return 1;
    } else {
        return n * fact(n - 1); // recursive case

    }
}


int main(int argc, char const * argv[]) {
cout<<"enter a non-negative integer: ";
long long int x;
cin >> x;
cout << x << "! = " << fact(x)<<endl;

}