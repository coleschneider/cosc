#include "Matrix.h"

int main() {
    Matrix a(3, 4);
    a.populate();
    Matrix b = a.transpose();
    cout << "A" << endl;
    cout << a;
    cout << "B" << endl;
    cout << b;
    return 0;
}