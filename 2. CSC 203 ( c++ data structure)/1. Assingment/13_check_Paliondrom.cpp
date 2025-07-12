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
int count_Nodes();
Node find_data(int);
bool is_Palindrome();

int main()
{
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);
    appendNode(50);
    appendNode(60);
    appendNode(70);
    appendNode(80);
    appendNode(90);
    display();
    cout << endl;
    cout << "there are " << count_Nodes() << " Nodes" << endl;
    //cout <<find_data(1)<<" ";
    if(is_Palindrome) cout<<endl<<"and the Linked_List is paliondrome";
    if(!is_Palindrome)cout<<endl<<"and the Linked_List is not paliondrome";

    return 0;
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
    if (head == NULL)
    {
        cout << "there is No Nodes there " << endl;
    }
    else
    {
        while (tNode != NULL)
        {
            cout << tNode->data << " ";
            tNode = tNode->next;
        }
    }
}
int count_Nodes()
{
    int count = 0;
    Node *tNode = head;
    while (tNode != NULL)
    {
        count = count + 1;
        tNode = tNode->next;
    }
    return count;
}
Node find_data(int position)
{
    Node *tNode = head;
    int i = 1;
    int data;
    while (i != position || tNode != NULL)
    {
        i = i + 1;
        tNode = tNode->next;
    }
    Node value;
    value = tNode->data;
    return value;
}
bool is_Palindrome()
{
    Node *tNode = head;
    int i, j;
    i = 1;
    j = count_Nodes();
    while (tNode != NULL)
    {
        if (find_data(i) != find_data(j))
        {
            return false;
        }
        i = i + 1;
        j = j - 1;
    }
    return true;
}
