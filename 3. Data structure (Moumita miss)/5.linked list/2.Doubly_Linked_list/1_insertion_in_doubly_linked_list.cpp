#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *pre;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void insertvalue(int value){
    Node *newNode = new Node;
    newNode->data = value;
    newNode->pre = NULL;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        Node *c_N = head;
        while (c_N->next != NULL)
        {
            c_N = c_N->next;
        }
        c_N->next = newNode;
        newNode->pre = c_N;
        tail = newNode;
    }
}

void sumOf_first_Last(){
    if(head == NULL || head->next == NULL) return ;//because of only one or no nodes there
    Node *pNode = head;
    Node *tNode = tail;
    while(pNode->next != tNode){
        cout<<pNode->data+tNode->data<<" ";
        pNode = pNode->next;
        tNode = tNode->pre;
    }
    cout<<pNode->data + tNode->data;
    cout<<endl;
}

void delete_node(int value){
    Node *tNode;
    while(head->data == value){
        tNode = head;
        head = head->next;
        delete tNode;
        //head->pre = NULL;

        if(head != NULL){
            head->pre = NULL;
        }
        else{
            return;
        }
    }
    
    Node *c_N = head;
    while(c_N->next!= NULL){
        tNode = c_N->next;
        if(c_N->next->data == value){
            c_N->next = tNode->next;
            if(tNode->next != NULL){
                tNode->next->pre = c_N;
            }
            else{
                tail = tNode->pre;
            }
            delete tNode;
        }
        else{
            c_N = c_N->next;
        }
    }

}

void print(){
    if(head == NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        Node *c_N = head;
        while(c_N!= NULL){
            cout<<c_N->data<<" ";
            c_N = c_N->next;
            
        }
        cout<<endl;
    }
}

void print_rev(){
    if(head == NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        Node *c_N = tail;
        while(c_N != NULL){
            cout<<c_N->data<<" ";
            c_N = c_N->pre;
        }
        cout<<endl;
    }
}


void find(int value){
    if(head == NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        Node *currentNode = head;
        while(currentNode!= NULL){
            if(currentNode->data == value){
                cout<<"found"<<endl;
                break;
            }
            //cout<<currentNode->data<<" ";
            currentNode = currentNode->next;
            
        }
        
    }
}



int main()
{
    insertvalue(10);
    insertvalue(10);
    insertvalue(10);
    insertvalue(10);
    insertvalue(20);
    insertvalue(10);
    insertvalue(10);
    insertvalue(15);
    insertvalue(10);
    insertvalue(10);
    insertvalue(10);
    insertvalue(10);
    insertvalue(10);
    insertvalue(10);

  

    print();
    sumOf_first_Last();
    
    return 0;
}