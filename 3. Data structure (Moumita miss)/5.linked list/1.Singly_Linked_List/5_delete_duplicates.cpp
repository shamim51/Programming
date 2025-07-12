#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = NULL;

void appendNode(int);
void display();
void delete_duplicates();
int do_something(){
    while(head == NULL) return 0;
    head = head->next;
    return head->data * do_something();
}

int count(int x){
    if(head == NULL) return 0;
    else if(head ->next == NULL && head->data <x) return 1;
    else if(head->next == NULL && head->data >x) return 0;
    int counter = 0;
    Node *current = head;
    while (current->next != NULL)
    {
        Node *tNode = current->next;
        while(tNode != NULL){
            if(current->data + tNode->data < x){
                counter++;
            }
            tNode = tNode->next;
        }
        current = current->next;
    }
    return counter;
}
int main()
{
    appendNode(15);
    appendNode(4);
    appendNode(12);
    appendNode(6);
    appendNode(5);
    appendNode(3);

    display();
    
    cout<<count(15);
    
    return 0;
}

void delete_duplicates(){

    Node *currentNode = head;
    Node *tNode; 
    Node *pNode; //Node to be deleted;
    while(currentNode->next != NULL){
        tNode = currentNode;
        while(tNode->next != NULL){
            if(tNode->next->data == currentNode->data){
                pNode = tNode->next;
                tNode->next = pNode->next;
                delete pNode;
            }
            else{
            tNode = tNode->next;
            }
        }
        currentNode = currentNode->next;
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