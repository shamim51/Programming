#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next = NULL;
    Node *pre = NULL;

};
Node *head = NULL;
Node *tail = NULL;

void appendNode(int);
void append_After_A_Particular_value(int, int);
void display();
void displayRev();

int main()
{
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);
    display();
    cout<<endl;
    append_After_A_Particular_value(30,100);
    display();
    cout<<endl;
    displayRev();
    return 0;
}
void append_After_A_Particular_value(int p_value, int n_value){
    Node *newNode = new Node;
    newNode->data = n_value;
    if(head!=NULL){
        Node *tNode = head;
        while(tNode->data != p_value){
            tNode = tNode->next;
        }
        tNode->next->pre = newNode;
        //tNode->next->pre->next = tNode->next;
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
void displayRev(){
    if(tail == NULL){
        cout<<"No Nodes there";
    }
    else{
        Node *tNode = tail;
        while(tNode!=NULL){
            cout<<tNode->data<<" ";
            tNode = tNode->pre;
        }
    }

}
