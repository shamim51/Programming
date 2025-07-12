#include <iostream>

using namespace std;

int main()
{
    float v0,a,t,v,D;
    cout<<"Pleas Enter initial velocity(v0)=";
     cin>>v0;
    cout<<"Please Enter acceleration(a)=";
     cin>>a;
    cout<<"Please Enter elapsed time(t)=";
     cin>>t;


    v=v0+a*t;
    D=.5*(v0+v)*t;

    cout<<"For(v0="<<v0<<",a="<<a<<",t="<<t<<")"<<endl;
    cout<<"Displacement(D)="<<D;



    return 0;
}
