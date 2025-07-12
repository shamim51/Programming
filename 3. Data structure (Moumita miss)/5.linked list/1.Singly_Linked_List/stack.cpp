#include <iostream>
using namespace std;

struct node
{
    int value;
    node* next;
};

node* head = NULL;

bool isEmpty()
{
    if(head == NULL)
    {
        return true;
    }
    return false;
}

void push(int value)
{
    node* new_node = new node;
    new_node->value = value;
    new_node->next = head;
    head = new_node;
}

void pop()
{
    if(isEmpty() == true)
    {
        cout << "Stack Is Empty" << endl;
    }
    else
    {
        node* node_to_be_deleted = head;
        head = head->next;
        delete node_to_be_deleted;
    }
}

void print_list()
{
    node* current_node = head;
    while(current_node != NULL)
    {
        cout << current_node->value << endl;
        current_node = current_node->next;
    }
}

void print_peek()
{
    if(isEmpty())
    {
        cout << "Stack Is Empty" << endl;
    }
    else
    {
        cout << "Peek : " << head->value << endl;
    }
}

int main()
{
    push(2);
    push(4);
    push(6);
    push(8);
    push(10);

    print_list();
    cout << endl;

    pop();
    pop();
    pop();
    pop();
    //pop();
    //pop();

    print_list();
    cout << endl;

    print_peek();
}