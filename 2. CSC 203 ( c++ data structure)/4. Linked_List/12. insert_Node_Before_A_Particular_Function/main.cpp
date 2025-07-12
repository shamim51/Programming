#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;

void appendNode(int);
void insert_Node_Before_Particular_Positon(int, int);
void display();

int main()
{
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);
    appendNode(50);

    insert_Node_Before_Particular_Positon(100,1);
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
void insert_Node_Before_Particular_Positon(int value, int pos){

    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
    }
    else{
        Node *pNode = NULL;
        Node *tNode = head;
        int count = 1;
        while(tNode!=NULL && count!=pos){
            pNode = tNode;
            tNode = tNode->next;
            count = count + 1;
        }
        if(count == 1){
            newNode->next = head;
            head = newNode;
        }
        else{
            pNode->next = newNode;
            newNode->next = tNode;
        }


    }
}
