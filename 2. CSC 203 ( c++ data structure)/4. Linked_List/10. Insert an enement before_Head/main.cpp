#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = NULL;

void insert_Node_Before_Head(int);
void display();

int main()
{
    /*
    insert_Node_Before_Head(50);
    insert_Node_Before_Head(40);
    insert_Node_Before_Head(30);
    insert_Node_Before_Head(20);
    insert_Node_Before_Head(10);*/

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

void insert_Node_Before_Head(int value){
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL){
        head = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }



}
