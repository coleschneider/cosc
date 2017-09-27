#include <iostream>
using namespace std;


double recursiveMax(const double v[], int numItems) {
    if (numItems == 1) {
        return v[0];
    } else if (recursiveMax(v, numItems -1) > v[numItems - 1]) {
        return recursiveMax(v, numItems -1);
    } else {
        return v[numItems - 1];
    }
}

int main()
{
    double array[5] = {72, 5, 48, 144, 9};
    double max = recursiveMax(array, 5);
    cout << max << endl;
    return 0;
}
