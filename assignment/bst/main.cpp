#include "Tree.h"

/*
FOR FINAL:
order of insertions: 50, 20, 80, 30, 60, 70, 10, 40, 55

                    50
                    /\
                   /  \
                20      80
               /\       /
              /  \     /
            10    30    60
                   \    \  \
                    \    \   \70
                    40    55
    Ways to traverse a binary search tree:
        1. Preorder Traversal - prints the root first, then left child, then right child
        2. Postorder Traversal - Left child, right child, then root
        3. Inorder Traversal - Left child, root, then right

Internal node - any node that isnt the leaf
Preorder:
    50, 20, 10, 30, 40, 80, 60, 55, 70 
Postorder: 
    10, 40, 30, 20, 55, 70, 60, 80, 50
Inorder:
    10, 20, 30, 50, 55, 60, 70, 80
*/


int main() {
    Tree *t = new Tree();
    t->insert(60);
    t->insert(30);
    t->insert(90);
    t->insert(40);
    t->insert(80);
    t->inOrder();
    delete t;
    
    return 0;
}