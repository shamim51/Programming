#include <iostream>
 
using namespace std;
 
struct node{
    int value = 0;
    node *next = nullptr;
};

void addValue(node*&p , int v){
    if(p == nullptr){
        p = new node;
        p->value = v;
    }
    else{
        node *current = p;
        while(current->next!=nullptr){
           current = current->next; // moving the current forward
        }
        node *x = new node; // a new node is created 
        x->value = v;
        current->next = x;
    }
}

void printList(node *n){
    if(n==NULL) return;
    while(n->next!=nullptr){
        cout<< n->value<<" -> ";
        n = n->next;
    }
    cout<<n->value;
    cout<<endl;
}

void switchEvens(node *&head1, node *&head2){
    if(head1 == nullptr || head2 == nullptr) return;
    else{
        node *tNode;
        node *pNode;
        if(head1->value % 2 == 0 && head2->value % 2 == 0){

            tNode = head2;
            pNode = head1->next;

            head1->next = head2->next;
            head2 = head1;

            tNode->next = pNode;
            head1 = tNode; 
        }
        node *pNode_next;
        node *current = head1;
        node *current2 = head2;
        while(current->next != nullptr && current2->next != nullptr){
            if(current->next->value % 2 == 0 && current2->next->value % 2 == 0){
                tNode = current->next;
                pNode = current2->next;

                pNode_next = pNode->next;

                current->next = pNode; //switching will start from here
                pNode->next = tNode->next;

                current2->next = tNode;
                tNode->next = pNode_next;
            }
            current = current->next;
            current2 = current2->next;
        }
    }
}


int main()
{
    node *front1 = nullptr;
    node *front2 = nullptr;
 
 
    addValue(front1, 12);
    addValue(front1, 14);
    addValue(front1, 13);
    addValue(front1, 17);
    addValue(front1, 18);
    addValue(front1, 14);
    addValue(front1, 16);
    addValue(front1, 12);
    addValue(front1, 22);
    addValue(front1, 10);

    addValue(front2, 66);
    addValue(front2, 55);
    addValue(front2, 16);
    addValue(front2, 43);
    addValue(front2, 22);
    addValue(front2, 90);
    addValue(front2, 39);
    addValue(front2, 44);
    // addValue(front2, 44);
    // addValue(front2, 44);


    printList(front1);
    printList(front2);

    switchEvens(front1, front2);

    printList(front1);
    printList(front2);
 
    return 0;
}
 