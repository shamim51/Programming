#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    /* data */
};
Node *head = NULL;

void appendNode(int);
void delete_Node();
void display();


int main()
{
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);
    appendNode(50);
    appendNode(60);
    appendNode(70);
    appendNode(80);
    appendNode(90);
    appendNode(100);

    display();
    delete_Node();
    cout<<"display after delete "<<endl;
    display();

    return 0;
}
void delete_Node(){
    while (head!=NULL)
    {
        head = head->next;
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
        while (tNode->next!=NULL)
        {
            tNode = tNode->next;
        }
        tNode->next = newNode;
        
    }
}
void display(){
    if(head == NULL){
        cout<<"there is no Nodes there "<<endl;
    }
    else{
        Node *tNode = head;
        while (tNode!=NULL)
        {
            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
        
    }
}