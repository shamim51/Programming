#include <iostream>

using namespace std;

int main()
{
    int i,j,n;

    cout<<"enter the shapes size : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j=j+1){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
