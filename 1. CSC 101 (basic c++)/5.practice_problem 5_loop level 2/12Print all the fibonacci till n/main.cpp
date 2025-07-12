#include <iostream>

using namespace std;

int main()
{
    int n,i,f1,f2,f3;

    cout<<"how many fibonacci number: ";
    cin>>n;

    f1=0;
    f2=1;

    cout<<f1<<" "<<f2<<" ";

    for(i=3;i<=n;i=i+1){

        f3=f2+f1;

        cout<<f3<<" ";

        f1=f2;
        f2=f3;

    }


    return 0;
}
