#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"enter an integer :";
    cin>>x;

    if(x%5==0){
        if(x%7==0){
            cout<<"Divisible by 5 or 7";
        }
        else{
            cout<<"Divisible by 5 or 7";
        }
    }
    else{
        if(x%7==0){
            cout<<"divisible by 5 or 7";
        }
        else{
            cout<<"not divisible by 5 or 7";
        }
    }

    return 0;
}
