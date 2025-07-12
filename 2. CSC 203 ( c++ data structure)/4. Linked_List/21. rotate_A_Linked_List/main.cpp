#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;

void Rotate_Node(int);

void appendNode(int);
void insert_Node_After_Particular_Positon(int, int);
void display();

int main()
{
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);
    appendNode(50);
    appendNode(60);

    Rotate_Node(4);

    display();

    return 0;
}
void display(){
    Node *tNode = head;
    if(head == NULL){
        cout<<"no Node there";
    }
    else{
        while(tNode!= NULL){
            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }

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
void Rotate_Node(int pos){
    Node *pNode = NULL;
    Node *tNode2 = NULL;
    Node *tNode = head;
    int count = 0;
    while(tNode!=NULL && count!=pos){
        pNode = tNode;
        tNode = tNode->next;

        count = count + 1;
    }
    pNode->next=NULL;
    tNode2 = tNode->next;
    tNode2->next = head;
    head = tNode;

}
