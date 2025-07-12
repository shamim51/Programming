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

int countDuplicates (ListNode *head){
    if(head == NULL) return 0;
    int counter = 0;
    ListNode *current = head;
    while(current->next != NULL){
        if(current->data == current->next->data){
            counter++;
        }
        current = current->next;
    }
    return counter;
}

int main()
{
    ListNode *head = NULL;

    appendNode(head, 1);
    appendNode(head, 1);
    appendNode(head, 1);
    appendNode(head, 3);
    appendNode(head, 3);
    appendNode(head, 6);
    appendNode(head, 9);
    appendNode(head, 15);
    appendNode(head, 15);
    appendNode(head, 23);
    appendNode(head, 23);
    appendNode(head, 23);
    appendNode(head, 40);
    appendNode(head, 40);

    cout<<countDuplicates(head); //1, 1, 1, 3, 3, 6, 9, 15, 15, 23, 23, 23, 40, 40

    
    
    return 0;
}