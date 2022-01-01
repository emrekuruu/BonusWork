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

    // a pointer to the root of the binary tree
    TreeNode *root = 0;

    // takes a value and insert it according to bts conditions
    TreeNode *insert(int value, TreeNode *root);

// takes a value and return true if the tree contains this value
    bool Search(int value, TreeNode *root);

// returns the min value in a bts value
    int Min();

// returns the min with a recursion
    int MinRecursion(TreeNode *root);

// returns the max value
    int Max();

// return the max with a recursive method
    int MaxRecursion(TreeNode *root);

// constructor
    BTSTree();

    // takes a value and deletes the value if it is in the list
    TreeNode *Delete(TreeNode *root, int value);

// prints the tree in order
    void printInOrder(TreeNode *root);

    // returns the pointer of a root if it is in the tree
    TreeNode *Find(TreeNode *root, int value);

    TreeNode* GetSuccessor(TreeNode *root, int value);
};

#endif //BONUSWORK_BTSTREE_H
