#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;

void appendNode(int value);
void display();
void move_last_Element_to_front(); //!this is an alert 

int main()//*this is main
{
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);
    appendNode(50);
    appendNode(70);
    appendNode(80);
    appendNode(90);
    appendNode(100);
    appendNode(110);
    appendNode(120);
    appendNode(130);
    appendNode(140);
    appendNode(150);

    display();
    cout << endl;
    cout << "displaying after Moving Last Element into front" << endl;
    move_last_Element_to_front();
    display();
}

void appendNode(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *tNode = head;
        while (tNode->next != NULL)
        {
            tNode = tNode->next;
        }
        tNode->next = newNode;
    }
}
void display()
{
    if (head == NULL)
    {
        cout << "No Nodes there" << endl;
    }
    else
    {
        Node *tNode = head;
        while (tNode != NULL)
        {
            cout << tNode->data << " ";
            tNode = tNode->next;
        }
    }
}
void move_last_Element_to_front()
{
    Node *tNode = head;
    Node *pNode = NULL;
    while (tNode->next != NULL)
    {
        pNode = tNode;
        tNode = tNode->next;
    }
    tNode->next = head;
    head = tNode;
    pNode->next = NULL;
}