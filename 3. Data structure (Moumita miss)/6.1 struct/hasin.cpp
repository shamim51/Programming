#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = NULL;

void appendNode(int);
void display();
void deleteNode(int);

int main()
{
    appendNode(10);
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(10);
    appendNode(40);
    appendNode(10);
    appendNode(10);

    display();

    deleteNode(10);

    display();
    
    return 0;
}

void deleteNode(int value){
    Node *tNode;
    while(head->data == value){
        tNode = head;
        head = head->next;
        delete tNode;
    }
    Node *currentNode = head;
    while(currentNode->next!= NULL){
        if(currentNode->next->data == value){
            tNode = currentNode->next;
            currentNode->next = tNode->next;
            delete tNode;
        }
        else{
            currentNode = currentNode->next;
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