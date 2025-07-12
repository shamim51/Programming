#include <iostream>

using namespace std;

int main()
{
    int x[10],i,n,max;

    cout<<"enter the size of n(n<=10):";
    cin>>n;

    for(i=0;i<n;i=i+1){
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    max=x[0];
    for(i=0;i<n;i=i+1){
        if(x[i]>max){
            max=x[i];
        }
    }
    for(i=0;i<n;i=i+1){
        cout<<x[i]<<" ";
    }
    cout<<endl<<"max is : "<<max;


    return 0;
}
