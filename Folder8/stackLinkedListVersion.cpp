//
// Created by emre on 12/21/2021.
//

#include <iostream>
#include "stackLinkedListVersion.h"


stackLinkedListVersion::stackLinkedListVersion() {

}
void stackLinkedListVersion::push(int x) {
Node* temp = new Node();
temp->data=x;
temp->next = top;
top = temp;
}

int stackLinkedListVersion::Top() {
    return top->data;
}

bool stackLinkedListVersion::isEmpty() {
    if(top==0)return true;
    return false;
}

void stackLinkedListVersion::pop() {
    if (top != 0) {
        Node *temp = top;
        top = top->next;
        delete temp;
    }
    else{
        std::cout<<"error";
    }
}


void stackLinkedListVersion::print() {
Node* temp = top;
while(temp!=0){
    std::cout<<temp->data<<" ";
    temp=temp->next;
}

}


