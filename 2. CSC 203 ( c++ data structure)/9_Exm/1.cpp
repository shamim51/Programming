#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

};
Node *head1 = NULL;
Node *head2 = NULL;
Node *head3 = NULL;

void appendNode(int);
bool find_The_Number(int);

int main()
{
    int n;
    for(int i = 1; i <= 100; i = i + 1){
        appendNode(i);
    }
    /*
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);*/

    cout<<"which number you want to find: ";
    cin>>n;

    if(find_The_Number(n)==true){
        cout<<"the number is here";
    }
    else{
        cout<<"the number is not here";
    }

    return 0;
}
void appendNode(int value){
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
    }
    else{
        Node *tNode = head;
        while(tNode->next != NULL){
            tNode = tNode->next;
        }
        tNode->next = newNode;

    }
}
void swap_HeadTail(){
    int i = 0;
    while(i != 3){
        if(i == 0){
            if(head1 != NULL){
                if(head1->next == NULL) cout<<head1->data<<endl; 
                else{
                    Node *tNode = head1;
                    while(tNode->next != NULL){
                        tNode = tNode->next;
                    }
                    int temp = head1->data;
                    head1->data = tNode->data;
                    tNode->data = temp;
                    
                    tNode = head1;
                    while (tNode != NULL)
                    {
                        cout<<tNode->data<<" ";
                        tNode = tNode->next;
                    }
                    cout<<endl;
                    
                }
            }
        }
        else if(i == 1){
            if(head2 != NULL){
               if(head2->next == NULL) cout<<head2->data<<endl; 
                else{
                    Node *tNode = head2;
                    while(tNode->next != NULL){
                        tNode = tNode->next;
                    }
                    int temp = head2->data;
                    head2->data = tNode->data;
                    tNode->data = temp;
                    
                    tNode = head2;
                    while (tNode != NULL)
                    {
                        cout<<tNode->data<<" ";
                        tNode = tNode->next;
                    }
                    cout<<endl;
                    
                }
            }
        }
        else if( i == 2){
            if(head3 != NULL){
                if(head3->next == NULL) cout<<head3->data<<endl; 
                else{
                    Node *tNode = head3;
                    while(tNode->next != NULL){
                        tNode = tNode->next;
                    }
                    int temp = head3->data;
                    head3->data = tNode->data;
                    tNode->data = temp;
                    
                    tNode = head3;
                    while (tNode != NULL)
                    {
                        cout<<tNode->data<<" ";
                        tNode = tNode->next;
                    }
                    cout<<endl;
                    
                }
            }
        }
        i++;
    }
    

}
