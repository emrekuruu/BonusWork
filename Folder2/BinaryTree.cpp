//
// Created by emre on 12/27/2021.
//


#include "BinaryTree.h"
#include "iostream"
#include "queue"

int BinaryTree::findHeight(BinaryNode *root) {
    if(root == 0) return -1;
    int leftSub = findHeight(root->left);
    int rightSub = findHeight(root->right);
    return ((std::max(leftSub,rightSub))+1);
}

BinaryTree::BinaryTree() {

}

BinaryNode *BinaryTree::insert(int value, BinaryNode *root) {
    BinaryNode* temp = new BinaryNode();
    temp->data= value;
    if (this->root == 0) this->root = temp;

    if (root == 0)root = temp;

    else if (findHeight(root->left) <= findHeight(root->right)) {
        root->left = insert(value, root->left);
    }

     else {
        root->right = insert(value, root->right);
    }

    return root;
}

void BinaryTree::printInLeverOrder(BinaryNode *root){

if(root == 0) return ;
std::queue<BinaryNode*> q1;
q1.push(root);

while(!(q1.empty())){
    std::cout<<q1.front()->data<<" ";
    if(q1.front()->left != 0) q1.push(q1.front()->left);
    if(q1.front()->right != 0) q1.push(q1.front()->right);
    q1.pop();
}

}
//DLR
void BinaryTree::printPreOrder(BinaryNode *root) {

if(root == 0) return;
std::cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);

}
//LDR
void BinaryTree::printInOrder(BinaryNode *root) {

if(root == 0) return;
    printInOrder(root->left);
    std::cout<< root->data<<" ";
    printInOrder(root->right);

}
//LRD
void BinaryTree::printPostOrder(BinaryNode *root) {

    if(root == 0) return;
    printPostOrder(root->left);
    printPostOrder(root->right);
    std::cout<< root->data<<" ";

}

