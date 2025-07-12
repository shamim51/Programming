#include <iostream>

using namespace std;

int main()
{
    int i,n,x;
    float average,sum;

    cout<<"how many numbers you want to add : ";
    cin>>n;

    sum=0;
    for(i=1;i<=n;i++){
        cout<<"enter ("<<i<<") : ";
        cin>>x;

        sum=sum+x;

    }
    average=sum/n;
    cout<<"sum is : "<<sum;

    cout<<"average is : "<<average;

    return 0;
}
