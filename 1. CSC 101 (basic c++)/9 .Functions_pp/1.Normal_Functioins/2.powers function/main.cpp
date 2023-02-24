#include <iostream>

using namespace std;

float power(float,int);

int main()
{
    float x,pow;
    int y;
    cout << "enter x :";
    cin>>x;
    cout<<"enter y:";
    cin>>y;
    pow= power(x,y);

    cout<<pow;

    return 0;
}

float  power(float x,int y){

    float p;
    int i;
    p=1;
    for(i=0;i<y;i=i+1){

        p=p*x;
    }
    return p;
}
