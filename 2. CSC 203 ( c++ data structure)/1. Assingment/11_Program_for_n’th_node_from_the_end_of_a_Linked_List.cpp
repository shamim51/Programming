#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = nullptr;

void append_Node(int);
void get_Nt_Node_from_end(int);

int main()
{
    int n;

    append_Node(10);
    append_Node(20);
    append_Node(30);
    append_Node(40);
    append_Node(50);
    cout << "enter which Node you want to print from end: ";
    cin>>n;

    get_Nt_Node_from_end(n);

    return 0;
}

void append_Node(int value){
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    if(head == nullptr){
        head = newNode;
    }
    else{
        Node *tNode = head;
        while(tNode->next!=nullptr){
            tNode = tNode->next;
        }
        tNode->next = newNode;
    }
}

void get_Nt_Node_from_end(int n){
    Node *tNode = head;
    int counter = 0;
    while(tNode!=nullptr){
        tNode = tNode->next;
        counter = counter + 1;
    }
    int Nth_Node = counter - n;
    counter = 1;
    Node *pNode = head;
    while(counter!= Nth_Node){
        pNode = pNode->next;
    }
    cout<<pNode->next->data<<" ";

}
