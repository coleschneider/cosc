#include <iostream>
using namespace std;

/*
two main variables:
i and j begin on same index for first loop.
the second loop executs under the conditions that
j is greater than index 0 AND v[j] < v[j - 1].
j decremented

5 4 7 2 6 1 3
4 5 7 2 6 1 3
4 5 2 7 6 1 3
4 2 5 7 6 1 3
2 4 5 7 6 1 3
2 4 5 6 7 1 3
2 4 5 6 7 1 3
2 4 5 6 1 7 3
2 4 5 1 6 7 3
2 4 1 5 6 7 3
2 1 4 5 6 7 3
1 2 4 5 6 7 3
1 2 4 5 6 3 7
1 2 4 5 3 6 7
1 2 4 3 5 6 7
1 2 3 4 5 6 7

*/






void insertion(int v[], int numItems) {
    int j, temp;
    for (int i = 0; i < numItems; i ++) {
        j = i;
        while(j > 0 && v[j] < v[j - 1]) {
            temp = v[j];
            v[j] = v[j -1];
            v[j-1] = temp;
            j--;
        }
    }
}



int main () {
    int x[] = {5, 4, 7, 2, 6, 1, 3};
   insertion(x, 7);
    for(int i = 0; i < 7; i++) {
        cout << x[i]<<" ";
    }
    cout<<endl;

}