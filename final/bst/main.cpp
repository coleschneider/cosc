#include "Tree.h"



int main(){
    Tree *bst = new Tree();
    bst->insert(8);
    bst->insert(4); // left node
    bst->insert(11); // right node


    cout << "In order: " << endl;
    bst->inOrder();
    cout << endl;

    return 0;
}