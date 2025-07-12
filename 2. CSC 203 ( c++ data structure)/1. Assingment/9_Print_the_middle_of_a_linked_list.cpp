#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = nullptr;
void append_Node(int);
void print_Node();
void print_Middle_of_A_Node();

int main()
{
    append_Node(10);
    append_Node(20);
    append_Node(30);
    append_Node(40);
    append_Node(50);
    //         append_Node(60);
    cout << "*****Printing Nodes*****" << endl;
    print_Node();
    cout<<endl;
    cout<<"*****Printing Middle of Nodes*****"<<endl;
    print_Middle_of_A_Node();

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

void print_Node(){
    if(head == nullptr){
        cout<<"there is no Nodes there"<<endl;
    }
    else{
        Node *tNode = head;
        while(tNode!=nullptr){
            cout<<tNode->data<<" ";
            tNode = tNode->next;

        }
    }
}

void print_Middle_of_A_Node(){
    if(head == nullptr){
        cout<<"there is no Nodes there"<<endl;
    }
    else{
        int middle, i = 0;
        Node *tNode = head;
        while(tNode!=nullptr){
            tNode = tNode->next;
            i = i + 1;
            cout<<"i = "<<i<<endl;
        }
        if(i%2==0){
            int j = 1;
            middle = i/2;
            cout<<"middle= "<<middle<<endl;
            Node *tNode = head;
            while(j != middle){
                tNode = tNode->next;
                j = j + 1;
            }
            cout<<tNode->data<<" ";
        }
        else{
            cout<<"i am inside else"<<endl;
            int j = 1;
            middle = (i/2)+1;
            Node *tNode = head;
            while(j != middle){
                tNode = tNode->next;
                j = j + 1;
            }
            cout<<tNode->data<<" ";

        }
    }

}
