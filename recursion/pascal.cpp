#include <iostream>
using namespace std;

// (x + y)^0 = 1
// (x + y)^1 = x + y
// (x + y)^2 = x^2 +2xy + y^2
// (x + y)^3 = x^3 + 3x^2y +3xy^2 + + y^3
// (x + y)^4 = x^4 + 4x^3y + 6x^2y^2 + 4 xy^3 + y ^4

// The binomial coefficients
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1    binom(7, 4) == 20

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 50 10 10 5 1


                                                b(5, 3)
                                                /     \
                                               /        \
                                            b(4,3)  b(4, 2)
                                            /   \
                                          /      \
                                        b(3,3)  b(3, 2)
                                                /   \
                                               /     \
                                            b(4,3)  b(3, 2)

                                            

*/

//memorization = storing the result of a recursive computation for future use
int binom(int n, int k) {
    if(k == 1 || n ==k) {
        return 1;
    } else {
        return binom(n - 1, k) + binom(n - 1, k - 1);
    }
}

int main(int argc, char const * argv[]) {
    cout << "Enter a row integer: ";
    int row;
    cin >> row;
    cout<<"Enter a column: ";
    int col;
    cin >> col;
    cout << "binom(" << row << "," << col << ") = " << binom(row, col) << endl;
    return 0;
}    