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

bool isSorted(ListNode *head){
    if(head == NULL){
        return true;
    }
    else if(head->next == NULL){
        return true;
    }
    else{
        ListNode *current = head;
        if(current->data < current->next->data && current->data == current->next->data){
            while(current->next != NULL){
                if(current->data > current->next->data){
                    return false;
                }
                current = current->next;
            }
        }
        else{
            return false;
        }

    }

    return true;
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

    cout<<isSorted(head);

    
    
    return 0;
}