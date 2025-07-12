#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = nullptr;
void append_Node(int);
void print_Node();
void make_Middle_Node_Head();

int main()
{
    append_Node(10);
    append_Node(20);
    append_Node(30);
    append_Node(40);
    append_Node(50);
    append_Node(60);
    append_Node(70);
    append_Node(80);
    append_Node(90);
    print_Node();
    make_Middle_Node_Head();
    cout<<"display after making middle node head"<<endl;
    print_Node();


    return 0;
}
void append_Node(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *tNode = head;
        while (tNode->next != nullptr)
        {
            tNode = tNode->next;
        }
        tNode->next = newNode;
    }
}

void print_Node()
{
    if (head == nullptr)
    {
        cout << "there is no Nodes there" << endl;
    }
    else
    {
        Node *tNode = head;
        while (tNode != nullptr)
        {
            cout << tNode->data << " ";
            tNode = tNode->next;
        }
    }
}

void make_Middle_Node_Head()
{
        int middle, i = 0;
        Node *tNode = head;
        while (tNode != nullptr)
        {
            tNode = tNode->next;
            i = i + 1;
            cout << "i = " << i << endl;
        }
        if (i % 2 == 0)
        {
            int j = 1;
            middle = i / 2;
            Node *tNode = head;
            Node *pNode = NULL;
            while (j != middle)
            {
                pNode = tNode;
                tNode = tNode->next;
                j = j + 1;
            }
            pNode->next = tNode->next;
            tNode->next = head;
            head = tNode;
        }
        else
        {
            int j = 1;
            middle = (i / 2) + 1;
            Node *tNode = head;
            Node *pNode = NULL;
            while (j != middle)
            {
                pNode = tNode;
                tNode = tNode->next;
                j = j + 1;
            }
            pNode->next = tNode->next;
            tNode->next = head;
            head = tNode;
        }
}
