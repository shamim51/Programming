#include <iostream>

using namespace std;

int add(int,int);

int main()
{
    int x,y,r;
    x=10;
    y=20;
    r=add(x,y);
    cout<<r;
    return 0;
}

int add(int i,int j){
    int c;
    c=i+j;


    return c;

}
