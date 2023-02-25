#include <iostream>
#include <vector>
 
using namespace std;
 
int main ()
{
    int degree;
    int total_node, total_edge;
    cin>>total_node>>total_edge;
    vector<int> edges[total_node];
 
    int a,b;
    for(int i=0; i<total_edge; i++)
    {
        cin>>a>>b;
        edges[a].push_back(b);
    }
 
    for(int i=0;i<total_node;i++) {
        cout<< "adjacency list for "<<i<<endl;
        for(int j=0; j<edges[i].size(); j++) {
            cout<<edges[i][j]<< " ";
        }
        cout<<endl;
    }

    for(int i = 0; i < total_node; i++){
        cout<<"outdergree for Node "<<i<<" = "<<edges[i].size()<<endl;
    }

    int outdegree[total_node] = {0};

    for(int i = 0; i < total_node; i = i + 1){
        for(int j = 0; j < edges[i].size(); j++){
            int node = edges[i][j];
            outdegree[node]++;
        }
    }

    for(int i = 0; i < total_node; i = i + 1){
        cout<<"indegree of "<<i<<" = "<<outdegree[i]<<endl;
    }
}