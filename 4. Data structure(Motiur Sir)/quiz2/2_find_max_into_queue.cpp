#include<iostream>
#include<queue>

using namespace std;

void maxQ(queue<int>&q){
    if(q.empty()){
        cout<<"no value found"<<endl;
        return;
    }
    int max = q.front();
    queue<int>que;
    while (!q.empty())
    {
        if(q.front()>max){
            max = q.front();
        }
        que.push(q.front());
        q.pop();
        
    }
    while(!que.empty()){
        q.push(que.front());
        que.pop();
    }

    cout<<max;
    
}

int main()
{
    queue<int> Q;
    Q.push(10);
    Q.push(20);
    Q.push(10000);
    Q.push(40);
    Q.push(50);
    Q.push(60);

    maxQ(Q);

    return 0;
}