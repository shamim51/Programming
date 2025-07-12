#include<iostream>
using namespace std;

struct ListNode{
    int data;
    ListNode *next;
};
// Node *head = NULL;

void appendNode(ListNode*&, int);
void display(ListNode*);
void addN(ListNode *&n, int x){
    if(n == NULL){
        return;
    }
    ListNode *current = n;
    ListNode*current_next;
    while(current->next != NULL){
        current_next = current->next;

        ListNode *newNode = new ListNode;
        newNode->data = x;
        newNode->next = current->next;

        current->next = newNode;

        current = current_next;


    }
}

int main()
{
    ListNode *head = NULL;
    appendNode(head, 21);
    appendNode(head, 41);
    appendNode(head, 34);
    appendNode(head, 23);
    appendNode(head, 39);
    appendNode(head, 63);

    display(head);

    
    addN(head, 5);

    display(head);
    
    return 0;
}

void appendNode(ListNode*& head, int value){
    ListNode *newNode = new ListNode;
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        ListNode *tNode = head;
        while(tNode->next != NULL){
            tNode = tNode->next;
        }
        tNode->next = newNode;
    }
}

void display(ListNode *head){
    if(head == NULL){
        cout<<"No Nodes there";
    }
    else{
        ListNode *tNode = head;
        while(tNode != NULL){
            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }
    cout<<endl;
}