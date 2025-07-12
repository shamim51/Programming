#include <iostream>
#include <vector>
#include <queue>
using namespace std;
 
int main ()
{
    int total_node, total_edge;
    cin>>total_node>>total_edge;
    vector<int> edges[total_node];
 
    int a,b;
    for(int i=0; i<total_edge; i++)
    {
        cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
 
    for(int i=0;i<total_node;i++) {
        cout<< "adjacency list for "<<i<<endl;
        for(int j=0; j<edges[i].size(); j++) {
            cout<<edges[i][j]<< " ";
        }
        cout<<endl;
    }
    vector<int>parent(total_node);

    vector<bool>visited(total_node,false);
    queue<int>myqueue;
    myqueue.push(0);
    visited[0] = true;
    parent[0] = -1;
    while(myqueue.empty()==false)
    {
        int top = myqueue.front();
        cout<<top<<endl;
        for(int i=0; i<edges[top].size(); i++) {
            int current_node = edges[top][i];
            if(visited[current_node]==false) {
                parent[current_node] = top;
                // cout<<"parent of"<<current_node<<" = "<<parent[current_node];
                myqueue.push(current_node);
                visited[current_node] = true;
            }
        }
        myqueue.pop();
    }
}