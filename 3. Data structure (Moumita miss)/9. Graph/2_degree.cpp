#include <iostream>
#include <vector>
 
using namespace std;
 
int main ()
{
    int degree;
    int total_node, total_edge;

    cout<<"enter total node and edges:"<<endl;
    cin>>total_node>>total_edge;
    vector<int> edges[total_node];
 
    int a,b;
    for(int i=0; i<total_edge; i++)
    {
        cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
 
    for(int i=0; i<total_node; i++) {
        cout<< "adjacency list for "<<i<<endl;
        //cout<<"degree for Node"<<i<<" ="<<edges[i].size()<<endl;
        for(int j=0; j<edges[i].size(); j++) {
            cout<<edges[i][j]<< " ";
        }
        cout<<endl;
    }
}