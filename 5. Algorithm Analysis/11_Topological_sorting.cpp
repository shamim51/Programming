#include <iostream>
#include <vector>
#include <list>
 
using namespace std;
 
int total_node, total_edge;
 
vector<bool>visited(100,false);
vector<int> edges[100];
vector<int>start_Time(100, -1);
vector<int>end_Time(100, -1);

list<int> mylist;

int time = 0;
 
void visit(int current_node)
{
    time++;
    start_Time[current_node] = time;
    for(int i=0; i<edges[current_node].size();i++)
    {
        int new_node = edges[current_node][i];
        if(visited[new_node]==false) {
            visited[new_node] = true;
            visit(new_node);
        }
    }
    time++;
    mylist.push_front(current_node);
}
 
int main()
{
    cin>>total_node>>total_edge;
 
    int a,b;
    for(int i=0; i<total_edge; i++)
    {
        cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    for(int i=0;i<total_node;i++)
    {
        if(visited[i]==false) {
            int starting_node = i;
            visited[starting_node] = true;
            visit(starting_node);
        }
    }
 
    for (auto it = mylist.begin(); it !=mylist.end(); ++it){
        cout <<*it<<" ";
    }
    
}
