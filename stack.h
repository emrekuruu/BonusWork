//
// Created by emre on 12/21/2021.
//

#ifndef BONUSWORK_STACK_H
#define BONUSWORK_STACK_H

#include "LinkedList.h"

using namespace std;

class stack {
public:

    // constructor
    stack(int value);

    // just so i can keep tracking the size of the array
    int sizeOfArray;

    // our array
    int *arry;

    // the index of our top element
    int top = -1;

    // pops the element at the top
    void pop();

    // returns the element at the top
    int Top();

    // returns true is our stack is empty
    bool isEmpty();

    // takes a value and pushes it to the stack
    void push(int x);

    // prints the contents of the stack
    void print();

    // reverses of a linked list using our stack
    void reverse(LinkedList* l1);

};


#endif //BONUSWORK_STACK_H
