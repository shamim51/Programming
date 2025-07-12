#include <iostream>

using namespace std;

int main()
{
    int x[10],y[10],i,n;

    cout<<"enter the size :";
    cin>>n;

    for(i=0;i<n;i=i+1){

        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    for(i=0;i<n;i=i+1){

        y[n-1-i]=x[i];
    }

    cout<<&x[0]<<endl;
    cout<<&x[1]<<endl;
    cout<<&x[2]<<endl;
    cout<<&x[3]<<endl;
    cout<<&x[4]<<endl;
    cout<<&x[5]<<endl;
    cout<<&x[6]<<endl;
    cout<<&x[7]<<endl;
    cout<<&x[8]<<endl;
    cout<<&x[9]<<endl;
    cout<<"*****x*****"<<endl;
    for(i=0;i<n;i=i+1){
        cout<<x[i];
    }
    cout<<endl<<"*****y*****"<<endl;
    for(i=0;i<n;i=i+1){
        cout<<y[i];

    }


    return 0;
}
