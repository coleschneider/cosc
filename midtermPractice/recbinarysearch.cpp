#include <iostream>
using namespace std;

int binarySearch(int v[], int searchNum, int start, int end) {
  //precondition is if its sorted
    int mid = (end + start) / 2;
//
    if (start > end) {
        return -1;
    } else if (searchNum == v[mid]) {   //if search number happens to be middle of array
        return mid;
    } else if (searchNum < v[mid]) { // check right side of the array
        return binarySearch(v, searchNum, start, mid - 1);
    } else {
        return binarySearch(v, searchNum, mid + 1, end);
    }
}




int main() {
    int n;
   int x[] = {10, 20, 30, 40, 50, 60, 70, 80};
    for (int i = 0; i < 8; i++) {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    cout<<"enter a search num: "<<endl;
        cin >> n;
    int call = binarySearch(x, n, 0, 7);
    if (call == -1) {
        return cout<<"not found"<<endl;
    } else {
        return cout<<call<<endl;
    }

    return 0;
}