#include <iostream>

using namespace std;

int main()
{
    int y,m,w,d;

    cout<<"enter days=";
    cin>>d;


    y=d/365;

    d=d-(365*y);
    d=d%365;

    m=d/30;

    d=d%30;


    cout<<y<<" years "<<m<<" months "<<d<<" days";
    return 0;
}
