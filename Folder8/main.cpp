#include "iostream"
#include "stackLinkedListVersion.h"

using namespace std;
int main(){

    stackLinkedListVersion *s1 = new stackLinkedListVersion();
    s1->push(1);
    s1->push(2);
    s1->push(3);
    s1->push(4);
    s1->push(5);
    s1->push(6);
    s1->push(7);
    s1->push(8);
    s1->push(9);
    s1->push(10);
    s1->push(11);
    s1->push(12);
    s1->push(13);
    s1->push(14);
    s1->push(15);
    s1->pop();
    s1->print();





    return 0;
}