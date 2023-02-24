#include <iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *s;

};

void push(stack &, int);
bool isfull(stack &);
void display(stack &);
void pop(stack &);

int main()
{
    stack stk;
    stk.top = -1;

    cout<<"Enter Size: ";
    cin>>stk.size;

    stk.s = new int[stk.size];

    push(stk, 10);
    push(stk, 20);
    push(stk, 30);
    push(stk, 40);
    push(stk, 50);

    display(stk);

    return 0;
}

void push(stack &stk, int value){
    if(isfull(stk)){
        cout<<"stack is full";
        return;
    }
    stk.top = stk.top + 1;
    stk.s[stk.top] = value;
    //cout<<"successfull"<<endl;


}
void pop(stack &stk){


}


void display(stack &stk){
    if(stk.top==-1){
        cout<<"stack is empty";
        return;
    }
    //cout<<"again successfull"<<endl;
    int p = stk.top;
    while(p!=-1){
        cout<<stk.s[p]<<" ";
        p = p - 1;
    }
}

bool isfull(stack &stk){
    if(stk.top == stk.size-1){
        return true;
    }
    else {
        return false;
    }

}
