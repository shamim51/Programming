#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void appendNode(int, Node *&);;
void display(Node *);
void add_1(Node *head1, Node *&head2);
void makelist(Node *&, int);

int main()
{
    Node *head1= NULL;
    Node *head2 = NULL;

    appendNode(1, head1);
    appendNode(9, head1);
    appendNode(9 ,head1 );
    appendNode(9 ,head1 );

    display(head1);
    add_1(head1, head2);
    display(head2);
    
    
    return 0;
}

void add_1(Node *head1, Node *&head2){
    int sum = 0;
    int rev_sum = 0;
    int sum_of_two = 0;
    int r;
    Node *tNode = head1;
    while(tNode!=NULL){
        sum = (sum * 10) + tNode->data;
        tNode = tNode->next;
    }
    sum = sum + 1;
    // cout<<sum;
    makelist(head2, sum);
}

void makelist(Node *&head, int sum){
    int r;
    if(sum == 0){
        return;
    }
    r = sum%10;
    sum = sum/10;
    makelist(head, sum);
    appendNode(r, head);
}

void appendNode(int value, Node *&head){
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