//
// Created by emre on 12/23/2021.
//

#ifndef BONUSWORK_BTSTREE_H
#define BONUSWORK_BTSTREE_H

struct TreeNode{
    int data;
    TreeNode* left = 0;
    TreeNode* right = 0;
};


class BTSTree {


public:
    TreeNode* root = 0;
TreeNode* insert(int value, TreeNode* root);
bool Search(int value, TreeNode* root);
int Min();
int  MinRecursion(TreeNode* root);
int Max();
int MaxRecursion(TreeNode* root);
    BTSTree();
TreeNode* Delete(TreeNode* root,int value);
    void printInOrder(TreeNode* root);
TreeNode* Find(TreeNode* root, int value);
TreeNode* GetSuccessor(TreeNode* root, int value);

};


#endif //BONUSWORK_BTSTREE_H
