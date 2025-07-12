#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

void appendNode(Node *&, int);
void display(Node *&);
void alternate_Odd_And_Even(Node *&);


int main(){
    Node *head1 = NULL;
    appendNode(head1, 15);
    appendNode(head1, 30);
    appendNode(head1, 40);
    appendNode(head1, 55);
    appendNode(head1, 60);
    appendNode(head1, 75);
    // appendNode(head1, 17);
    // appendNode(head1, 19);

    display(head1);

    alternate_Odd_And_Even(head1);

    cout<<"displaying after alternate: "<<endl;

    display(head1);

    return 0;
}

void appendNode(Node *&head, int value){
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

void display(Node *&head){
    if(head == NULL){
        cout<<"No Nodes there"<<endl;
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

void alternate_Odd_And_Even(Node *&head){
    Node *tNode = head;
    int i = 0;
    while (tNode->next->next != NULL)
    {
        if(tNode->data % 2 == 0){
            Node *pNode = tNode;
            Node *target_Node = tNode->next;
            int counter = 0;
            while (target_Node->data % 2 != 1){
                target_Node = target_Node->next;
                pNode = pNode->next;
                counter ++;
            }
            if(counter == 0){
                 tNode = tNode->next;
                 cout<<"if -if = "<<i<<endl;
            }
            
            else{
            pNode->next = target_Node->next;
            target_Node->next = tNode->next;
            tNode->next = target_Node;
            tNode = target_Node;
            cout<<"if-else = "<<i<<endl;
            }
            i = i + 1;
        }
        else if(tNode->data % 2 == 1){
            Node *pNode = tNode;
            Node *target_Node = tNode->next;
            int counter = 0;
            while (target_Node->data % 2 != 0){
                target_Node = target_Node->next;
                pNode = pNode->next;
                counter ++;
            }
            if(counter == 0) {
                tNode = tNode->next;
                cout<<"esle if -if = "<<i<<endl;
            }
            else{
            
                cout<<"else if -else = "<<i<<endl;
                pNode->next = target_Node->next;
                target_Node->next = tNode->next;
                tNode->next = target_Node;
                tNode = target_Node;
            }
            i++;
            
        }
    }
    /*
    if(tNode->next != NULL){
        while (tNode->next!=NULL){
            tNode = tNode->next;
        }
        
    }*/
}