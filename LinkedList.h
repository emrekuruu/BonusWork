
// Created by emre on 12/20/2021.


#ifndef BONUSWORK_LINKEDLIST_H
#define BONUSWORK_LINKEDLIST_H

struct Node{
    int data;
    Node* next;
};


class LinkedList {

public:

    // a reference to the node at the start of this list
    Node* head;

    // constructor
    LinkedList();

    // takes a value, creates a node and inserts that node at the beginning of this linked list
    void insertAtBeginning(int value);

    // prints the contents of the list
    void print();

    // just a while loop that takes input and inserts them in the list(it wont stop unless the input is -1)
    void fillList();

    // takes a value, traverses the list until it finds the node that is previous to the one at this position and inserts our new node as its next value
    void insertAtNthPosition(int position,int value);

    // takes a value and inserts a node at the end of the linked list
    void insertAtEnd(int value);

    //
    void deleteAtNthPosition(int position);

    // reverses a list
    void reverseList();

    // prints the contents of this list using a recursive method
    void printForwardWithRecursion(Node* head);

    // prints the contents of this list from end to start using a recursive method
    void printReverseWithRecursion(Node* head);

    // reverses a list using a recursive method
    void reverseWithRecursion(Node *head);

};


#endif //BONUSWORK_LINKEDLIST_H
