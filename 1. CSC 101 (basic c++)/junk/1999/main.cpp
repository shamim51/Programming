#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
 };

void appendnode_again(node *&head, int value){


    int x = value;
    int q, r, sum;
    sum = 0;
    while(x!=0){
        q = x%10;
        x = x/10;
        sum = (sum * 10) + q;
        cout<<"sum = "<<sum;
    }
    while(sum!=0){
        r=sum%10;
        sum=sum/10;
        appendnode(head, r);
    }

}
void appendnode(node *&head, int value){

    int x,y;
    while(value!=0)
    {
       x=value%10;
    node *newnode =new node;
    newnode->data=x;
    newnode->next=NULL;
    if (head==NULL) head=newnode;
    else {
        node *tnode=head;
        while(tnode->next!=NULL)
        {
            tnode=tnode->next;
        }
        tnode->next=newnode;
    }
       value=value/10;
    }

void display_recursively(node *tnode)
{
    if(tnode==NULL){
        return;
    }
    int temp = tnode->data;
    tnode = tnode->next;

    display_recursively(tnode);
    //cout<<tnode->data;
    cout<<temp;
}

void display(node *tnode)
{
 while(tnode!=NULL)
 {
     cout<<tnode->data<<" ";
     tnode=tnode->next;
 }
}
int add1(node *head1)
{
    node *tnode=head1;
    int num1=0,sum1=0;
    while(tnode!=NULL)
    {
        num1=(num1*10)+(tnode->data) ;
        sum1=num1;
        tnode=tnode->next;
    }
    sum1=sum1+1;
    return sum1;
}
int main()
{
    node *head1=NULL;
    node *head2=NULL;
    //node *head3=NULL;
    appendnode(head1,1);
    appendnode(head1,9);
    appendnode(head1,9);
    appendnode(head1,9);
    display(head1);
    cout<<endl;
    int sum1 = add1(head1);
    cout<<"number "<<sum1<<endl;
    appendnode_again(head2,sum1);
    display(head2);
    cout<<endl;
    //display_recursively(head2);
}
