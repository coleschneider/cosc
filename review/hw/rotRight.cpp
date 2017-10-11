#include <iostream>
using namespace std;

void rotateRight(double v[], int numItems) {
    if (numItems > 1) {
        double temp = v[numItems-1];
        v[numItems - 1] = v[numItems - 2];
        v[numItems - 2] = temp;
        rotateRight(v, numItems - 1);

    }
}


int main () {
    double x[] = {5, 3, 2, 1};
    rotateRight(x, 4);
    for (int i = 0; i < 4; i++) {
        cout<<x[i]<<" ";
    }
    cout << endl;
}