#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void insertvalue(int value){
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        Node *currentNode = head;
        while (currentNode->next != NULL)
        {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
        

    }

}
void print(){
    if(head == NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        Node *currentNode = head;
        while(currentNode!= NULL){
            cout<<currentNode->data<<" ";
            currentNode = currentNode->next;
            
        }
    }
}


void find(int value){
    if(head == NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        Node *currentNode = head;
        while(currentNode!= NULL){
            if(currentNode->data == value){
                cout<<"found"<<endl;
                break;
            }
            //cout<<currentNode->data<<" ";
            currentNode = currentNode->next;
            
        }
        
    }
}







int main()
{
    insertvalue(10);
    insertvalue(20);
    insertvalue(30);
    insertvalue(40);
    insertvalue(50);

    print();

    
    return 0;
}