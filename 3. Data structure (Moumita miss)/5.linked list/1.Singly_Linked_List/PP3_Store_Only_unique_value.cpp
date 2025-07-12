#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = NULL;

bool search_The_value(int);
void appendNode_Unique(int);
void display();

int main()
{
    appendNode_Unique(10);
    appendNode_Unique(10);
    appendNode_Unique(30);
    appendNode_Unique(40);
    appendNode_Unique(30);
    appendNode_Unique(50);
    appendNode_Unique(30);
    appendNode_Unique(80);
    appendNode_Unique(80);

    display();
    
    
    return 0;
}

bool search_The_value(int value){
    if(head == NULL){
        return false;
    }
    else{
        Node *tNode = head;
        while(tNode != NULL){
            if(tNode->data == value){
                return true;
            }
            tNode = tNode->next;
        }
    }
    return false;
}

void appendNode_Unique(int value){
    if(search_The_value(value) == false){
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