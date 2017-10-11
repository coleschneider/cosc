#include <iostream>
using namespace std;

/*
void sort(int v[], int numItems) {
    int j, temp;
    for (int i = 0; i < numItems; i++) {
        j = i;
        while (j > 0 && v[j] < v[j-1]) {
            temp = v[j];
            v[j] = v[j-1];
            v[j-1] = temp;
            j--;
        }
    }
}
*/




int main () {
    int x[] = {5, 4, 7, 2, 6, 1, 3};
   sort(x, 7);
    for(int i = 0; i < 7; i++) {
        cout << x[i]<<" ";
    }
    cout<<endl;

}

