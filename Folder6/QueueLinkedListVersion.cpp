//
// Created by emre on 12/22/2021.
//

#include <iostream>
#include "QueueLinkedListVersion.h"

QueueLinkedListVersion::QueueLinkedListVersion() {
    front = rear;
}

void QueueLinkedListVersion::Enqueue(int value) {
    Node* temp = new Node();
    temp->data=value;

if(front == 0 && rear == 0){
    rear = temp;
    front = temp;
    return;
}
    rear->next=temp;
    rear = temp;

}

void QueueLinkedListVersion::Dequeue() {
    if (rear == front) front = rear = 0;
    if (front == 0) return;
    else {
        front = front->next;
    }
}

bool QueueLinkedListVersion::isEmpty() {
    if(rear == front) return true;
    else{
        return false;
    }

}

int QueueLinkedListVersion::Front() {
    return front->data;
}

void QueueLinkedListVersion::print() {
    Node* temp = front;
    while(temp != 0) {
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
}

