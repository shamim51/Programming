#include <iostream>

using namespace std;

int main()
{
    int i,j,m,n,isprime;

    cout<<"enter first integer : ";
    cin>>m;

    cout<<"enter second integer : ";
    cin>>n;

    if(m==1){
        cout<<m<<" is prime"<<endl;
        m=m+1;
    }
    if(m==2){
        cout<<m<<" is prime"<<endl;
        m=m+1;
    }

    for(i=m;i<=n;i=i+1){
        isprime=1;
        for(j=2;j<i;j=j+1){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
        cout<<i<<" is prime"<<endl;
    }
    else{
        cout<<i<<" is not prime"<<endl;

    }

    }

    return 0;
}
