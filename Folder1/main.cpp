#include "iostream";
#include "BTSTree.h";
using namespace std;

int main() {
    BTSTree *b1 = new BTSTree();
    b1->insert(100, b1->root);
    b1->insert(200, b1->root);
    b1->insert(10, b1->root);
    b1->insert(1, b1->root);
    b1->insert(113, b1->root);
    b1->insert(7, b1->root);
    b1->printInOrder(b1->root);
    cout << " " << endl;
    b1->Delete(b1->root, 100);
    b1->printInOrder(b1->root);
    cout << " " << endl;
    if ((b1->Search(7, b1->root))) {
        cout << "This number is in this list " << endl;
    }
    cout << b1->GetSuccessor(b1->root, 113)->data << " " << endl;
    cout << " " << endl;
    
    return 0;
}
