#include<iostream>

using namespace std;

int fact(int n){
    if(n==0 || n ==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main()
{
    int n;
    cout<<"enter the value for calculate factorial: ";
    cin>>n;
    if(fact(n)<=1000){
        cout<<fact(n);
    }
    else{
        cout<<"value is too big for print";
    }
    

    return 0;
}