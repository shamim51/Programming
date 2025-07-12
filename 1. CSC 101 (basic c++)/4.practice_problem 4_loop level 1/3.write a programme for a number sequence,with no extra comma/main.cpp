#include <iostream>

using namespace std;

int main()
{
    int i,n;

    cout<<"how many numbers you want to sum : ";
    cin>>n;

    for(i=1;i<n;i++){

        cout<<i<<"+";
        sum=sum+i;
    }
    cout<<i;
    return 0;
}
