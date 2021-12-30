//
// Created by emre on 12/22/2021.
//

#ifndef BONUSWORK_DOUBLELINKED_H
#define BONUSWORK_DOUBLELINKED_H

struct dNode{
    int data;
    dNode* prev = 0;
    dNode* next = 0;
};
class doubleLinked {
public:

    // a reference to the node at the start of this list
    dNode* head = 0;

    // takes a value and inserts a node to the start
    void insertAtStart(int value);

    // takes a value and inserts a node to the end
    void insertAtEnd(int value);

    // prints the contents of this list
    void print();

    // prints the contents of this list from end to start
    void Reverseprint();

    //constructor
    doubleLinked();

};


#endif //BONUSWORK_DOUBLELINKED_H
