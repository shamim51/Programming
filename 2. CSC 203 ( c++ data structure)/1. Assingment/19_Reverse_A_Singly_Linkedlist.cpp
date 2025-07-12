#include<iostream>
#include<stack>
using namespace std;

struct Node
{
   int data;
   Node *next;
};
Node *head = NULL;

void appendNode(int);
void reverse_A_singly_Linkedlist();
void display();

int main()
{
   // appendNode(10);
   // appendNode(20);
   // appendNode(30);
   // appendNode(40);
   appendNode(50);
   appendNode(60);
   appendNode(70);
   appendNode(80);
   appendNode(90);
   display();
   reverse_A_singly_Linkedlist();
   cout<<endl<<"display after rever a singly linkedlist :";
   display();

 return 0;
}

void reverse_A_singly_Linkedlist(){
   stack<Node*>stk;
   Node *tNode = head;
   while (tNode != NULL)
   {
      stk.push(tNode);
      tNode = tNode->next;  
   }
   // Node *newNode;
   // while (!stk.empty())
   // {
   //    newNode = stk.top();
   //    stk.pop();
   //    cout<<newNode->data<<" ";
   // }
   head = stk.top();
   stk.pop();
   tNode = head;
   // cout<<"current tNode data = "<<tNode->data<<endl;;
   // tNode->next = stk.top();
   // stk.pop();
   // tNode = tNode->next;
   // cout<<"current tNode data = "<<tNode->data<<endl;
   // tNode->next = stk.top();
   // stk.pop();
   // tNode = tNode->next;
   // cout<<"current tNode data = "<<tNode->data<<endl;
   // tNode->next = stk.top();
   // stk.pop();
   // tNode = tNode->next;
   // cout<<"current tNode data = "<<tNode->data<<endl;
   // tNode->next = stk.top();
   // stk.pop();
   // tNode = tNode->next;
   // cout<<"current tNode data = "<<tNode->data<<endl;
   // tNode->next = NULL;
   // Node *pNode = head;
   // while (pNode!=NULL)
   // {
   //    cout<<pNode->data<<" ";
   //    pNode = pNode->next;
   // }
   

   while (!stk.empty())
   {
      tNode->next = stk.top();
      stk.pop();  
      tNode = tNode->next;
      tNode->next = NULL;
   }
   
}

/*void reverse_A_singly_Linkedlist(){
   Node *tNode = head;
   Node *pNode = head->next;
   tNode->next = NULL;
   Node *cNode = pNode->next;
   while (cNode->next!=NULL)
   {
      pNode->next = tNode;
      tNode = pNode;
      pNode = cNode;
      cNode = cNode->next;
   }
   pNode->next = tNode;
   cNode->next = pNode;
   head = cNode;
   
}*/
void appendNode(int value){
   Node *newNode = new Node;
   newNode->data = value;
   newNode->next = NULL;
   if(head == NULL){
      head = newNode;
   }
   else{
      Node *tNode = head;
      while(tNode->next!=NULL){
         tNode = tNode->next;
      }
      tNode->next = newNode;
   }
}

void display(){
   Node *tNode = head;
   while (tNode!=NULL)
   {
      cout<<tNode->data<<" ";
      tNode = tNode->next;
   }
   cout<<endl;
   
}
