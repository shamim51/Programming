#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;

void append_Node(int);
void display();

int main()
{
    append_Node(10);
    append_Node(20);
    append_Node(30);
    append_Node(40);
    append_Node(50);
    append_Node(60);
    display();
    return 0;
}


void append_Node(int value){
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        Node *tNode = head;
        while(tNode->next!=NULL){
            tNode = tNode->next;
        }
        tNode->next = newNode;
    }


}


void display(){
    if(head!=NULL){
        Node *tNode = head;
        while(tNode!= NULL){

            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }


}

/*void display(){
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

}*/
