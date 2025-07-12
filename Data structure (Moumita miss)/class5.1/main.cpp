#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter x: ";
    cin>>x;

    /*if(x % 2 == 0){
        cout<<x<<" is even";
    }
    else{
        cout<<x<<" is odd";
    }*/

    /*if(x == 0){
        cout<<"neither positive or negetive";
    }
    else if(x > 0 ){
        cout<<x<<"is positive";
    }
    else{
        cout<<x<<"is negetive";
    }*/

    if(x%5 == 0){ //or operator
        cout<<x<<"is divisible by 5 or 7";
    }
    else if(x%7 == 0){
        cout<<x<<"is divisible by 5 or 7";
    }
    else{
        cout<<"not divisible by 5 or 7";
    }

    return 0;
}
