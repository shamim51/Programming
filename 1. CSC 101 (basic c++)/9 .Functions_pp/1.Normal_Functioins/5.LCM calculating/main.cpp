#include <iostream>
using namespace std;

int lcm(int, int);

int main()
{
    int x, y, l;

    cout<<"enter x: ";
    cin>>x;
    cout<<"enter y: ";
    cin>>y;

    l=lcm(x,y);

    cout<<"lcm is:"<<l;

    return 0;
}
int lcm(int x, int y){

    int i, lcm;

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
    return lcm;

}
