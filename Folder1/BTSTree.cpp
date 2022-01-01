//
// Created by emre on 12/23/2021.
//

#include <iostream>
#include "BTSTree.h"


BTSTree::BTSTree() {

}

TreeNode* BTSTree::insert(int value, TreeNode* root) {
    TreeNode* temp = new TreeNode();
    temp->data= value;
    if (this->root == 0) this->root = temp;

    if (root == 0) root = temp;

    else if (value <= root->data) {
        root->left = insert(value, root->left);
    }

    else {
        root->right = insert(value, root->right);
    }

return root;
}

bool BTSTree::Search(int value, TreeNode* root) {
    if(root == 0){
        return false;
    }

    if(root->data == value){

        return true;
    }
    if(root -> data > value){

        return Search(value,root->left);
    }
    if(root -> data < value) {

        return Search(value,root->right);
    }
}

int BTSTree::Min() {
    TreeNode* temp = new TreeNode();
    temp = root;
    while(temp->left!= 0 ){
        temp = temp->left;
    }
    return temp->data;
}

int BTSTree::Max() {
    TreeNode* temp = new TreeNode();
    temp = root;
    while(temp->right!= 0 ){
        temp = temp->right;
    }
    return temp->data;
}

int BTSTree::MinRecursion(TreeNode *root) {
    if(root == 0){
        std::cout<<"List is empty";
        return -1;
    }

    if(root->left == 0){
        return root->data;
    }
    return MinRecursion(root->left);
}

int BTSTree::MaxRecursion(TreeNode *root) {
    if(root == 0) {
        std::cout<<"List is empty";
        return -1;
    }

    if(root->right == 0){
        return root->data;
    }
    return MaxRecursion(root->right);
}

TreeNode *BTSTree::Delete(TreeNode *root,int value) {
    if(root == 0) return root;
    else if(value < root->data) root->left = Delete(root->left,value);
    else if(value > root->data) root->right = Delete(root->right, value);
    else{
        if(root->left == 0 && root->right == 0){
            delete root;
            root = 0;
        }
        else if(root->left == 0){
            TreeNode* temp = root;
            root = root->right;
            delete temp;

        }
        else if(root->right == 0){
            TreeNode* temp = root;
            root = root->left;
            delete temp;

        }
        else{

            TreeNode* temp = new TreeNode();
            temp->data = MinRecursion(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }
    }
    return root;
}

void BTSTree::printInOrder(TreeNode *root) {
    if(root == 0) return;
    printInOrder(root->left);
    std::cout<< root->data<<" ";
    printInOrder(root->right);

}

TreeNode *BTSTree::Find(TreeNode *root, int value) {
    if(root == 0){
        std::cout<<"EMPTY LIST"<<std::endl;
    }

    if(root->data == value){
        return root;
    }
    if(root -> data > value){

        return Find(root->left,value);
    }
    if(root -> data < value) {
        return Find(root->right,value);
    }
    return 0;
}



TreeNode *BTSTree::GetSuccessor(TreeNode *root, int value) {
    TreeNode* temp = Find(root,value);
    if(temp == 0) return 0;
    else if(temp->right != 0){
        return Find(temp->right, MinRecursion(root->right));
    }
    else{
        TreeNode* successor ;
        TreeNode* ancestor = root;
        while(ancestor != temp){
            if(temp->data < ancestor->data){
                successor = ancestor;
                ancestor = ancestor->left;
            }
            else{
                ancestor = ancestor->right;
            }
        }
        return successor;
    }
}


