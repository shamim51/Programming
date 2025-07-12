#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
void appendNode(Node *&, int);
void display(Node *);
void sort(Node *&);

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    appendNode(head1, 1);
    appendNode(head1, 1);
    appendNode(head1, 2);
    appendNode(head1, 0);
    appendNode(head1, 2);
    appendNode(head1, 0);
    appendNode(head1, 1);

    display(head1);
    sort(head1);
    display(head1);
    
    return 0;
}

void sort(Node *&head1){
    int min;
    int temp;
    Node *tNode = head1;
    while (tNode->next != NULL)
    {
        min = tNode->data;
        Node *pNode = tNode->next;
        while(pNode != NULL){
            if(min > pNode->data){
                temp = pNode->data;
                pNode->data = tNode->data;
                tNode->data = temp;
            }
            pNode = pNode->next;
        }
        tNode = tNode->next;
    }
    
}

void appendNode(Node *&head, int value){
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

void display(Node *head){
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