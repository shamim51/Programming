#include<iostream>

using namespace std;

int main()
{
    int n;
    int m;
    
    cout<<"Number of Nodes and edges"<<endl;
    cin>>n>>m;
    
    cout<<"Pair of adjacent nodes"<<endl;
    // cin>>m;

    int **Matrix = new int *[n];
    for(int i = 0; i < n; i ++){
        Matrix[i] = new int[n];
    }

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++){
            Matrix[i][j] = 0;;
        }
    }

    for(int i = 0; i < m; i ++){
        int j, k;
        cin>>j>>k;
        Matrix[j][k] = 1;
        Matrix[k][j] = 1;
    }
    
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++){
            cout<<Matrix[i][j]<<" ";
            
        }
        cout<<endl;
    }
    
    return 0;
}