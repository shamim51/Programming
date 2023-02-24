#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;

void delete_Particular_Node(int);
bool find_The_Number(int);
void appendNode(int);
void dispaly();


int main()
{
    /*for(int i = 1; i <= 100; i = i + 1){
        appendNode(i);
    }
    */
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);

    delete_Particular_Node(10);

    dispaly();

    return 0;
}
void delete_Particular_Node(int value){
    if(!find_The_Number(value)){
        cout<<"the number is not exist"<<endl;
    }
    else{
        Node *pNode = NULL;
        Node *tNode = head;
        while(tNode->data!=value){
            pNode = tNode;
            tNode = tNode->next;
        }
        if(pNode == NULL){
            head = head->next;
            delete tNode;
        }
        else{
            pNode->next = tNode->next;
            delete tNode;
        }
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
void dispaly(){
    if(head!=NULL){
        Node *tNode = head;
        while(tNode!= NULL){

            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }


}
