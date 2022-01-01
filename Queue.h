//
// Created by emre on 12/22/2021.
//

#ifndef BONUSWORK_QUEUE_H
#define BONUSWORK_QUEUE_H


class Queue {
public:

    int* arry;
    int arraySize;
    int front = -1;
    int rear = -1;

    // constructor
    Queue(int size);

    // takes a value and enqueues it
    void Enqueue(int value);

    // dequeues the last value
    void Dequeue();

    // returns true if the list is empty
    bool isEmpty();

    // prints the queue
    void print();

    //returns the front index
    int Front();


};


#endif //BONUSWORK_QUEUE_H
