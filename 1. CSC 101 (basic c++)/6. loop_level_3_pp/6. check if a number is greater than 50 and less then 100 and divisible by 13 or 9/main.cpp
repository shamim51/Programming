#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"enter an integer :";
    cin>>x;

    if(x>50 && x<100){
        if((x%5==0)|| (x%7==0) ){
            cout<<"yes";
        }
    }
    else{
        cout<<"no";
    }

    return 0;
}
