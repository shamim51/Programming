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
 
            ;
 
 
 
        }
 
        node *x = new node; // a new node is created 
 
        x->value = v;
        current->next = x;
 
 
    }
 
}
 
void changeList(node*p){
 
    while(p!=nullptr){
       // cout<< p << endl; // seeing the address of each nodes present in the linked list 
 
       p->value = p->value + 1; // adding 1 with each old node value 
        p = p ->next ;// now head is moving forward
    }
}
 
void printList(node *n){
    while(n!=nullptr){
        cout<< n->value<<" ";
        n = n->next;
    }
    cout<<endl;
}
 
void removeValue1(node *&p , int v){
 
    node *current = p;
    while(current!=nullptr){
        cout<<current->value<<" ";// just checking whether the values in the whole linked list is present or not
        current = current->next;
    }
}
 
// this code works for everything.// removing and single digit from the linked list // 
//removing multiple digts from the linked list // removing 2 diff digits from linked list 
void removeValue(node *&p , int v){
 
    // if the linked list is empty , no point of removing anything, so get out immidiately
    if(p == nullptr){
        return;
    }
 
    while(p->value == v){
        node *s = p;
        p = p->next;
        delete s;
 
        if(p == nullptr){ // for example if my linked list is like 2 2 2 
                         //// my output will be a nullptr// if i dont add this line,code will crash
            return;
        }
    }
 
 
 
     node *current = p;
 
 
    while(current->next != nullptr){
 
        if(current->next->value == v){
 
            node *t = current->next;
 
            current-> next = current->next->next;
 
            delete t;
        }
        else{
            current = current -> next;
        }
 
 
        if(current == nullptr){
            break;
        }
    }
}
 
// adding a new value in the linked list // code works for everything// in both ends/in middle
void addValueByIndex(node *&p , int ind , int v){
 
    if(ind == 0){
        node *x = new node;
        x->value = v;
        x->next = p ;
        p = x;
    }
    else{
        node *current = p;
        for(int i = 0 ; i < ind - 1 ; i = i + 1){
            current = current->next;
        }
        node *x = new node;
        x->value = v;
        x->next = current->next;
        current->next = x;
    }
}
 
int main()
{
    node *n = nullptr;
 
 
    addValue(n,2);
    addValue(n,2);
    addValue(n,2);
    addValue(n,2);
 
       /* addValue(n,5);
        addValue(n,5);
        addValue(n,5);
        addValue(n,5);
         addValue(n,6);
          removeValue(n,2);
           removeValue(n,2);
         addValue(n,7);
         addValue(n,7);
         addValue(n,7);*/
         removeValue(n,2);
 
           printList(n);
 
        return 0;
}
 