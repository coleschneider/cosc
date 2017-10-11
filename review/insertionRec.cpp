#include <iostream>
using namespace std;


/*
recursive idea:
base case - if is less than or equal to 1 no need to sort
*/

void sort(int v[], int n) {
    if (n <= 1) {
        return;
    } 
    sort(v, n - 1);
    int last = v[n-1];
    int j = n-2;
 
    /* Move elements of v[0..i-1], that are
      greater than key, to one position ahead
      of their current position */
    while (j >= 0 && v[j] > last)
    {
        v[j+1] = v[j];
        j--;
    }
    v[j+1] = last;
}


int main () {
    int x[] = {5, 4, 7, 2, 6, 1, 3};
   sort(x, 7);
    for(int i = 0; i < 7; i++) {
        cout << x[i]<<" ";
    }
    cout<<endl;

}