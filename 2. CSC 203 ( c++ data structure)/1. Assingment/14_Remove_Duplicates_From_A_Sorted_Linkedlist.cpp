#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void appendNode(int);
void dispaly();
void sort();
void remove_Duplicates();

int main()
{
    appendNode(10);
    appendNode(10);
    appendNode(10);
    appendNode(10);
    appendNode(10);
    appendNode(10);
    appendNode(10);
    appendNode(10);
    appendNode(10);

    dispaly();

    return 0;
}

void sort(){
    //int max = 0;
    Node *tNode = head;
    Node *pNode;
    Node *cNode;

}

void appendNode(int value)
{
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

void dispaly(){
    Node *tNode = head;
    while (tNode!=NULL)
    {
        cout<<tNode->data;
        tNode = tNode->next;
    }
    
}
void sort();
void remove_Duplicates();