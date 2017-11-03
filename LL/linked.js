function LinkedList() {
	this.head = null;
	this.length = 0;
}

LinkedList.prototype.add = function (val) {
	var node = {
		data: val,
		next: null
	}
	if(!this.head) {
		this.head = node;
		this.length++;
	} else {
		var currentNode = this.head;
		while (currentNode.next) {
			currentNode = currentNode.next;
		}
		this.length++;
		currentNode.next = node;
	}
}

var newList = new LinkedList()

newList.add(7);
newList.add(20);
newList.add(13);
console.log(newList)
console.log(newList.head)
console.log(newList.head.next)
console.log(newList.head.next.next)

LinkedList.prototype.remove = function(val) {
	var currentNode = this.head;
	if(currentNode.data == val) {
		this.head = currentNode.next;
	} else {
		var previousNode = currentNode;

		while (currentNode.next) {
			if (currentNode.data == val) {
				previousNode.next = currentNode.next;
				break;
			}
			previousNode = currentNode;
			currentNode = currentNode.next;
		} if (currentNode.data == val) {
			previousNode.next == null;
		}
	}
}

newList.remove(1)
console.log(newList)




