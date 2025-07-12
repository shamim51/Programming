#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void appendNode(Node *&, int);
void display(Node *&);
void intersection(Node *&, Node *&, Node *&);

int main(){
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *head3 = NULL;
    appendNode(head1, 1);
    appendNode(head1, 2);
    appendNode(head1, 3);
    appendNode(head1, 4);
    appendNode(head1, 5);

    appendNode(head2, 2);
    appendNode(head2, 4);
    appendNode(head2, 5);

    cout<<"displaying list 1: "<<endl;
    display(head1);

    cout<<"displaying list 2: "<<endl;
    display(head2);

    intersection(head1, head2, head3);

    cout<<"dispalying after intersection: "<<endl;
    display(head3);

    return 0;
}

void intersection(Node *&head1, Node *&head2, Node *&head3){
    Node *tNode = head1;
    Node *pNode = head2;
    //Node *&nNode = head3;
    while (tNode != NULL)
    {

        if(tNode->data == pNode->data){
            appendNode(head3, tNode->data);
            tNode = tNode->next;
            pNode = pNode->next;
        }
        else{
            tNode = tNode->next;
        }
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

void display(Node *& head){
    if(head == NULL){
        cout<<"there is No nodes there !"<<endl;
    }
    else{
        Node *tNode = head;
        while (tNode != NULL)
        {
            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
        cout<<endl;
        
    }
}