//
// Created by emre on 12/20/2021.
//

#include <iostream>
#include "LinkedList.h"
using namespace std;


void LinkedList::insertAtBeginning(int value) {

Node* temp = new Node();
temp->data=value;
temp->next=head;
head = temp;

}

void LinkedList::print() {
    Node *temp = new Node();
    temp = head;
    if (temp != 0) {
        std::cout << (temp->data) << " ";

        while (temp->next != 0) {
            std::cout << (temp->next->data) << " ";
            temp = temp->next;
        }

    }

    else{
        cout<<"Error empty list"<<endl;
}}

LinkedList::LinkedList() {
this->head=0;
}

void LinkedList::fillList() {
int input = 0;
while(input != -1){
    cout<<"Enter numbers to your linked list : "<<endl;
    cin>>input;
    if(input!=-1) insertAtBeginning(input);
}

}

void LinkedList::insertAtNthPosition(int position,int value) {
    if(position==1) insertAtBeginning(value);
Node* temp = new Node();
Node* temp2 = new Node();
temp->data=value;
temp2=head;

for(int i = 0; i < position-2; i++){
    temp2=temp2->next;
}
temp->next=temp2->next;
temp2->next=temp;

}

void LinkedList::insertAtEnd(int value) {
Node* temp = new Node();
temp->data=value;
Node* temp2 = new Node();
temp2 = head;
while(temp2->next!=0){
    temp2=temp2->next;
}
temp2->next=temp;
temp->next=0;
}

void LinkedList::deleteAtNthPosition(int position) {



    Node* temp1 = new Node();
    Node* temp2 = new Node();
    temp2=head;

    for(int i = 0; i < position-2; i++){
        temp2=temp2->next;
    }
    temp1 = temp2->next;
    temp2->next=temp1->next;
    delete temp1;

}

void LinkedList::reverseList() {
    Node *temp = new Node();
    Node *prev = new Node;
    Node* after = new Node;
    temp = head;
    prev = 0;
    while (temp != 0) {
        after = temp->next;
        temp->next = prev;
        prev = temp;
        temp = after;
    }
    head = prev;
    print();
}

void LinkedList::printForwardWithRecursion(Node *head) {
cout<<head->data<<" ";
if(head->next!=0) printForwardWithRecursion(head->next);
}

void LinkedList::printReverseWithRecursion(Node *head) {
    if(head != 0) {
        printReverseWithRecursion(head->next);
        cout << head->data << " ";
    }
}

void LinkedList::reverseWithRecursion(Node *head) {
if(head->next==0){
    this->head=head;
    return;
}
    reverseWithRecursion(head->next);
    Node* temp = head->next;
    temp->next=head;
    head->next=0;
}

