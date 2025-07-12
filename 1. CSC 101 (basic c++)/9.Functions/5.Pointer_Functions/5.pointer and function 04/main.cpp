#include <iostream>

using namespace std;

void add(int *, int *, int *);

int main()
{
    int x, y, z;
    x=10;
    y=20;
    add(&x,&y,&z);

    cout<<x<<" + "<<y<<" = "<<z;

    return 0;
}

void add(int *a, int *b, int *c){

    *c=*a+*b;

}
