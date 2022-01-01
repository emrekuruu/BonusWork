#include "iostream"
#include "stack.h"
#include "LinkedList.h"

using namesace std;

int main(){

    LinkedList *list1 = new LinkedList();
    list1->fillList();
    stack *s1 = new stack(5);
    list1->print();
    cout<<" "<<endl;
    s1->reverse(list1);
    list1->print();
    cout<<" "<< endl;

    return 0;
}