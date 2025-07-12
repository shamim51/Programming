#include <iostream>

using namespace std;

int main()
{
    int x[10],i,n,average;
    float sum;

    cout<<"how many integers : ";
    cin>>n;

    sum=0;
    for(i=0;i<n;i=i+1){
        cout<<"x["<<i<<"]=";
        cin>>x[i];

        sum=sum+x[i];
    }
    /*for(i=0;i<n;i=i+1){
        sum=sum+x[i];

    }*/
    average=sum/n;
    cout<<"average of ";

    for(i=0;i<n;i=i+1){

        cout<<x[i]<<" ";
    }

    cout<<"is: "<<average;


    return 0;
}
