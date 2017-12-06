//efficiency of hashing is O(1)
//hash sets can have a collision. set.add(54) ould
//collide if 24 is in the slot; must probe
//seperate chaining = solves collisions by storing a list at each index


HashNode::HashNode(int val) {
    _val = val;
    _next = nullptr;
}

HashNode::~HashNode() {
    //TO-DO
}

HashSet::HashSet() {
    elements = new HashNode[10]();
    capacity = 10;
    mySize = 0;
    
}

HashSet::~HashSet() {

}
int HashSet::HashCode(int val) const {
    return abs(val) % capacity;
}
void HashSet::add(int val) {
    if (!contains(val)) {
    int buckets = HashCode(val);
    HashNode *newNode = new HashNode(val);
    newNode->_next = elements[bucket];
    elements[bucket] = newNode;
    mySize++;
    }
}