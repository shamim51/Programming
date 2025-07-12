#include <iostream>
using namespace std;
struct Node
{
    string adress;
    int data;
    Node *next;
};

struct string_Node
{
    string value;
    string_Node *next;
};

string_Node *head1 = NULL;
Node *head = NULL;

void appendNode(int);
void append_stringNode(string);
void display();
void Make_circular_Linkedlist(int);
bool detect_Loop_In_A_LinKed_List();
void find_Length_Of_A_Loop_In_A_Linkedlist();

int main()
{
    int position;
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);
    appendNode(50);
    appendNode(60);
    appendNode(70);
    appendNode(80);

    display();

    cout << endl
         << "In which position you want to make circle :";
    cin >> position;

    Make_circular_Linkedlist(position);
    //detect_Loop_In_A_LinKed_List();

    //display();

    return 0;
}

void find_Length_Of_A_Loop_In_A_Linkedlist(){

}

bool detect_Loop_In_A_Linkedlist()
{
    Node *tNOde = head
    while (tNOde != NULL)
    {
        append_stringNode(tNOde->adress);
        string_Node *pNode = head1;
        while (pNode != NULL)
        {
            if (pNode->value == tNOde->adress){
                return true;
            }
            pNode = pNode->next;
        }

        tNOde = tNOde->next;
    }
    return false;
}

void Make_circular_Linkedlist(int position)
{
    Node *tNode = head;
    while (tNode->next != NULL)
    {
        tNode = tNode->next;
    }
    Node *pNode = head;
    int count = 1;
    while (count != position)
    {
        pNode = pNode->next;
        count = count + 1;
    }
    tNode->next = pNode;
}
void append_stringNode(string str)
{
    string_Node *newNode = new string_Node;
    newNode->value = str;
    newNode->next = NULL;

    if (head1 == NULL)
    {
        head1 = newNode;
    }
    else
    {
        string_Node *tNode = head1;
        while (tNode->next != NULL)
        {
            tNode = tNode->next;
        }
        tNode->next = newNode;
    }
}

void appendNode(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->adress = newNode;
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