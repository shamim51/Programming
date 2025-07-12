#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next = NULL;
    Node *pre = NULL;

};
Node *head = NULL;
Node *tail = NULL;

void appendNode(int);
void display();
void displayRev();

int main()
{
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);
    display();
    cout<<endl;
    displayRev();
    return 0;
}

void appendNode(int value){
    Node *newNode = new Node;
    newNode->data = value;
    if(head == NULL){
        head = tail = newNode;
    }
    else{
        tail->next = newNode;
        newNode->pre = tail;
        newNode->next = NULL;
        tail = newNode;
    }



}
void display(){
    if(head == NULL){
        cout<<"NO Nodes there";
    }
    else{
        Node *tNode = head;
        while(tNode!=NULL){
            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }

    }
}
void displayRev(){
    if(tail == NULL){
        cout<<"No Nodes there";
    }
    else{
        Node *tNode = tail;
        while(tNode!=NULL){
            cout<<tNode->data<<" ";
            tNode = tNode->pre;
        }
    }

}
