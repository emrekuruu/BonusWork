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
    Queue(int size);
    void Enqueue(int value);
    void Dequeue();
    bool isEmpty();
    void print();
    int Front();


};


#endif //BONUSWORK_QUEUE_H
