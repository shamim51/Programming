#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;

void appendNode(int);
void dispaly_Odd();

int main()
{
    for(int i = 1; i <= 100; i = i + 1){
        appendNode(i);
    }
    /*
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);*/

    dispaly_Odd();

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
void dispaly_Odd(){
    if(head!=NULL){
        Node *tNode = head;
        while(tNode!= NULL){
            if(tNode->data%2==1){
                cout<<tNode->data<<" ";
            }
            //cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }


}
