#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;

void appendNode(int);
int nodeCount();
void delete_Particular_Positon(int);
void display();

int main()
{
    appendNode(50);
    appendNode(40);
    appendNode(30);
    appendNode(20);
    appendNode(10);

    delete_Particular_Positon(2);
    display();
    return 0;
}
int nodeCount(){
    Node *tNode = head;
    if(head == NULL){
        return 0;
    }
    else{
        int count;
        while(tNode!=NULL){
            tNode = tNode->next;
            count = count + 1;
        }
        return count;
    }

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
void delete_Particular_Positon(int pos){

    if(nodeCount()>=pos){
        Node *pNode = NULL;
        Node *tNode = head;
        int count = 1;
        while(count!=pos){
            pNode = tNode;
            tNode = tNode->next;
            count = count + 1;
        }
        pNode->next = tNode->next;
        delete tNode;
    }
}
