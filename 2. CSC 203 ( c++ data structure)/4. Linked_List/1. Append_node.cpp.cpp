#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;
Node *tail = NULL;
void appendNode(int value){
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    /*
    else{
        Node *tNode = head;
        while(tNode->next != NULL){
            tNode = tNode->next;
        }
        tNode->next = newNode;

    }*/
    else{
        tail->next = newNode;
        tail = newNode;
    }
}
void dispaly(){
    if(head!=NULL){
        Node *tNode = head;
        // cout<<head<<endl;
        while(tNode!= NULL){

            //cout<<tNode->data<<" ";
            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }
cout<<endl;
// Node *head2 = (Node*)*&head;
// cout<<head2->data<<" yes";

}

int main()
{
    
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);
    // cout<<head<<endl;
    dispaly();


    return 0;
}
