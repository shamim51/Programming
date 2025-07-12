#include <iostream>

using namespace std;

int main()
{
    int i,j,n;

    cout<<"enter the shapes size : ";
    cin>>n;

    for(i=0;i<n;i++){
        for(j=n-i;j>0;j=j-1){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
