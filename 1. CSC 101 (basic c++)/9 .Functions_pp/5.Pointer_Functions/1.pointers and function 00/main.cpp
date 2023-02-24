#include <iostream>
using namespace std;

int add(int, int);

int main()
{
    int x,y,z;

    cout << "enter x:";
    cin>>x;
    cout<<"enter Y:";
    cin>>y;

    z=add(x,y);

    cout<<x<<"+"<<y<<"="<<z;

    return 0;
}
int add(int a,int b){

    int c;
    c=a+b;

    return c;
}
