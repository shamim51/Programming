#include <iostream>
 
using namespace std;
 
struct node{
    string value;
    node *next = nullptr;
};
 
int is_lowercase( char c){

    int flag;
    flag = 0;

    if( c >= 'a' && c <= 'z'){
        flag = 1;
    }
    return flag;
}
void addValue(node*&p , string str){
    if(p == nullptr){
        p = new node;
        p->value = str;
    }
    else{
        node *current = p;
        while(current->next!=nullptr){
           current = current->next; // moving the current forward
        }
        node *x = new node; // a new node is created 
        x->value = str;
        current->next = x;
    }
}

void printList(node *n){
    while(n!=nullptr){
        cout<< n->value<<" ";
        n = n->next;
    }
    cout<<endl;
}

int Count_Duplicate(node *&p){
    int total_count = 0;
    string str;
    node *current = p;
    while (current != NULL)
    {
        str = current->value;
        for(int i = 0; i < str.length(); i++){
            if(is_lowercase(str[i])){
                current->value[i] = str[i] - 32;
            }
        }
        current = current->next;
    }
    
    current = p;
    while(current ->next != NULL){
        int counter = 0;
        while(current->next != NULL && current->value == current->next->value){
            counter++;
            current = current->next;
        }

        total_count = total_count + counter;

        if(counter == 0){
            current = current->next;
        }

    }
    return total_count;
}



int main()
{
    node *n = nullptr;
 
 
    addValue(n,"apple");  //{"apple", "apple", "Apple", "bat", "Bat", "car", "car", "dog", "dog","dog", "fox", "fox"}
    addValue(n,"apple");
    addValue(n,"Apple");
    addValue(n,"bat");
    addValue(n, "Bat");
    addValue(n, "car");
    addValue(n, "car");
    addValue(n, "dog");
    addValue(n, "dog");
    addValue(n, "dog");
    addValue(n, "fox");
    addValue(n, "fox");

    printList(n);
    cout<<Count_Duplicate(n)<<endl;
    printList(n);
 
    return 0;
}
 