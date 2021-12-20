//
// Created by emre on 12/20/2021.
//

#ifndef BONUSWORK_LINKEDLIST_H
#define BONUSWORK_LINKEDLIST_H

struct Node{
    int data;
    Node* next;
};


class LinkedList {

public:
    Node* head;
    LinkedList();
    void insertAtBeginning(int value);
    void print();
    void fillList();
    void insertAtNthPosition(int position,int value);
    void insertAtEnd(int value);
    void deleteAtNthPosition(int position);
    void reverseList();
    void printForwardWithRecursion(Node* head);
    void printReverseWithRecursion(Node* head);
    void reverseWithRecursion(Node *head);

};


#endif //BONUSWORK_LINKEDLIST_H
