#include<iostream>

using namespace std;


int main()
{
    int i = 10;
    int *x = &i;
    int *y = x;
    //cout<<**x;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<" i = "<<&i;
    return 0;
}