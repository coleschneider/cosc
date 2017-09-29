#include <iostream>
using namespace std;

void perm(string str, int start, int end) {
    if (start == end) {
        cout<<str<<endl;
    } else {
    for(int i = start; i <= end; i++) {
        char temp = v[start];
        v[start] = v[i];
        v[i] = temp;
        perm(str, start + 1, end);
        }
    }
}


int main() {
    perm("abc", 0, 2);
    return 0;
}