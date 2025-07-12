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
    while(n!=nullptr){
        cout<< n->value<<" ";
        n = n->next;
    }
    cout<<endl;
}

void Rotate(node *&p){
    if(p == nullptr || p->next == nullptr){
        return;
    }
    else{
        node *tNode = p;
        p = p->next;

        node *current = p;
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = tNode;
        tNode->next = nullptr;
    }
}

int main()
{
    node *n = nullptr;
 
 
    addValue(n,1);
    addValue(n,2);
    addValue(n,2);
    addValue(n,2);
    addValue(n, 3);
    addValue(n, 5);

    printList(n);

    Rotate(n);

    printList(n);
 
    return 0;
}
 