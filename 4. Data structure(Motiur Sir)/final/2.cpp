#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
node *head = NULL;

void appendNode(int);
void display();
void removeNDuplicates(node *&a, int x , int n){
    int occr = 0;
    node *tnode;
    while(a->data == x && n != occr){
        tnode = a;
        a = a->next;
        delete tnode;
        occr++;
    }
    node *currentnode = a;
    while (currentnode->next != NULL && occr != n)
    {
       if(currentnode->next->data == x){
           tnode = currentnode->next;
           currentnode->next = tnode->next;
           occr++;
       }
       else{
           currentnode = currentnode->next;
       }
       
    }
    
 }

int main()
{
    appendNode(1);   //1 -> 2 -> 1 -> 5 -> 1 -> 4 -> 1 -> 5-> 6 -> 7 -> 1
    appendNode(2);
    appendNode(1);
    appendNode(5);
    appendNode(1);
    appendNode(4);
    appendNode(1);
    appendNode(5);
    appendNode(6);
    appendNode(7);
    appendNode(1);

    display();

    removeNDuplicates(head, 1, 3);

    display();



    
    return 0;
}

void appendNode(int value){
    node *newNode = new node;
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        node *tNode = head;
        while(tNode->next != NULL){
            tNode = tNode->next;
        }
        tNode->next = newNode;
    }
}

void display(){
    if(head == NULL){
         cout<<"No Nodes there";
    }
    else{
        node *tNode = head;
        while(tNode != NULL){
            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }
    cout<<endl;
}