//
// Created by emre on 12/27/2021.
//

#ifndef BONUSWORK_BINARYTREE_H
#define BONUSWORK_BINARYTREE_H


struct BinaryNode{
    int data;
    BinaryNode* left = 0;
    BinaryNode* right = 0;
};

class BinaryTree {
public:

    // a pointer to the root of the binary tree
    BinaryNode* root = 0;

    // takes a value and inserts it according to my conditions
    BinaryNode* insert(int value, BinaryNode* root);

    // constructor
    BinaryTree();

    // returns the height of the tree
    int findHeight(BinaryNode* root);

    // print the tree in level order
    void printInLeverOrder(BinaryNode* root);

    // prints the tree in pre order
    void printPreOrder(BinaryNode* root);

    // prints the tree in in order
    void printInOrder(BinaryNode* root);

    // prints the tree postorder
    void printPostOrder(BinaryNode* root);


};


#endif //BONUSWORK_BINARYTREE_H
