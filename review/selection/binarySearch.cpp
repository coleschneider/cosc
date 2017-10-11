#include <iostream>
using namespace std;
/*
int find(int v[], int searchNum, int start, int end) {
    while (start < end) {
        int mid = (start + end) / 2;
        if (searchNum == v[mid]) {
            return mid;
        } else if (searchNum < v[mid]){
        end = mid;
    } else {
        start = mid;
        }
    }
    return -1;
}
*/


int find(int v[], int searchNum, int start, int end) {
    int mid = (start + end) / 2;
    if (start > end) {
        return -1;
    } else if (searchNum == v[mid]) {
        return mid;
    } else if (v[mid] > searchNum) {
        return find(v, searchNum, start, mid - 1);
    } else {
        return find(v, searchNum, mid + 1, end);
    }
}

int main() {
    int x[] = {1, 2, 3, 4, 5};
    int n;
    cin >>n;
    cout<<find(x, n, 0, 5)<<endl;

}