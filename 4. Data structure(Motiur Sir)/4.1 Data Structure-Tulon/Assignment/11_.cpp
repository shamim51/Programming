#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = NULL;

void appendNode(int);
void display();
void combineDuplicates();

int main()
{
    appendNode(3); //{3, 3, 2, 4, 4, 4, -1, -1, 4, 12, 12, 12, 12, 48, -5, -5}
    appendNode(3);
    appendNode(2);
    appendNode(4);
    appendNode(4);
    appendNode(4);
    appendNode(-1);
    appendNode(-1);
    appendNode(4);
    appendNode(12);
    appendNode(12);
    appendNode(12);
    appendNode(12);
    appendNode(48);
    appendNode(-5);
    appendNode(-5);

    display();

    combineDuplicates();
    cout<<"displaying afger combining: "<<endl;
    display();

    
    return 0;
}
void combineDuplicates(){
    if(head == NULL) return;
    else{
        Node *current = head;
        while(current->next != NULL){
            int sum = current->data;
            Node *current2 = current;
            while(current2->next != NULL && current2->data == current2->next->data){
            //    cout<<"i am here"<<endl;
                sum = sum + current2->data;
                current2 = current2->next;
            }
            // cout<<sum<<endl;
            current->data = sum;
            current->next = current2->next;
            if(current->next != NULL){
                current = current->next;
            }
            
        }
    }
}

void appendNode(int value){
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        Node *tNode = head;
        while(tNode->next != NULL){
            tNode = tNode->next;
        }
        tNode->next = newNode;
    }
}

void display(){
    if(head == NULL){
         cout<<"No Nodes there";
    }
    else{
        Node *tNode = head;
        while(tNode != NULL){
            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }
    cout<<endl;
}