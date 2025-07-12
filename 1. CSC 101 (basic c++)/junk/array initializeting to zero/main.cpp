#include <iostream>

using namespace std;

int main()
{
    int x[10], i, j;

    for(j=0;j<10;j=j+1){
        x[j]=0;
    }

    for(i=0;i<10;i=i+1){
        cout<<x[i]<<" ";
    }
    return 0;
}
