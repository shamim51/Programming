#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;

void appendNode(int);
int nodeCount();
void alternet_Odd_and_Even();

void dispaly();

int main()
{
    appendNode(11);
    appendNode(20);
    appendNode(40);
    appendNode(55);
    appendNode(77);
    appendNode(80);
    //cout<<nodeCount();
    dispaly();
    cout<<endl;
    cout<<"after alternate"<<endl;
    dispaly();


    return 0;
}

void alternet_Odd_and_Even(){
    int nc, i , j, k;
    i = 0;
    j = 0;
    nc = nodeCount();
    int Odd[nc];
    int Even[nc];
    Node *tNode = head;
    while(tNode!=NULL){
        if(tNode->data%2==1){
            Odd[i]=tNode->data;
        }
        else{
            Even[j]=tNode->data;
        }
    }
    k = 1;
    i = 0;
    j = 0;
    tNode = head;
    while(tNode!=NULL){
        if(k%2==1){
            tNode->data=Odd[i];
            i = i + 1;
            k = k + 1;
        }
        else{
            tNode->data = Even[j];
            j = j + 1;
            k = k + 1;
        }
        tNode = tNode->next;
    }
}


int nodeCount(){
    int i=0;
    Node *tNode = head;
    while(tNode!=NULL){
        tNode = tNode->next;
        i = i + 1;
    }
    return i;
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
void dispaly(){
    if(head!=NULL){
        Node *tNode = head;
        while(tNode!= NULL){

            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }


}
