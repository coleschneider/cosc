function merge (arr, left, mid, right) {
	var i, j, k;

	//number of elements in left side of the array
	var leftSide = mid - left + 1;
	//# of elements in right side
	var rightSide = right - mid;

	var leftArray = [leftSide];
	var rightArray = [rightSide];

	for (i = 0; i < leftSide; i++) {
		left[i] = arr[left + i];
	}
	for (j = 0; j <rightSide; j++) {
		right[i] = arr[mid + 1 + j];
	}
	i = 0;
	j = 0;
	k = left;

	while (i < leftSide && j < rightSide) {
		if (left[i] <= right[j]) {
			arr[k] = left[i];
			i++;
		} else {
			arr[k] = right[j];
			j++;
		}
		k++;
	}
	while (i < leftSide) {
		arr[k] = left[i];
		j++;
		k++;
	}
	while (i < leftSide) {
		arr[k] = left[i];
		j++;
		k++;
	}
}

function mergeSort(arr, left, right) {
	
	if (left < right) {

		var mid = Math.floor((left + right) / 2);

		//recursive call
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);

		merge(arr, left, mid, right);

	}
}

var data = [1, 3, 2, 5, 4];

mergeSort(data, 0, 5);

console.log(data[1]);

