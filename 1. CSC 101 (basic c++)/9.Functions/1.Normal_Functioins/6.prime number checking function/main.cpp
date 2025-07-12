#include <iostream>
using namespace std;

int isprime(int);

int main()
{
    int x,i;
    cout<<"enter a number: ";
    cin>>x;

    for(i=3;i<x;i=i+1){
        if(isprime(i)==1){
            cout<<i<<" "<<endl;
        }
    }


    return 0;
}

int isprime(int z){
    int p,i;
    p=1;
    for(i=2;i<z;i=i+1){
        if(z%i==0){
            p=0;
        }
    }
    return p;

}
