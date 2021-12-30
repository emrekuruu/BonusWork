//
// Created by emre on 12/21/2021.
//

#ifndef BONUSWORK_STACKLINKEDLISTVERSION_H
#define BONUSWORK_STACKLINKEDLISTVERSION_H
#include "LinkedList.h"
using namespace std;

class stackLinkedListVersion {
public:
    stackLinkedListVersion();
    Node* top = 0;
    void push(int x);
    int Top();
    void print();
    bool isEmpty();
    void pop();
};


#endif //BONUSWORK_STACKLINKEDLISTVERSION_H
