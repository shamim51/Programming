#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;

void appendNode(int value);
void dispaly_Maximum();

int main()
{
    for(int i = 1; i <= 100; i = i + 1){
        appendNode(i);
    }

    dispaly_Maximum();

    return 0;
}
void dispaly_Maximum(){
    if(head!=NULL){
        int max = 0;//let all elements will be positive integer
        Node *tNode = head;
        while(tNode!= NULL){
            if((tNode->data)>max){
                max = tNode->data;
            }

            //cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
        cout<<"Maximum is: "<<max;
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
