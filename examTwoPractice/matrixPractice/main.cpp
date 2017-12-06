#include "Matrix.h"


int main() {
    Matrix a(2, 2);
    a.populate();
    cout << a << endl;
    Matrix b(2, 2);
    b.populate();
    cout << b << endl;

    cout << a + b << endl;
    return 0;
}