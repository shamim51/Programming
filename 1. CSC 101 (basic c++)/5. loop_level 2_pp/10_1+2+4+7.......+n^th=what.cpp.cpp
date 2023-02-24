#include <iostream>

using namespace std;

int main()
{
    int n,i,sum,add;

    cout<<"how many terms you want to add: ";
    cin>>n;

    add=0;
    sum=1;
    for(i=0;i<n-1;i=i+1){
        sum=sum+i;
        cout<<sum<<"+";
        add=add+sum;
    }


    sum=sum+i;
    cout<<sum;
    add=add+sum;

    cout<<"="<<add;
    return 0;
}
