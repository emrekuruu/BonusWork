

#include "iostream"
#include "BinaryTree.h"

int main() {
    BinaryTree *b2 = new BinaryTree();
    b2->insert(300, b2->root);
    b2->insert(100, b2->root);
    b2->insert(400, b2->root);
    b2->insert(50, b2->root);
    b2->insert(500, b2->root);
    b2->insert(270, b2->root);
    b2->printInLeverOrder(b2->root);
    cout << " " << endl;
    b2->printPreOrder(b2->root);
    cout << " " << endl;
    b2->printInOrder(b2->root);
    cout << " " << endl;
    b2->printPostOrder(b2->root);
    return 0;
}
