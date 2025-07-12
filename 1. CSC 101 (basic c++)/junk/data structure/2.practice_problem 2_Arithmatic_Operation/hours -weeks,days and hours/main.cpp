#include <iostream>

using namespace std;

int main()
{
    int h,w,d;

    cout << "enter hours=";
    cin>>h;

    w=(h/24)/7;
    //w=h/(24*7);
    cout<<w<<endl;

    h=h-(w*7*24);
    h=h%(7*24);
    cout<<h<<endl;

    d=h/24;
    cout<<d<<endl;

    h=h-(d*24);
    h=h%24;
    cout<<h<<endl;


    return 0;
}
