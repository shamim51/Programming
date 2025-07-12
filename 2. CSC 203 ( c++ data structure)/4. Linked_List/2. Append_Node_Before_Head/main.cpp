#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;
void Appned_Node_Before_Head(int);
void display();

int main()
{
    Appned_Node_Before_Head(20);
    Appned_Node_Before_Head(10);
    display();
    return 0;
}

void Appned_Node_Before_Head(int value){
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }


}
void display(){
    if(head!=NULL){
        Node *tNode = head;
        while(tNode!= NULL){

            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }


}
