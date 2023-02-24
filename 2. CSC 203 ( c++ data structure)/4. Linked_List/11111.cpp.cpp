#include <iostream>
using namespace std;

struct node
{ int data;
  node *prev;
  node *next;
};

node *head=NULL;
node *tail=NULL;

void nodecreation(int value)
{ node *newnode =new node;//ekhane  new node alada alada likhte hobe ..
  newnode->data =value;
  newnode->prev=NULL;
  newnode->next=NULL;

  if (head==NULL)
  { head =tail=newnode; }
  else
  { tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
  }
}

void display()
{ node *tnode=head;
  while(tnode!=NULL)
  { cout<<tnode->data<<" ";
    tnode=tnode->next;
  }
}

void reverse()
{ node *tnode=tail;
  while(tnode!=NULL)//head hobe ekhane
  { cout<<tnode->data<<" ";
    tnode=tnode->prev;
  }
}

int main()
{
    nodecreation(10);
    nodecreation(20);
    nodecreation(30);
    nodecreation(40);
    nodecreation(50);
    cout<<endl;
    display();
    //display();
    cout<<endl;
    reverse();
}
