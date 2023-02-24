#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    int x, fac;

    cout << "enter x :";
    cin>>x;

    fac= factorial(x);

    cout<<fac;

    return 0;
}

int factorial(int x){

    int f,i;
    f=1;
    for(i=1;i<=x;i=i+1){

        f=f*i;
    }

    return f;
}
