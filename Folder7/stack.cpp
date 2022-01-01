//
// Created by emre on 12/21/2021.
//

#include <iostream>
#include "stack.h"

stack::stack(int value) {
sizeOfArray = value;
arry = new int[value];
}

void stack::pop() {
arry[top]=0;
top--;
}

int stack::Top() {
return arry[top];
}

bool stack::isEmpty() {
    if(top==-1)return true;
    return false;
}

void stack::push(int x) {
    if(top < sizeOfArray-1){
        top++;
        arry[top]=x;
}
else{
    int *temp = new int[2*sizeOfArray];
    for(int i = 0; i < sizeOfArray; i++){
        temp[i]=arry[i];
    }
    top++;
    delete arry;
    arry = temp;
    arry[top]=x;
    sizeOfArray = sizeOfArray*2;
}
}

void stack::print() {
for(int i = 0; i <= top; i++){
    std::cout<<arry[i]<<" ";
}
}

void stack::reverse(LinkedList* l1) {
Node* temp = l1->head;


while(temp != 0){
    push(temp->data);
    temp = temp->next;
}

while(!isEmpty()){

    temp = l1->head;
    while(temp != 0){
        temp->data = Top();
        pop();
        temp = temp->next;
    }

}

}


