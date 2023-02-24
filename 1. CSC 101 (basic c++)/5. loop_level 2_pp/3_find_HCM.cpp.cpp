#include <iostream>

using namespace std;

int main()
{
    int i,x,y;

    cout<<"enter x :";
    cin>>x;
    cout<<"enter y :";
    cin>>y;

    if(x>y){
        i=x;
        x=y;
        y=i;
    }
    for(i=x;i>0;i=i-1){
        if((x%i==0)&&(y%i==0)){
            break;
        }
    }
    cout<<"hcf of "<<x<<" and "<<y<<" is "<<i;
    return 0;
}
