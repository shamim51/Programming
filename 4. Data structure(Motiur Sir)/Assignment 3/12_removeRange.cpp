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

bool removeRange(ListNode *&head, int min, int max){
    if(min > max){
        throw 99;
    }
    if(head == NULL) return false;
    ListNode *pNode;
    bool yesOrNo = false;
    
    while(head->data >= min && head->data <= max){
        pNode = head;
        head = head->next;
        if(head == NULL) return true;
        delete pNode;
        yesOrNo = true;
    }

    

    ListNode *tNode = head;

    while(tNode->next != NULL){
        
        
        if(tNode->next->data >= min && tNode->next->data <= max){
            pNode = tNode->next;
            tNode->next = pNode->next;
            delete pNode;

            yesOrNo = true;
        }
        else{
            tNode = tNode->next;
        }
        
    }
    return yesOrNo;
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

    appendNode(head, 4);// 4 2 1 10 15 8 7 4 20 36 -3 40 5 
    appendNode(head, 2);
    appendNode(head, 1);
    appendNode(head, 10);
    appendNode(head, 15);
    appendNode(head, 8);
    appendNode(head, 7);
    appendNode(head, 4);
    // appendNode(head, 20);
    // appendNode(head, 36);
    // appendNode(head, -3);
    // appendNode(head, 40);
    // appendNode(head, 5);

    display(head);

    cout<<removeRange(head, 40, 30)<<endl;

    display(head);

    // cout<<stutter(head);

    
    
    return 0;
}