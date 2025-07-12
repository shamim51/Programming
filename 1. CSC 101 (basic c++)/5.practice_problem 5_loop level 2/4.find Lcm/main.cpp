#include <iostream>

using namespace std;

int main()
{
    int i,x,y,lcm;

    cout<<"enter x :";
    cin>>x;
    cout<<"enter y :";
    cin>>y;

    if(x>y){
        i=x;
        x=y;
        y=i;
    }
    for(i=y;i<=x*y;i=i+1){
        if((i%x==0)&&(i%y==0)){
            break;
        }
        lcm=i;
    }
    cout<<"lcm of "<<x<<" and "<<y<<" is "<<i;
    return 0;
}
