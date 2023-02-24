#include<iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    if(N % 5 == 0){
        if(N % 11 == 0){
            cout<<"BOTH";
        }
        else{
            cout<<"ONE";
        }
    }
    else{
        cout<<"NONE";
    }
    
    return 0;
}