#include "iostream"
#include "doubleLinked.h"

using namespace std;
int main(){

    doubleLinked* l2 = new doubleLinked();
    l2->insertAtStart(1);
    l2->insertAtStart(2);
    l2->insertAtStart(3);
    l2->insertAtStart(4);
    l2->insertAtStart(5);
    l2->insertAtStart(6);
    l2->insertAtEnd(10);
    l2->print();
    cout<<" "<< endl;
    l2->Reverseprint();
    cout<<" "<< endl;
    */


    return 0;
}