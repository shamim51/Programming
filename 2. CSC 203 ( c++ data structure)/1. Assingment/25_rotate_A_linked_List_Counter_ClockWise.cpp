#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = NULL;

void appendNode(int);
void display();
void Rotate_Counter_ClockWise(int);

int main()
{
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);
    appendNode(50);
    appendNode(60);

    display();

    Rotate_Counter_ClockWise(4);

    display();
    
    
    return 0;
}

void Rotate_Counter_ClockWise(int position){
    int counter = 0;
    Node *tNode = head;
    Node *pNode;
    while(tNode->next != NULL){
        counter++;
        if(position == counter){
            pNode = tNode;
        }
        tNode = tNode->next;
    }
    tNode->next = head;
    head = pNode->next;
    pNode->next = NULL;
}

void appendNode(int value){
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        Node *tNode = head;
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
        Node *tNode = head;
        while(tNode != NULL){
            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }
    cout<<endl;
}