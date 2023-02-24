#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void appendNode(Node *&, int);
void display(Node *);
void add_two_Number(Node *, Node *, Node*&);

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *head3 = NULL;
    appendNode(head1, 5);
    appendNode(head1, 6);
    appendNode(head1, 3);

    appendNode(head2, 8);
    appendNode(head2, 4);
    appendNode(head2, 2);

    display(head1);
    display(head2);

    add_two_Number(head1, head2, head3);

    display(head3);


    
    
    return 0;
}

void add_two_Number(Node *head1, Node *head2, Node *&head3){
    int sum = 0;
    int rev_sum = 0;
    int sum_of_two = 0;
    int r;
    Node *tNode = head1;
    while(tNode!=NULL){
        sum = (sum * 10) + tNode->data;
        tNode = tNode->next;
    }
    while(sum != 0){
        r = sum % 10;
        sum = sum/10;
        rev_sum = (rev_sum*10) + r;
    }
    //cout<<rev_sum<<endl;
    sum_of_two = sum_of_two + rev_sum;

    sum = 0;
    rev_sum = 0;
    tNode = head2;
    while(tNode!=NULL){
        sum = (sum * 10) + tNode->data;
        tNode = tNode->next;
    }
    while(sum != 0){
        r = sum % 10;
        sum = sum/10;
        rev_sum = (rev_sum*10) + r;
    }
    sum_of_two = sum_of_two + rev_sum;
    //cout<<sum_of_two<<endl;

    while(sum_of_two != 0){
        r = sum_of_two % 10;
        sum_of_two = sum_of_two /10;
        appendNode(head3, r);
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