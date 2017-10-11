#include <iostream>
using namespace std;

int find(int v[], int searchNum, int start, int end) {
    while(start < end) {
        int mid = (start + end) / 2;
        if (v[mid] == searchNum) {
            return mid;
        } else if (v[mid] > searchNum) {
            //end = end == mid? end -1 : mid;
                end = mid;
            } else {
                start = mid;
        } 
        
    }
    return -1;
}
int main () {
    int x[] = {10, 20, 30};

    int n;

    cin >> n;
    int search = find(x, n, 0, 3);
    cout<<search<<endl;
}