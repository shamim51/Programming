#include<iostream>
using namespace std;

struct ListNode{
    int data;
    ListNode *next;
};
ListNode *L1 = NULL;
ListNode *L2 = NULL;

void appendNode(int, ListNode *&);
void display(ListNode *);
void addList(ListNode *&L2, ListNode *&L1){
    if(L1 == NULL){
        delete L1;
        return;
    } 
    ListNode *tail;
    ListNode *tNode;
    ListNode *current2 = L2;

    while(current2->next != NULL){
        tNode = current2->next;

        ListNode *current1 = L1;
        ListNode* head3 = NULL;

        while(current1 != NULL){
            appendNode(current1->data , head3);

            current1 = current1->next;
        }
        

        ListNode *current3 = head3;
        while(current3->next != NULL){
            current3 = current3->next;
        }
        
        tail = current3;
        current2->next = head3;
        tail->next = tNode;

        current2 = tNode;
    }
    delete L1;
}


int main()
{
    appendNode(1, L2);
    appendNode(2, L2);
    appendNode(3, L2);

    appendNode(5, L1);
    appendNode(7, L1);

    // display(L2);
    // display(L1);

    addList(L2, L1);

    display(L2);
    
    return 0;
}

void appendNode(int value, ListNode *&head){
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