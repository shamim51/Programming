#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void removePairs(stack<string> &stk){
    string top1;
    string top2;
    stack<string>stk2;

    queue<string>Q;

    while(!stk.empty()){
        top1 = stk.top();
        stk.pop();
        //Q.push("")
        top2 = stk.top();

        if((top1 =="A" && top2 == "T") || (top1 == "G" && top2 == "C")){
            stk.pop();
            Q.push(top1);
            Q.push(top2);
        }
    }

    while (!Q.empty())
    {   cout<<Q.front();
        stk2.push(Q.front());
        Q.pop();
    }

}

int main()
{
    string top1;
    string top2;
    stack<string>stk;
    stack<string>stk2;

    queue<string>Q;

    stk.push("T");
    stk.push("A");
    stk.push("T");
    stk.push("T");
    stk.push("C");
    stk.push("T");
    stk.push("C");
    stk.push("G");
    stk.push("C");
    stk.push("T");
    stk.push("C");
    stk.push("C");
    stk.push("A");
    stk.push("A");
    stk.push("C");
    stk.push("T");
    stk.push("A");
   
    removePairs(stk);
    
    return 0;
}