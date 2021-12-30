//
// Created by emre on 12/22/2021.
//

#include <iostream>
#include "Queue.h"

Queue::Queue(int size) {
this->arraySize = size;
arry = new int[arraySize];
}

void Queue::Enqueue(int value) {

if( (rear+1)% arraySize == front) std::cout<<"Queue is FULL !"<<std::endl;

else if(isEmpty()){
  front = 0;
  rear = 0;
}

else{
rear = (rear+1)%arraySize;
}
    arry[rear]=value;
}

bool Queue::isEmpty() {
    if(front == -1 && rear == -1)return true;
    else{
        return false;
    }
}

void Queue::Dequeue() {
    if(isEmpty()) std::cout<<"This list is empty"<<std::endl;
    else if(front == rear){
        front = -1  ;
        rear = -1;
    }
    else{
           front++;
    }
}

void Queue::print() {
    int temp = front;
 while(temp != rear+1){
     std::cout<<arry[temp]<<" ";
     temp++;
 }
}

int Queue::Front() {
    return arry[front];
}
