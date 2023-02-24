#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;

void appendNode(int);
float Average_of_Nodes();

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

    cout<<Average_of_Nodes();

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
float Average_of_Nodes(){
    float sum = 0;
    int counter = 0;
    float avg;
    if(head!=NULL){
        Node *tNode = head;
        while(tNode!= NULL){
            sum = sum + tNode->data;
            //cout<<tNode->data<<" ";
            tNode = tNode->next;
            counter = counter + 1;
        }
        avg = sum/counter;
    }
    return avg;
}
