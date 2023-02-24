#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"enter the number : ";
    cin>>x;
    if(x>0){
        cout<<"the number is positive";
    }
     else if(x<0){
        cout<<"the number is negetive";
    }
    else{
        cout<<"the number is neither positive nor negetive";
    }
    return 0;
}
