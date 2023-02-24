#include <iostream>

using namespace std;

int main()
{
    int x[10],i,n,y,ismember;

    cout<<"enter the size of n(n<=10):";
    cin>>n;

    for(i=0;i<n;i=i+1){
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    cout<<"enter y: ";
    cin>>y;

    ismember=0;
    for(i=0;i<n;i=i+1){
        if(x[i]==y){
            ismember=1;
        }

    }
    /*for(i=0;i<n;i=i+1){
        cout<<x[i]<<" ";
    }*/
    if(ismember==1){
        cout<<endl<<"y is here";

    }



    return 0;
}
