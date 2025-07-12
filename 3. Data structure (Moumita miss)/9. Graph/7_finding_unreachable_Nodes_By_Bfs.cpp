#include <iostream>
#include <vector>
#include<queue>

using namespace std;


vector<int> edges[100];
vector<bool>visited(100,false);
int total_node, total_edge;

void findUnreachableNodes(int node){
    queue <int> q;
    q.push(node);

    visited[node] = 1;

    while(!q.empty()){
        int i = q.front();
        q.pop();
        
        for(int j = 0; j < edges[i].size(); j++){
            if(visited[edges[i][j]] == false){
                int v = edges[i][j];
                visited[v] = true;
                q.push(v);
            }
        }
    }
    cout<<"printing unreachable nodes: "<<endl;
    for(int i = 0; i < total_node; i++){
        if(visited[i] == false){
            cout<<i<<" ";
        }
    }
}

int main ()
{
   
    cout<<"Enter the number of total nodes and edges:"<<endl;
    cin>>total_node>>total_edge;

    cout<<"Enter edges: "<<endl;
    int a,b;

    for(int i=0; i<total_edge; i++)
    {
        cin>>a>>b;
        edges[a].push_back(b);
    }
    findUnreachableNodes(0);
}