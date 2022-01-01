#include "iostream"
#include "QueueLinkedListVersion.h"
using namespace std;
int main(){



    QueueLinkedListVersion* q2 = new QueueLinkedListVersion();
    q2->Enqueue(1);
    q2->Enqueue(2);
    q2->Enqueue(3);
    q2->Enqueue(4);
    q2->Enqueue(5);
    q2->Enqueue(6);
    q2->Enqueue(7);
    q2->Enqueue(8);
    q2->Enqueue(9);
    q2->Enqueue(10);
    q2->print();
    cout<<" "<<endl;
    q2->Dequeue();
    q2->print();
    cout<<" "<< endl;
    cout<<" "<< endl;



    return 0;
}