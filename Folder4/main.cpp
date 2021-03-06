#include "iostream"
#include "LinkedList.h"

using namespace std;
int main(){

    LinkedList *list1 = new LinkedList();
    list1->fillList();
    list1->print();
    cout<<" "<<endl;
    list1->insertAtNthPosition(3,1244);
    list1->print();
    cout<<" "<<endl;
    list1->insertAtEnd(30000);
    list1->print();
    cout<<" "<<endl;
    list1->deleteAtNthPosition(4);
    list1->print();
    cout<<" "<<endl;
    list1->reverseList();
    cout<<" "<<endl;
    list1->printForwardWithRecursion(list1->head);
    cout<<" "<<endl;
    list1->printReverseWithRecursion(list1->head);
    cout<<"last one"<<endl;
    list1->reverseWithRecursion(list1->head);
    list1->print();



    return 0;
}