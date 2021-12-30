//
// Created by emre on 12/22/2021.
//

#ifndef BONUSWORK_QUEUELINKEDLISTVERSION_H
#define BONUSWORK_QUEUELINKEDLISTVERSION_H


#include "LinkedList.h"

class QueueLinkedListVersion {
public:
    LinkedList* list;
    Node* front;
    Node* rear;
    QueueLinkedListVersion();
    void Enqueue(int value);
    void Dequeue();
    bool isEmpty();
    void print();
    int Front();

};


#endif //BONUSWORK_QUEUELINKEDLISTVERSION_H
