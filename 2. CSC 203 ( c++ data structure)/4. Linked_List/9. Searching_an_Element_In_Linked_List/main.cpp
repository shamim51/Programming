#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;

void appendNode(int);
bool find_The_Number(int);

int main()
{
    int n;
    for(int i = 1; i <= 100; i = i + 1){
        appendNode(i);
    }
    /*
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);*/

    cout<<"which number you want to find: ";
    cin>>n;

    if(find_The_Number(n)==true){
        cout<<"the number is here";
    }
    else{
        cout<<"the number is not here";
    }

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
bool find_The_Number(int number){
    if(head!=NULL){
        Node *tNode = head;
        while(tNode!= NULL){
            if((tNode->data)==number){
                //cout<<tNode->data<<" ";
                return true;
            }
            //cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
        return false;

    }


}
