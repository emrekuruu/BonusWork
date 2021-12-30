//
// Created by emre on 12/27/2021.
//

#ifndef BONUSWORK_BINARYTREE_H
#define BONUSWORK_BINARYTREE_H


struct TreeNode{
    int data;
    TreeNode* left = 0;
    TreeNode* right = 0;
};

class BinaryTree {
public:


    TreeNode* root = 0;
    TreeNode* insert(int value, TreeNode* root);
    BinaryTree();
    int findHeight(TreeNode* root);
    void printInLeverOrder(TreeNode* root);
    void printPreOrder(TreeNode* root);
    void printInOrder(TreeNode* root);
    void printPostOrder(TreeNode* root);


};


#endif //BONUSWORK_BINARYTREE_H
