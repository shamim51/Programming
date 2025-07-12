#include <iostream>
using namespace std;

struct node
{
    string book;
    node* next;
};

node* head = NULL;

void insert2(string book)
{
    node* new_node = new node;
    new_node->book = book;
    new_node->next = NULL;

    if(head == NULL)
    {
        head = new_node;
    }
    else
    {
        node* current_node = head;
        while(current_node->next != NULL)
        {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
}

void insert_book(string specific_book, string new_book)
{
    node* new_node = new node;
    new_node->book = new_book;
    new_node->next = NULL;
    node* current_node = head;
    node *tNode;

    while(current_node != NULL)
    {
        if(head->book == specific_book){
            new_node->next = head;
            head = new_node;
        }
        
     else(current_node->next->book == specific_book)
        {
            tNode = current_node->next;
            current_node->next = new_node;
            new_node->next = tNode;

        }
        current_node = current_node->next;
    }
}

void print_list()
{
    node* current_node = head;
    while(current_node != NULL)
    {
        cout << current_node->book << endl;
        current_node = current_node->next;
    }
}

int main()
{
    insert2("Scoop");
    insert2("Dracula");
    insert2("Beloved");
    insert2("Peter");
    insert2("Heart");
    insert2("Bethoven");

    print_list();
    cout << endl;

    insert_book("Beloved", "Dubliners");

    print_list();
}