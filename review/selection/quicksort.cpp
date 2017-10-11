#include <iostream>
using namespace std;

int partition(int v[], int start, int end) {
    int pivot = v[end];
    int index = start;
    for (int i = start; i < end - 1; i++) {
        if (v[i] <= pivot) {
            int temp = v[i];
            v[i] = v[index];
            v[index] = temp;
            index++;
        }
    }
    int temp = v[index];
    v[index] = v[end];
    v[end] = temp;
    return index;
}

void sort(int v[], int start, int end) {
    if (start < end) {
        int index = partition(v, start, end);
        sort(v, start, index - 1);
        sort(v, index + 1, end);
    }
}


int main() {
    int x[] = {10, 12, 7, 4, 18};
    sort(x, 0, 5);
    for (int i = 0; i < 5; i++) {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}