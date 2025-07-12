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


void braid(ListNode *&head){
    if(head != NULL){
        ListNode *head2 = NULL;
        ListNode *tNode = head;

        while(tNode!=NULL){
            ListNode *newNode = new ListNode;
            newNode->data = tNode->data;
            newNode->next = NULL;
            if(head2 == NULL){
                head2 = newNode;
            }
            else{
                ListNode *current = head2;
                while(current->next != NULL){
                    current = current->next;
                }
                current->next = newNode;
            }
            tNode = tNode->next;
        }


        int counter = 0;
        tNode = head;
    
        while(tNode!=NULL){
            tNode = tNode->next;
            counter++;
        }
        
        tNode = head;

        ListNode *pNode;
        while(tNode!=NULL){
            int j = 1;
            pNode = head2;
            while(j != counter){
            
                pNode = pNode->next;
                j++;
            }
            ListNode *newNode = new ListNode;
            newNode->data = pNode->data;
            newNode->next = NULL;

            newNode->next = tNode->next;
            tNode->next = newNode;

            tNode = tNode->next->next;
            counter --;
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

    braid(head);


    display(head);

    // cout<<stutter(head);

    
    
    return 0;
}