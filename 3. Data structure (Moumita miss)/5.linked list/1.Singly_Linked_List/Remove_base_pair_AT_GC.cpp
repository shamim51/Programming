#include<iostream>
using namespace std;

struct ListNode {
   char data ;         // value stored in each node
   ListNode* next;   // pointer to next node in list (nullptr if none)
};


void insertFirst(ListNode * &n, char val){
    ListNode * pt = new ListNode;
    pt->data = val;
    pt ->next = n;
    n = pt;
}

void deleteAtAny(ListNode * &n, int index){
    ListNode * newP=nullptr;
    int i=1;
    for(ListNode * newnode = n; newnode != NULL; newnode = newnode->next){
        if(i==index){
            break;
        }
        newP = newnode;
        i++;
    }

    newP->next = newP->next->next;
}
void traverse(ListNode * &n){
    for(ListNode * poinTer = n; poinTer!=NULL; poinTer = poinTer->next){
        cout<<poinTer->data<<" ";
    }
    cout<<endl;
}

void removeBasePairs(ListNode *&head){
    
    while(head->next->next != nullptr){
        if((head->data == 'A' && head->next->data =='T')||(head->data == 'G' && head->next->data == 'C')){
            head == head->next->next;
        }
    }

    ListNode *current = head;
    ListNode *tNode;
    ListNode *pNode;
    while(current->next->next != nullptr){
        if((current->next->data == 'A' && current->next->next->data == 'T') || (current->next->data == 'G' && current->next->next->data =='C')){
            tNode = current;
            pNode = current->next->next->next;
            tNode->next = pNode;
        }
        else{
            current = current->next;
        }
        if(current == nullptr || current->next == nullptr){
            break;
        }
    }
}

int main(){
    ListNode * n = nullptr;

    







    insertFirst(n, 'G');
    insertFirst(n, 'C');
    insertFirst(n, 'T');
    insertFirst(n, 'A');
    insertFirst(n, 'A');
    insertFirst(n, 'C');
    insertFirst(n, 'G');
    insertFirst(n, 'T');
    insertFirst(n, 'A');
    insertFirst(n, 'G');
    insertFirst(n, 'T');
    insertFirst(n, 'A');
    insertFirst(n, 'T');
    insertFirst(n, 'C');
    insertFirst(n, 'G');
    insertFirst(n, 'C');
    insertFirst(n, 'T');




    traverse(n);
    // deleteAtAny(n, 'C');

}