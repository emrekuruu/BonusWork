#include <iostream>
#include "LinkedList.h"
#include "stack.h"
#include "stackLinkedListVersion.h"
#include "doubleLinked.h"
#include "Queue.h"
#include "QueueLinkedListVersion.h"
#include "BTSTree.h"
#include "BinaryTree.h"

using namespace std;

int main() {

//THİS İS THE TESTİNG PART OF ALL MY LİNKED LİST METHODS NOT İNCLUDİNG DOUBLELİNKED
/*
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
*/
//END OF MY LİNKED LİST METHODS


// START OF MY DOUBLELİNKED LİST METHODS
    /*
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

//END OF MY DOUBLELİNKED LİST METHODS



//START OF MY STACK METHODS İMPLEMENTED WİTH ARRAYS

/*
stack *s1 = new stack(5);
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

    if(!s1->isEmpty())cout<<"TEST 1 IS DONE "<<endl;
    cout<<s1->sizeOfArray<<endl;

*/

//END OF MY STACK METHODS IMPLEMENTED WİTH ARRAYS

     // START OF STACK METHODS IMPLEMENTED WİTH LİNKED LİSTS

    /*
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
    */

    //END OF MY STACK METHODS İMPLEMENTED WİTH LİNKED LİSTS

    // EXAMPLE REVERSİNG A LİNKED LİST WİTH A STACK
    /*
    LinkedList *list1 = new LinkedList();
    list1->fillList();
    stack *s1 = new stack(5);
    list1->print();
    cout<<" "<<endl;
    s1->reverse(list1);
    list1->print();
    cout<<" "<< endl;
    */

    // END OF EXAMPLE





    // START OF MY QUEUE METHODS İMPLEMENTED WİTH ARRAYS
    /*
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
    */


    //END OF MY QUEUE METHODS İMPLEMENTED WİTH ARRAYS


    // START OF MY QUEUE METHODS İMPLEMENTED WİTH LİNKED LİSTS
    /*
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
    */
    //END OF MY QUEUE METHODS İMPLEMENTED WİTH LİNKED LİSTS

    // START OF BİNARY SEARCH TREE METHPODS
    /*
    BTSTree* b1 = new BTSTree();
    b1->insert(100,b1->root);
    b1->insert(200,b1->root);
    b1->insert(10,b1->root);
    b1->insert(1,b1->root);
    b1->insert(113,b1->root);
    b1->insert(7,b1->root);
    b1->printInOrder(b1->root);
    cout<<" "<<endl;
    b1->Delete(b1->root,100);
    b1->printInOrder(b1->root);
    cout<<" "<< endl;
    if((b1->Search(7,b1->root))){
        cout<<"This number is in this list "<<endl;
    }
    cout<<b1->GetSuccessor(b1->root,113)->data<<" "<<endl;
    cout<<" "<< endl;

     */
    // END

    // START OF MY BINARY TREE METHODS
    /*
    BinaryTree* b2 = new BinaryTree();
    b2->insert(300,b2->root);
    b2->insert(100,b2->root);
    b2->insert(400,b2->root);
    b2->insert(50,b2->root);
    b2->insert(500,b2->root);
    b2->insert(270,b2->root);
    b2->printInLeverOrder(b2->root);
    cout<<" "<<endl;
    b2->printPreOrder(b2->root);
    cout<<" "<<endl;
    b2->printInOrder(b2->root);
    cout<<" "<<endl;
    b2->printPostOrder(b2->root);
    */


    //END

    return 0;
}
