#include <iostream>
using namespace std;

int search(int v[], int length, int searchNum) {
   int i = 0;
    while(i < length) {
        if (v[i] == searchNum) {
           return i; 
        }
        i++;
    }
        return -1;
}


int main() {
    int x[6] = {1, 2, 7, 20, 32, 4};
    cout<<"enter an integer to search: "<<endl;
    int n;
    cin >> n;
    int find = search(x, 6, n);
  cout <<find<<endl;
    return 0;


}