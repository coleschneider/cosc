#include "BinaryTree.h"


int main() {
    TreeNode *branch = new TreeNode(5);
    branch->left = new TreeNode(4);
    branch->left->left = new TreeNode(3);
    branch->right = new TreeNode(6);
    
    BinaryTree tree(branch);
    
    tree.print();
    
    return 0;
}