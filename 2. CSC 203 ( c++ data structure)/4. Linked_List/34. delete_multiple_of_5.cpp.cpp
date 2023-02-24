#include <iostream>
#include <cmath>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;

void appendNode(int);
int nodeCount();
void delete_Mutiples_Of_5();
void display();

int main()
{
    appendNode(11);
    appendNode(35);
    appendNode(30);
    appendNode(40);
    appendNode(35);
    appendNode(20);
    appendNode(11);
    appendNode(11);
    display();

    cout<<endl;

    delete_Mutiples_Of_5();
    cout<<endl;
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
void delete_Mutiples_Of_5(){
    Node *pNode = NULL;
    Node *tNode = head;
    while(tNode!=NULL){
        if((tNode->data%5) == 0){
            //cout<<endl<<tNode->data<<" is divisible by 5"<<endl;
            pNode->next = tNode->next;
            delete tNode;
            tNode = pNode->next;

        }
        else{
            pNode = tNode;
            tNode = tNode->next;
        }
    }
}
