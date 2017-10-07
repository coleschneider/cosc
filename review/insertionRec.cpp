#include <iostream>
using namespace std;


const int SIZE = 5;


void print(int v[], int numItems) {
    for (int i = 0; i < numItems; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
void sort(int v[], int n)
{
    // Base case
    if (n <= 1)
        return;
 
    // Sort first n-1 elements
    sort( v, n-1 );
 
    // Insert last element at its correct position
    // in sorted vay.
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
 


int main() {
 int x[SIZE] = {10, 40, 76, 23, 7};

print(x, SIZE);
sort(x, SIZE);
print(x, SIZE);

return 0;

}