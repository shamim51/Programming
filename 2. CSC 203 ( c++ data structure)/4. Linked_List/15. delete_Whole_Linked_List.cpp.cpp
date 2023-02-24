#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head = NULL;

void delete_Whole_Linked_List();
//bool find_The_Number(int);
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

    dispaly();
    cout<<endl;

    delete_Whole_Linked_List();

    dispaly();

    return 0;
}
void delete_Whole_Linked_List(){
        Node *pNode = NULL;
        Node *tNode = head;
        while(tNode!=NULL){
            pNode = tNode;
            tNode = tNode->next;
            delete pNode;
            head = tNode;
        }



    }
/*
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


}*/
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
    if(head==NULL){
        cout<<"No Node there";
    }
    else{
        Node *tNode = head;
        while(tNode!= NULL){

            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }


}
