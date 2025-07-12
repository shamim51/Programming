#include <iostream>

using namespace std;

int main()
{
    int x[10],i,n,y,count;

    cout<<"enter the size of n(n<=10):";
    cin>>n;

    for(i=0;i<n;i=i+1){
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    cout<<"enter y: ";
    cin>>y;

    count=0;
    for(i=0;i<n;i=i+1){
        if(x[i]==y){
            count=count+1;
        }

    }
    /*for(i=0;i<n;i=i+1){
        cout<<x[i]<<" ";
    }*/

        cout<<endl<<y<<" is here "<<count<<" times";





    return 0;
}
