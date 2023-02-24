#include <iostream>

using namespace std;

// struct student
// {
//     int id;
//     string name;
    
// };

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
void appendNode(int value){
    Node *N = new Node;
    N->data = value;
    N->next = NULL;

    if(head == NULL){
        head = N;
    }
    else{
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = N;
     }
}

int main()
{
    appendNode(10);
    appendNode(20);
    appendNode(30);
    // cout<<head->data;
    // Node *N = new Node;
    // N->data = 10;
    // N->next = NULL;

    // Node *head = N;

    // Node *P = new Node;
    // P->data = 20;
    // P->next = NULL;

    // N->next = P;

    // cout<<N->data<<endl;
    // cout<<N->next->data;


    // student nayeem;
    // student *nayeem = new student;    //int *p = new int;
    // nayeem->id = 19000;
    // nayeem->name = "Nayeem Islam";
    // nayeem.id = 19000;
    // na.name = "Nayeem Islam";

    // cout<<nayeem.name<<" "<<nayeem.id;
    // cout<<nayeem->name<<" "<<nayeem->id;
    return 0;
}
