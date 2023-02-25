#include <iostream>
#include <vector>
#include<queue>

 
using namespace std;
 
int main ()
{
    int total_node, total_edge;
    cout<<"Enter the number of total nodes and edges:"<<endl;
    cin>>total_node>>total_edge;
    vector<int> edges[total_node];

    cout<<"Enter edges: "<<endl;
 
    int a,b;
    for(int i=0; i<total_edge; i++)
    {
        cin>>a>>b;
        edges[a].push_back(b);
        //edges[b].push_back(a);
    }

    int visited[100];
    for (int i = 0; i < total_node; i++)
    {
        visited[i] = 0;
    }
    

    int start_node;
    cout<<"Enter start node: ";
    cin>>start_node;

    queue <int> q;
    q.push(start_node);

    visited[start_node] = 1;

    while(!q.empty()){
        int i = q.front();
        cout<<i<<" ";
        q.pop();
        
        for(int j = 0; j < edges[i].size(); j++){
            if(visited[edges[i][j]] == 0){
                int v = edges[i][j];
                // visited[edges[i][j] = 1];
                visited[v] = 1;
                // q.push(edges[i][j]);
                q.push(v);
            }
        }
        cout<<endl;
    }

    for(int i = 0; i < total_node; i++){
        if(visited[i] == 0){
            cout<<i<<" ";
        }
    }

}