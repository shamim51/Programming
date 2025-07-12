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

ListNode*& consume(ListNode *&head1){
    int index = 1;
    ListNode *head2 = head1;
    head2->next = NULL;
    ListNode *current = head1->next;
    while(current != NULL){
        if(index % 2 == 0){
            if(head2 == NULL){
                head2 = current;
                head2->next = NULL;
            }
            else{
                ListNode *tNode = head2;
                while(tNode->next != NULL){
                    tNode = tNode->next;
                }
                tNode->next = current;
            }
        }
        else{
            current = current->next;
            index ++;
        
    }
}

void display(ListNode *head){
    if(head == NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        ListNode *tNode = head;
        while(tNode != NULL ){
            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }
    cout<<endl;

}


int main()
{
    ListNode *head1 = NULL;
    ListNode *head2 = NULL;

    appendNode(head1, 1);
    appendNode(head1, 1);
    appendNode(head1, 1);
    appendNode(head1, 3);
    appendNode(head1, 3);
    appendNode(head1, 6);
    // appendNode(head2, 9);
    // appendNode(head2, 15);
    // appendNode(head2, 15);
    // appendNode(head2, 23);
    // appendNode(head2, 23);
    // appendNode(head2, 23);
    // appendNode(head2, 40);
    // appendNode(head2, 40);

    display(head1);

    consume(head1);

    display(head1);
   

    
    
    return 0;
}