#include "BinaryTree.h"

using namespace std;


int main() {
    TreeNode *node = new TreeNode(42);
    node->left = new TreeNode(59);
    node->right = new TreeNode(27);
    node->right->right= new TreeNode(86);
    
    BinaryTree tree(node);
    tree.print();

    return 0;
}