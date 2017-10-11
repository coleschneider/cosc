#include <iostream>
using namespace std;

/*
3 2 4 1 5

*/

void selection(int v[], int numItems) {
    for (int i = 0; i < numItems; i++) {
        int min = i;
        for (int j = i + 1; j < numItems; j++) {
            if (v[min] > v[j]) {
                min = j;
            }
        }
        int temp = v[i];
        v[i] = v[min];
        v[min] = temp;    
    }
}


int main() {
    int x[] = {2, 5, 1, 3, 4};
    selection(x, 5);
    for(int i = 0; i < 5; i++) {
        cout << x[i] << " ";
    }
cout<< endl;
}
