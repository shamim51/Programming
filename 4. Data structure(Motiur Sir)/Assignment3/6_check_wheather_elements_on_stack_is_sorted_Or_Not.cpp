#include<iostream>
#include<stack>

using namespace std;

void isSorted();

int main()
{
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);
    stk.push(7);
    stk.push(8);

    cout<<"stack size = "<<stk.size()<<endl;

    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }
    
    
    return 0;
}