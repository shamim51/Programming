#include <iostream>
using namespace std;

void is_prime(int *, int *);

int main()
{
    int x, flag;

    cout<<"enter x: ";
    cin >>x;

    is_prime(&x,&flag);

    if(flag==1){
        cout<<x<<" is prime ";

    }
    else{
        cout<<x<<" is not prime ";
    }

    return 0;
}

void is_prime(int *a, int *b){

    int i;

    *b=1;
    for(i=2; i<*a; i=i+1){
        if(*a % i == 0){
            *b=0;
            break;
        }

    }


}
