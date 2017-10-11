#include <iostream>
using namespace std;

void swap(int v[], int a, int b) {
                //20
    int temp = v[a];
            //40
    v[a] = v[b];
            //20
    v[b] = temp;
}

void quicksort(int v[], int start, int end) {
//split
    if (start < end) {      //keep recursing
        int key = v[start];
        //cout << key <<endl;
        int edge = start + 1;
        for (int i = start + 1; i <= end; i++) {
            if (v[i] <= key) {
                swap(v, i, edge);
                edge++;
            }
        }
        //sort
        swap(v, start, edge - 1);
        quicksort(v, start, edge - 1);
        quicksort(v, edge, end);
        //merge
            //do nothing
    }
}


int main() {
    int x[] = {20, 40, 60, 30, 80, 10, 50, 70};
    for (int i = 0; i < 8; i++) {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    quicksort(x, 0, 7);
    for (int i = 0; i < 8; i++) {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return 0;
}