#include <iostream>
using namespace std;

struct stack{
    int size;
    int top;
    char *s;

};

void push(stack &, char);
void pop(stack &);
bool isEmpty(stack &);
bool isFull(stack &);
bool isbalance(string, stack&);

int main()
{
    int size;
    string str;
    stack stk;
    stk.top = -1;
    cout << "Enter an expression :";
    cin>>str;

    size = 0;
    int j = str.length();
    //cout<<"j :"<<j<<endl;
    for(int i = 0; i < j; i = i + 1){
        if(str[i]=='('||str[i]=='{'||str[i]=='['){
            size = size + 1;
        }
    }
    //cout<<"size :"<<size<<endl;

    stk.s = new char[size];

    if(isbalance(str, stk)) cout<<"valid";
    else cout<<"not valid";

    return 0;
}

bool isbalance(string exp, stack &stk){
    for(int i = 0; i < exp.length(); i ++){

        if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
            push(stk,exp[i]);
        }

        else if(stk.s[stk.top]=='(' && exp[i]==')'|| stk.s[stk.top]=='{' && exp[i]=='}'||stk.s[stk.top]=='[' && exp[i]==']'){
            if(isEmpty(stk)) return false;
            pop(stk);
        }
        else if(exp[i]==')'|| exp[i]=='}'||exp[i]==']') return false;
    }
    if(isEmpty(stk)) return true;
    else return false;

}

void push(stack &stk, char c){
    if(isFull(stk)){
        cout<<"stack is full";
        return;
    }
    stk.top = stk.top + 1;
    stk.s[stk.top] = c;


}

void pop(stack &stk){
    stk.top= stk.top-1;

}

bool isFull(stack &stk){
    if(stk.top == stk.size-1){
        return true;
    }
    else {
        return false;
    }

}

bool isEmpty(stack &stk){
    if(stk.top==-1){
        return true;
    }
    else return false;
}