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

    // constructor
    QueueLinkedListVersion();

    // takes a value and enqueues it
    void Enqueue(int value);

    // dequeues the last value
    void Dequeue();

    // returns true if the queue is empty
    bool isEmpty();

    //prints the queue
    void print();

    // returns the front index
    int Front();

};


#endif //BONUSWORK_QUEUELINKEDLISTVERSION_H
