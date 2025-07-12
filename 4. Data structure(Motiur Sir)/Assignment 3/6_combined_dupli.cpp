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

void combineDuplicates (ListNode *&head){
    if(head == NULL) return;
    else{
        ListNode *current = head;
        while(current->next != NULL){
            int sum ;
            ListNode *tNode = current;
            sum = current->data;
            while (tNode->data == tNode->next->data)
            {
                sum =sum + tNode->next->data;
                tNode = tNode->next;
                if(tNode->next == NULL){
                    current->data = sum;
                    current->next = tNode->next;
                }
                else if(tNode->data != tNode->next->data){
                    current->data = sum;
                    current->next = tNode->next;
                }

            }
            if(current->next != NULL){
                current = current->next;
            }

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

    appendNode(head, 3);  //3, 3, 2, 4, 4, 4, -1, -1, 4, 12, 12, 12, 12, 48, -5, -5
    appendNode(head, 3);
    appendNode(head, 2);
    appendNode(head, 4);
    appendNode(head, 4);
    appendNode(head, 4);
    appendNode(head, -1);
    appendNode(head, -1);
    // appendNode(head, 4);
    // appendNode(head, 12);
    // appendNode(head, 12);
    // appendNode(head, 12);
    // appendNode(head, 12);
    // appendNode(head, 48);
    // appendNode(head, -5);
    // appendNode(head, -5);

    display(head);

    combineDuplicates(head);

    display(head);

    // cout<<stutter(head);



    return 0;
}
