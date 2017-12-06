#include "Matrix.h"

int main() {
    Matrix a(2, 2);
    a.populate();
    Matrix b = a.transpose();
    cout << "A" << endl;
    cout << a;
    cout << "B" << endl;
    cout << b<<endl;
Matrix c = a + b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << -b << endl;
    cout << 2 * a << endl;
    cout << b * 3.0 << endl;
    cout << a * b << endl;
    return 0;
}