#include<iostream>

using namespace std;

struct ListNode{
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
        ListNode *current = head;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = newNode;
    }

}

void display(ListNode *head){
    if(head == NULL){
        return;
    }
    else{
        ListNode *current = head;
        while(current != NULL){
            cout<<current->data<<" ";
            current = current->next;
        }
    }
    cout<<endl;
}

void del2nd(ListNode *&n){
    if(n == NULL){
        return;
    }
    if(n->next == NULL){
        ListNode *temp = n;
        n = n->next;
        delete temp;
        return;
    }
    ListNode *current = n;
    ListNode *pNode;
    while(current->next != NULL){
       
        pNode = current->next;
        current->next = pNode->next;
        delete pNode;
        current = current->next;
        if(current == NULL){
            return;
        }
    }   

}




int main()
{
    ListNode *head = NULL;
    // appendNode(head, 10);
    // appendNode(head, 20);
    // appendNode(head, 30);
    // appendNode(head, 40);
    // appendNode(head, 50);
    // appendNode(head, 60);
    // appendNode(head, 70);
    // appendNode(head, 80);
    // appendNode(head, 90);

    display(head);

    del2nd(head);

    display(head);
    
    
    return 0;
}