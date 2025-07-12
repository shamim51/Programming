#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

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
    Node *tNode = head;
    while(tNode!=NULL){
        cout<<tNode->data<<" ";
        tNode = tNode->next;
    }
    cout<<endl;
}

bool is_identical(Node *&head1, Node *&head2){
    Node *tNode = head1;
    Node *pNode = head2;
    while(tNode != NULL){
        if(pNode == NULL || tNode->data != pNode->data){
            return false;
        }
        tNode = tNode->next;
        pNode = pNode->next;
    }
    return true;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;

    appendNode(head1, 10);
    appendNode(head1, 20);
    appendNode(head1, 30);
    appendNode(head1, 40);
    appendNode(head1, 50);
    appendNode(head1, 60);

    display(head1);

    appendNode(head2, 10);
    appendNode(head2, 20);
    appendNode(head2, 30);
    appendNode(head2, 40);
    appendNode(head2, 50);


    display(head2);
    cout<<is_identical(head1, head2);

    
    return 0;
}