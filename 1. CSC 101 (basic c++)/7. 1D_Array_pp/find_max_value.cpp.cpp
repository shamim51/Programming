#include <iostream>

using namespace std;

int main()
{
    int x[10],i,n,max_ind;

    cout<<"enter the size of n(n<=10):";
    cin>>n;

    for(i=0;i<n;i=i+1){
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    max_ind=0;
    for(i=1;i<n;i=i+1){
        if(x[i]>x[max_ind]){
            max_ind=i;
        }
    }
    for(i=0;i<n;i=i+1){
        cout<<x[i]<<" ";
    }
    cout<<endl<<"max is : "<<x[max_ind];


    return 0;
}
