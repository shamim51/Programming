#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = NULL;

void appendNode(int);
void display();

int How_many_grater_then(Node *currentNode, int value, int &counter){
    if(currentNode == NULL){
        return counter;
    }
    if(currentNode->data > 5){
        counter = counter +1;
    }

   return How_many_grater_then(currentNode->next, 5, counter);

}

int main()
{
    appendNode(10);
    appendNode(5);
    appendNode(6);
    appendNode(7);
    appendNode(4);
    appendNode(6);

    display();
    int counter = 0;

    cout<<How_many_grater_then(head, 5, counter);
    
    
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