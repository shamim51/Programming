#include <iostream>
using namespace std;
 
struct node{
  char value;
  node* next;
};
 
node* head = NULL;
 
bool serach(node *current, char ch){
    if(current->next == head){
        if(current->value == ch){
            return true;
        }
        else{
            return false;
        }
    }

    if(current->value == ch){
        return true;
    }

    return serach(current->next, ch);

}
 
void insert_value(int value, node *current_node){
    if(current_node == NULL){
        node* new_node = new node;
        new_node->value = value;
        new_node->next = new_node;
        // current_node = new_node;
        head = new_node;
        // cout<<"head = NULL"<<endl;
        // if(head == NULL){
        //     cout<<"head = NULL"<<endl;
        // }
        return;
    }
    if(current_node->next == head){
        node* new_node = new node;
        new_node->value = value;
        new_node->next = NULL; // head
        current_node->next = new_node;
        new_node->next = head;

        // cout<<"find head "<<endl;

        return;
    }
 
    else{
        // cout<<"else"<<endl;
        current_node = current_node->next;
    }
    insert_value(value, current_node);
}
 
void print_value(node *current){
    if(current->next == head){
        cout<<current->value;
        return;
    }
    else{
        cout<<current->value<<" ";
    }
    print_value(current->next);
}
 
int main(){
    // head = new node;
    // head2 = new node;
    // head3 = new node;

    // head->value = 1;
    // head2->value = 2;
    // head3->value = 3;

    // head->next = head2;
    // head2->next = head3;
    // head3->next = head;
    // print_value();
    insert_value('5', head);
    insert_value('6', head);
    insert_value('7', head);
    insert_value('8', head);
    // insert_value('9', head);
    // insert_value('10', head);
    print_value(head);

    cout<<endl;

    cout<<serach(head, '9');

    return 0;
}