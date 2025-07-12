#include <iostream>

using namespace std;


int hcf(int,int);

int main()
{

    int x,y,gcd;
    cout << "enter x:";
    cin>>x;
    cout<<"enter y:";
    cin>>y;

    gcd =hcf(x,y);
    cout<<gcd;


    return 0;
}

int hcf(int x,int y){

    int i;
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

    return i;

}
