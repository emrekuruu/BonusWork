//
// Created by emre on 12/21/2021.
//

#ifndef BONUSWORK_STACKLINKEDLISTVERSION_H
#define BONUSWORK_STACKLINKEDLISTVERSION_H
#include "LinkedList.h"
using namespace std;

class stackLinkedListVersion {
public:

    // constructor
    stackLinkedListVersion();
    Node* top = 0;

    // takes a value and pushes it to the list
    void push(int x);

    // returns the top value in the stack
    int Top();

    // prints the stack
    void print();

    // returns true if the stack is empty
    bool isEmpty();

    // pops the top value of the stack
    void pop();
};


#endif //BONUSWORK_STACKLINKEDLISTVERSION_H
