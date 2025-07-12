#include <iostream>

using namespace std;

int main()
{
    int *x,*y;

    x=new int;
    y=new int;

    *x=10;
    *y=20;

    cout<<"location of x is:"<<x<<" and value of x is: "<<*x<<endl;
    cout<<"location of Y is:"<<y<<"and value of y is:"<<*y;
    return 0;
}
