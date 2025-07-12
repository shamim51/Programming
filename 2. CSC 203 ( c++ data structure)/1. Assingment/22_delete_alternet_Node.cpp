#include<iostream>

using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
void appendNode(int value){
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        Node *tNode = head;
        while (tNode->next != NULL)
        {
            tNode = tNode->next;
        }
        tNode->next = newNode;
        
    }
}

void dispaly(){
    if(head == NULL){
        cout<<"there are No nodes"<<endl;
    }
    else{
        Node *tNode = head;
        while(tNode!=NULL){
            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }
    cout<<endl;
}

void delete_alternate(){
    Node *tNode = head;
    Node *pNode;
    while (tNode != NULL)
    {
        pNode = tNode->next;
        if(pNode == NULL){
            break;
        }
        tNode->next = pNode->next;
        tNode = tNode->next;
        delete pNode;
    }
    
}


int main()
{
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);
    appendNode(50);
    dispaly();

    delete_alternate();
    dispaly();
    
    return 0;
}