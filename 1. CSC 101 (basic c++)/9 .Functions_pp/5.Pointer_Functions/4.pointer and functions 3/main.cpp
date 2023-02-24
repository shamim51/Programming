#include <iostream>
using namespace std;

int add(int *, int *);

int main()
{
    int *x, *y, z;

    x=new int ;
    y=new int;

    *x=10;
    *y=20;

    z=add(x,y);

    cout<<*x<<" + "<<*y<<" = "<<z;

    return 0;
}

int add(int *a, int *b){
    int c;

    c=*a+*b;

    return c;

}
