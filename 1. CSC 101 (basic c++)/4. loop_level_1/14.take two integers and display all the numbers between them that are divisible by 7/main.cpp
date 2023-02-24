#include <iostream>

using namespace std;

int main()
{
    int i,j,m,n;

    cout<<"enter first int : ";
    cin>>m;
    cout<<"enter end int : ";
    cin>>n;

    for(i=1;i<n-6;i=i+1){
        if(i%7==0){
            cout<<i<<",";
        }
    }
    for(j=i;j<=n;j++){

        if(j%7==0){
            cout<<j;
        }
    }

    return 0;
}
