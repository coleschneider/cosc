//hashtabe constructor
function HashTable(size){
	this.buckets = Array(size); // set size of hash
	this.numBuckets = this.buckets.length //keep track of number of buckets in the table
}
//table with 30 buckets
let table = new HashTable(30);

//constructor for hash node
function HashNode(key, value, next){
	this.key = key;
	this.value = value;
	this.next = next;
}



//actual hashing function

//takes in key and returns index or buckets value for that key
HashTable.prototype.hash = function(key) {
	var total = 0;
	for (var i=0; i < key.length; i++) {
		//return ASCII for each letter
		total +=key.charCodeAt(i);
	}
}


//checking for collisions same hash for a key
HashTable.prototype.insert = function(key, value) {
//find hashed index value
	var index = this.hash(key);
	//figure out where to put the index
	if(!this.buckets[index]){
		this.buckets[index] = new HashNode(key, value);
	} else if(this.buckets[index].key === key) {
		this.bucket[index].value = value;
	} else {
		var currentNode = this.buckets[index];
		while(currentNode.next) {
			//check for collision
			if (currentNode.next.key = key) {
				currentNode.next.value = value;
				return;
			}
			currentNode - currentNode.next;
		}
		currentNode.next = new HashNode(key, value);
	}
}


HashTable.prototype.get = function(key) {
	var index = this.hash(key);
	if (!this.buckets[index]) {
		return null;
	}
	var currentNode = this.buckets[index];
	while(currentNode){
		if(currentNode.key === key) {
			return currentNode.value;
		} else {
			currentNode = currentNode.next;
		}	
	}
	return null;
}

HashTable.prototype.retrieveAll = function() {
	var allNodes = [];
	for (var i = 0; i < this.numBuckets; i++){
		var currentNode = this.buckets[i];
		while(currentNode){
			currentNode = currentNode.next;
		}
	}
	return allNodes;
}

var deas = function (string){
	for (var i = 0; i < string.length; i++){
		console.log(string[i])
	}
}






table.insert(5)
table.insert(6)


console.log(table)
console.log(table)



//search through hashtable and get 