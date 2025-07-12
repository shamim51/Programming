#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = NULL;

void appendNode(int);
void display();
void delete_N_Nodes_after_M_Nodes(int M, int N){
    int counter = 1;
    Node *tNode = head;
    while (tNode->next!=NULL)
    {
        while(counter != M){
            tNode = tNode->next;
            counter = counter + 1;
        }
        counter = 0;
        
        while(counter != N){
            Node *PNode;
            PNode = tNode->next;
            tNode->next = PNode->next;
            delete PNode;
            counter++;
        }
        counter = 0;
    }
    

}

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

    display();

    delete_N_Nodes_after_M_Nodes(2, 2);
    display();
    
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