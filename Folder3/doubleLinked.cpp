//
// Created by emre on 12/22/2021.
//

#include <iostream>
#include "doubleLinked.h"

doubleLinked::doubleLinked() {

}

void doubleLinked::insertAtStart(int value) {
    dNode *temp = new dNode();
    temp->data = value;
    if (head == 0) head = temp;
    else {
        temp->next = head;
        head->prev = temp;
        head = temp;

    }
}

void doubleLinked::insertAtEnd(int value) {

    dNode *temp1 = new dNode();
    temp1->data = value;
    if (head == 0) head = temp1;
    else {
        dNode *temp2 = new dNode();
        temp2 = head;

        while (temp2->next != 0) {
            temp2 = temp2->next;
        }

        temp2->next = temp1;
        temp1->prev = temp2;

    }
}

void doubleLinked::print() {
    if (head == 0)std::cout << "This list is empty !";
    else {
        dNode *temp1 = new dNode();
        temp1 = head;
        while (temp1 != 0) {
            std::cout << temp1->data << " ";
            temp1 = temp1->next;
        }

    }
}

void doubleLinked::Reverseprint() {
    if (head == 0)std::cout << "This list is empty !";
    else {
        dNode *temp2 = new dNode();
        temp2 = head;

        while (temp2->next != 0) {
            temp2 = temp2->next;
        }
        while (temp2 != 0) {
            std::cout << temp2->data << " ";
            temp2 = temp2->prev;
        }

    }
}


