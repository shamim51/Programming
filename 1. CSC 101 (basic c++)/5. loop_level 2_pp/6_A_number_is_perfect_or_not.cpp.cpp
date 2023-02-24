#include <iostream>

using namespace std;

int main()
{
    int n,i,sum;

    cout<<"how many terms you want to add: ";
    cin>>n;

    sum=1;
    for(i=1;i<n;i=i+1){
        sum=sum+i;
        cout<<i<<"+";
    }
    cout<<i;

    sum=sum+i;

    cout<<"="<<sum;
    return 0;
}
