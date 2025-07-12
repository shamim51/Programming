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

int min(node* p){
    int min;

    
    /*
    if(p == nullptr){
        try
        {
            if (p == nullptr)
            {
                throw string("exception ! error");
            }
        }
        catch (string e)
        {
            cout << e << endl;
        }
        return 0;
    }
    else{
        node* current = p;
        min = current->value;
        while (current != nullptr)
        {
            
            if(current->value < min){
                min = current->value;
            }
            current = current->next;
        }
    }
    */



    if(p == nullptr){
        throw 22;
    }
    else{
        node* current = p;
        min = current->value;
        while (current != nullptr)
        {
            
            if(current->value < min){
                min = current->value;
            }
            current = current->next;
        }
        
    }
    return min;
}
int main()
{
    node *n = nullptr;
 
 
    // addValue(n,1);
    // addValue(n,2);
    // addValue(n,2);
    // addValue(n,2);
    // addValue(n, 3);
    // addValue(n, 5);

    // printList(n);

    cout<<min(n);
 
    return 0;
}
 