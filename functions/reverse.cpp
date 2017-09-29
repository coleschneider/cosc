#include <iostream>
using namespace std;


void swap (double v[], int a, int b) {
double temp = v[a];
v[a] = v[b];
v[b] = temp;
}

//x++ is same as x x = x + 1 which is the same as ++x
//if we did reverse(swap++, end--) means re

void reverse(double v[], int start, int end) {
    if (start < end) { //recursive case
        swap(v, start, end);
        reverse(v, start + 1, end - 1);
    }

}


int main (){
    double x[8] = {3.2, 1.1, 6.5, 9.9, 4.4, 2.9, 8.1, 7.7};
    reverse(x, 0, 7);
    for (int i = 0; i < 8; i++) {
        cout<<x[i]<<" ";
    }
    return 0;
}