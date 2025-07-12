#include<iostream>

using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
};
void appendNode(ListNode *&head, int value){
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

void stutter(ListNode *&head){
if(head != NULL){
    ListNode *current = head;
    while(current!=NULL){
        ListNode *newNode = new ListNode;
        newNode->data = current->data;
        newNode->next =current->next;
        current->next = newNode;
        current = current->next->next;
    }  
}
}

void display(ListNode *head){
    ListNode *tNode = head;
    while(tNode != NULL ){
        cout<<tNode->data<<" ";
        tNode = tNode->next;
    }
    cout<<endl;

}

int main()
{
    ListNode *head = NULL;

    appendNode(head, 10);
    appendNode(head, 20);
    appendNode(head, 30);
    appendNode(head, 40);
    appendNode(head, 80);
    appendNode(head, 60);
    appendNode(head, 70);

    display(head);

    stutter(head);

    display(head);

    // cout<<stutter(head);

    
    
    return 0;
}