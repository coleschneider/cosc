function selectionSort(array, numItems) {
	debugger
	var min;
	var temp;
	for (var i = 0; i < numItems - 1; i++) {
		min = i;
		for (var j = i + 1; j < numItems; j++) {
			//If the array at index j is less than the current min then min == j's postion
			if(array[j] < array[min]) {
				min = j;
			}
		}
		//If min does not equal i anymore that means we need to swap
		if(array[min] != array[i]) {
			temp = array[i];
			array[i] = array[min];
			
			array[min] = temp;

		}
	}
}

var data = [2, 5, 1, 3, 4];

console.log(selectionSort(data, 5));