#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};

void appendNode(Node*&, int);
void display(Node*);

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;

    appendNode(head1, 10);
    appendNode(head1, 20);
    appendNode(head1, 30);

    appendNode(head2, 40);
    appendNode(head2, 50);
    appendNode(head2, 60);

    display(head1);
    cout<<endl;
    display(head2);

    return 0;
}

void display(Node *tNode){
    //Node *tNode = head;
    while(tNode!= NULL){
        cout<<tNode->data<<" ";
        tNode = tNode->next;
    }


}

void appendNode(Node *&head, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if(head==NULL)
    {
        head = newNode;
    }
    else
    {
        Node *tNode= head;
        while(tNode->next!=NULL)
        {
            tNode=tNode->next;
        }
        tNode->next = newNode;
    }


}
