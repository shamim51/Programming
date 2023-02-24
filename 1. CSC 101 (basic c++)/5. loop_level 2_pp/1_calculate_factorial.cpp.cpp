#include <iostream>

using namespace std;

int main()
{
    int i,n,power;

    cout<<"enter value of n :";
    cin>>n;

    power=1;
    for(i=1;i<=n;i=i+1){
        power=power*i;
    }
    cout<<n<<"!="<<power;

    return 0;
}
