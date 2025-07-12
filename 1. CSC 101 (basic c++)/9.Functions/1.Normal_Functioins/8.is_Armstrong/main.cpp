#include <iostream>
using namespace std;

int is_Armstrong(int);

int main()
{
    int x, arm;

    cout<<"enter an integer:";
    cin>>x;

    arm = is_Armstrong(x);
    //cout<<"arm="<<arm;

    if(arm==1){
        cout<<"this is an armstrong number";
    }
    else{
        cout<<"this is not an armstrong number";
    }

    return 0;
}

int is_Armstrong(int k){

    int number, i, A, r;
    number = k;
    A=0;
    for(i = 0; k != 0; i = i + 1){
        r = k % 10;
        k = k / 10;

        A = A+(r*r*r);

    }
    if(A == pre){
        return 1;
    }
    else{
        return 0;
    }

}

