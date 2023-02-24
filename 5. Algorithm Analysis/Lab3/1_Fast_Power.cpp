#include<iostream>

using namespace std;

float Fast_Power(int x, int n){
    int y;
    if(n == 0) return 1;
    // else if(n==1){
    //     return x;
    // }
    else if(n % 2 == 0){
        y = Fast_Power(x, n/2);
        return y*y;
    }
    else{
        y = Fast_Power(x, n/2);
        return y*y*x;
    }
}

int main()
{
    float x;
    int n;
    cout<<"x^n: ";
    cin>>x>>n;
    cout<<Fast_Power(x, n);
    
    return 0;
}