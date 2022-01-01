#include "iostream"
#include "Queue.h"

using namespace std;
int main(){




    Queue* q1 = new Queue(10);
    q1->Enqueue(1);
    q1->Enqueue(2);
    q1->Enqueue(3);
    q1->Enqueue(4);
    q1->Enqueue(5);
    q1->Enqueue(6);
    q1->Enqueue(7);
    q1->Enqueue(8);
    q1->Enqueue(9);
    q1->Enqueue(10);
    //INPUT IS LARGER THAN QUEUE TEST q1->Enqueue(11);
    q1->Dequeue();
    q1->print();
    cout<<" "<< endl;
    cout<<" "<< endl;





    return 0;
}