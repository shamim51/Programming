#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = NULL;

bool isempty();
void search(int);
void appendNode(int);
void display();

int main()
{
    appendNode(10);
    appendNode(10);
    appendNode(10);
    appendNode(10);
    appendNode(70);
    appendNode(10);
    appendNode(10);
    appendNode(10);

    search(10);
    
    
    return 0;
}

bool isempty(){
    if(head == NULL){
        return true;
    }
    return false;
}

void search(int value){
    if(isempty()){
        cout<<"lsit is empty\n";
    }
    else{
        Node *current_node = head;
        bool found = false;
        while(current_node != NULL){     //prob 1: current_node->next hobe na.
            if(current_node->data == value){  
                cout<<"found\n";
                found = true;   //prob 2: next line e break dite hobe na hole multiple same value thakle multiple found print korbe;
                //break;
            }
            current_node = current_node->next;
            
        }
        if(found == false){
            cout<<"not found\n";
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