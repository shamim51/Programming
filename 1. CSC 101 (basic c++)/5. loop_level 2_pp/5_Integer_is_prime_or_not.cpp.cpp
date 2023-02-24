#include <iostream>

using namespace std;

int main()
{
    int x,i,isprime;

    cout<<"enter an integer:";
    cin>>x;

    isprime=1;
    for(i=2;i<x;i=i+1){
        if(x%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime==1){
        cout<<x<<" is prime";
    }
    else{
        cout<<x<<" is not prime";
    }
    return 0;
}
