#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;

void appendNode(int);
void display();
int count_Nodes_of_a_Linkedlist();
void delete_Duplicates();

int main()
{
    int i;
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(30);
    appendNode(30);
    appendNode(30);
    appendNode(30);
    appendNode(40);
    appendNode(50);
    appendNode(60);
    appendNode(70);
    appendNode(70);
    appendNode(70);
    appendNode(70);
    appendNode(70);
    appendNode(70);
    appendNode(70);
    appendNode(70);
    appendNode(70);
    appendNode(70);
    appendNode(80);
    appendNode(90);
    appendNode(90);
    appendNode(90);
    appendNode(90);
    appendNode(90);
    display();
    delete_Duplicates();
    cout << endl
         << "display after delete duplicates :" << endl;
    display();
    //!delete_Duplicates()

    return 0;
}
void delete_Duplicates()
{
    Node *tNode = head;
    while (tNode != NULL)
    {
        Node *cNode = tNode;
        Node *PNode = tNode->next;
        while (PNode != NULL)
        {
            if (tNode->data == PNode->data)
            {
                cout << "i am here" << endl;
                PNode = PNode->next;
                cNode->next = PNode;
            }
            else
            {
                cNode = PNode;
                PNode = PNode->next;
            }
        }
        tNode = tNode->next;
    }
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
    Node *tNode = head;
    while (tNode != NULL)
    {
        cout << tNode->data << " ";
        tNode = tNode->next;
    }
}

int count_Nodes_of_a_Linkedlist()
{
    int count = 0;
    Node *tNode = head;
    while (tNode != NULL)
    {
        tNode = tNode->next;
        count = count + 1;
    }
    return count;
}
