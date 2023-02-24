#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;

void appendNode(int);
int sum_of_Nodes();

int main()
{
    for(int i = 1; i <= 100; i = i + 1){
        appendNode(i);
    }
    /*
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);*/

    cout<<sum_of_Nodes();

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
int sum_of_Nodes(){
    int sum = 0;
    if(head!=NULL){
        Node *tNode = head;
        while(tNode!= NULL){
            sum = sum + tNode->data;
            //cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }
    return sum;
}
