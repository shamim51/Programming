#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;

void appendNode(int);
void display();
int count_Nodes();
//bool is_Palindrome();

int main()
{
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);
    appendNode(50);
    appendNode(60);
    appendNode(70);
    appendNode(80);
    appendNode(90);
    display();
    cout<<endl;
    cout<<"there are: "<<count_Nodes()<<" Nodes here"<<endl;

    return 0;
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
        while (tNode->next!=NULL)
        {
            tNode = tNode->next;
        }
        tNode->next = newNode;
        
    }
}
void display(){
    Node *tNode = head;
    if(head == NULL){
        cout<<"there is No Nodes there "<<endl;
    }
    else{
        while (tNode!=NULL)
        {
            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
        
    }
}
int count_Nodes(){
    int count = 0;
    Node*tNode = head;
    while(tNode!=NUll){
        count = count + 1;
        tNode = tNode->next;
    }
    return count;
}
//bool is_Palindrome();