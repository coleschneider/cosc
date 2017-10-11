function sort(v, numItems) { //v is call by reference
   debugger
    for (var i = numItems - 1; i > 0; i--) {
        var maxIndex = 0;
        for (var j = 1; j <= i; j++) {
            maxIndex = v[j] > v[maxIndex]? j : maxIndex;
        }
        var temp = v[i];
        console.log(data);
        v[i] = v[maxIndex];
        v[maxIndex] = temp;
    }
}



var data = [40, 70, 20, 30, 60, 10];

sort(data, 6);
console.log(data);