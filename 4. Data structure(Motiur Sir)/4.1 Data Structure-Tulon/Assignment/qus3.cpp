#include<iostream>

using namespace std;
struct ListNode{
    int data;
    ListNode *next;
};
ListNode *head = NULL;

void addNode(int value){
    ListNode *newNode = new ListNode;
    newNode->data = value;
    newNode->next = nullptr;
    if(head == nullptr){
        head = newNode;
    }
    else{
        ListNode *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;   
    }
}

void display(){
    int counter = 0;
    ListNode *current = head;
    while(current!= nullptr){
        counter++;
        cout<<current->data<<" ";
        current = current->next;
        if(counter == 5) break;
    }
    cout<<endl;
}


void doSomething(ListNode *&n){
    ListNode *head = n;
    int counter = 0;
    int coutner_2 = 0;
    int counter_3 = 0;
    ListNode *current = head;

    ListNode *pNode;
    ListNode *PNode_next;

    ListNode *tNode;
    ListNode *tNode_pre;
    ListNode *tNode_next;

    

    ListNode *temp;
    
    while(current != nullptr){
        counter++;
        current = current->next;
    }
    
    if(counter%2 ==1){
        current = head;
        while(coutner_2 < counter/2){
            coutner_2++;
           
            counter_3 = 1;

            tNode = current;
            tNode_next = tNode->next;

            pNode = head;
            
            while(counter_3 < (counter-coutner_2)){
                counter_3++; 
                pNode = pNode->next;
                
            }
            PNode_next = pNode->next;
            // cout<<pNode->data<<endl;
            // cout<<pNode->next->data<<endl;

            temp = PNode_next;

            pNode->next = tNode;
            tNode->next = PNode_next->next;//problem 

            // cout<<"yes"<<endl;

            if(tNode == head){
                temp->next = tNode_next;
                head = temp;
                
            }
            else{
                tNode_pre->next = temp;
                temp->next = tNode_next;
            }
            tNode_pre = tNode;

            current = current->next;
        }
    }

}
int main()
{
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);
    addNode(60);
    addNode(70);
    addNode(80);
    addNode(90);

    display();
    doSomething(head);
    display();


    return 0;
}