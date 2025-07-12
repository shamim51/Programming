#include<iostream>
#include <queue>
#include<stack>

using namespace std;

int main()
{
    int pair = 0;
    queue<int>q;
    queue<int>q1;

    q.push(1);
    q.push(2);
    q.push(13);
    q.push(2);
    q.push(5);
    q.push(13);
    q.push(7);
    q.push(17);
    q.push(9);
    q.push(17);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        while (!q.empty())
        {
            q1.push(q.front());
            if(front == q.front()){
                pair ++;
            }
            q.pop();
        }
        while(!q1.empty()){
            q.push(q1.front());
            q1.pop();
        }
        
    }
    cout<<pair;
    
    return 0;
}