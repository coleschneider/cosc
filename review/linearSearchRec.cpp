#include <iostream>
using namespace std;

int find(int v[], int searchNum, int start) {
    if (v[start] == v[searchNum]) {
        return start;
    } else if ()
    
        else {
     return find(v, searchNum, start + 1);
    }
}

int main() {
  int  x[] = {1, 2, 3, 4, 5};
    int n;
cin>>n;
int search = find(x, n, 0);

cout<<search<<endl;
}