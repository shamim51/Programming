#include <iostream>

using namespace std;

int main()
{
    int i,x,y,power;

    cout<<"enter value of the x :";
    cin>>x;
    cout<<"enter the value of y :";
    cin>>y;

    power=1;
    for(i=1;i<=y;i=i+1){
        power=power*x;
    }
    cout<<x<<"^"<<y<<"="<<power;

    return 0;
}
