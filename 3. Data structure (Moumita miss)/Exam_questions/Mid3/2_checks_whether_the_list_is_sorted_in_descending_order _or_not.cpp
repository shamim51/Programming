#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = NULL;

void appendNode(int);
void display();
bool check_descendingOrNOt(){
    Node *currentNode = head;
    Node*tNode;
    while(currentNode->next != NULL){
        tNode = currentNode->next;
        if(tNode->data > currentNode->data){
            return false;
        }
    }
    return true;
}

int main()
{
    appendNode(45);
    appendNode(23);
    appendNode(15);
    appendNode(6);
    appendNode(3);

    cout<<check_descendingOrNOt();
    
    return 0;
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