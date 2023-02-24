#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void appendNode(Node *&, int);
void display(Node *&);
void segregate_Even_And_Odd(Node *&, Node *&);

int main(){
    Node *head1 = NULL;
    Node *head2 = NULL;

    //appendNode(head1, 17);
    //appendNode(head1, 15);
    appendNode(head1, 8);
    appendNode(head1, 12);
    appendNode(head1, 10);
    appendNode(head1, 5);
    appendNode(head1, 4);
    appendNode(head1, 1);
    appendNode(head1, 7);
    appendNode(head1, 6);

    cout<<"displaying before segregate: "<<endl;
    display(head1);

    segregate_Even_And_Odd(head1, head2);

    cout<<"displaying after segregate: "<<endl;
    display(head2);

    return 0;
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
void display(Node *&head){
    if(head == NULL){
        cout<<"No Nodes there! "<<endl;
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
void segregate_Even_And_Odd(Node *&head1, Node *&head2){
    Node *tNode = head1;
    while (tNode != NULL)
    {
        if (tNode->data % 2 == 0 )
        {
            appendNode(head2, tNode->data);
            
        }
        tNode = tNode->next;
    }
    tNode = head1;
    while (tNode != NULL)
    {
        if (tNode->data % 2 == 1 )
        {
            appendNode(head2, tNode->data);
            
        }
        tNode = tNode->next;
    }

}