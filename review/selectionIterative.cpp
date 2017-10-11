#include <iostream>
using namespace std;

/*
Three main variables:
i = the index that may be switched if smaller value found
j = looks through the array looking for a smaller value than current min
min = current minimum value in the array


2 5 1 3 4
1 5 2 3 4
1 2 5 3 4
1 2 3 5 4
1 2 3 4 5
*/

void selectSort(int arr[], int n)
{
//pos_min is short for position of min
	int pos_min,temp;

	for (int i=0; i < n-1; i++)
	{
	    pos_min = i;//set pos_min to the current index of array
		
		for (int j=i+1; j < n; j++)
		{

		if (arr[j] < arr[pos_min])
                   pos_min=j;
	//pos_min will keep track of the index that min is in, this is needed when a swap happens
		}
		
	//if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
            if (pos_min != i)
            {
                 temp = arr[i];
                 arr[i] = arr[pos_min];
                 arr[pos_min] = temp;
            }
	}
}


int main() {
    int x[] = {2, 5, 1, 3, 4};
    selectSort(x, 5);
    for(int i = 0; i < 5; i++) {
        cout << x[i] << " ";
    }
cout<< endl;


}