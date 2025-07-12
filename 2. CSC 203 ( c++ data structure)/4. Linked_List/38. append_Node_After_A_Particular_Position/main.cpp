#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *pre;
};

Node *head = NULL;
Node *tail = NULL;

void appendNode(int value);
void append_After_Particular_Position(int value, int position);
void display();

int main()
{
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(50);
    append_After_Particular_Position(15,1);
    append_After_Particular_Position(40, 3);
    //append_After_Particular_Position(40, 4);
    display();

    return 0;
}
void append_After_Particular_Position(int value, int position){
    Node *newNode = new Node;
    newNode->pre = NULL;
    newNode->next = NULL;
    newNode->data = value;
    int count = 1;
    Node *tNode = head;
    while(count!=position){
        tNode = tNode->next;
        count = count + 1;
    }
    if(tNode->next==NULL){
        tNode->next = newNode;
        newNode->pre = tNode;
    }
    else{
        tNode->next->pre = newNode;
        newNode->next = tNode->next;
        tNode->next = newNode;
        newNode->pre = tNode;
    }
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
