#include <iostream>
using namespace std;

bool neighbor13(const int v[], int numItems) {
    if (numItems == 1) {
        return false;
    } else {
        return v[numItems - 1] + v[numItems-2] == 13 || neighbor13(v, numItems - 1);
    }
}



int main() {
   const int x[6] = {1, 2, 6, 7, 4, 5};

   bool isAdjacent = neighbor13(x, 6);

    cout << isAdjacent<<endl;

    return 0;
}