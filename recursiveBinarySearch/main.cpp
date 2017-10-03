#include <iostream>
using namespace std;


int binarySearch(int v[], int searchNum, int start, int end) {
    //precondition is that v is sorted.
    int mid = (start + end) / 2;  
    //cout<<mid<<endl;  
    if (start > end) {
    return -1;
    } else if (v[mid] == searchNum){
        return mid;
    } else if (v[mid] > searchNum) {
        return binarySearch(v, searchNum, start, mid - 1);
    } else {
        return binarySearch(v, searchNum, mid + 1, end);
    }
}

int main() {
//dont need to assign size for array constants
    int x[] = {10, 20, 30, 40, 50, 60, 70, 80};
    for(int i = 0; i < 8; i++) {
        cout << x[i] << " ";
    }
    cout<<endl;
    cout<<"Enter a number: ";
    int n;
    cin >> n;
    int idx = binarySearch(x, n, 0, 7);
    if (idx == -1) {
        cout << n << " was not found."<<endl;

    } else {
        cout << "Found at index "<<idx<<endl;
    }
    return 0;
}