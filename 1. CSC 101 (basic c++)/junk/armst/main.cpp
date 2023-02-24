#include <iostream>

using namespace std;

int main()
{
    int x, i, A, r;

    cout<<"enter x:";
    cin>>x;
    A=0;
    for(i=0;x!=0;i=i+1){

        r=x%10;
        x=x/10;

        A=A+(r*r*r);

    }
    cout<<A;

    return 0;
}
