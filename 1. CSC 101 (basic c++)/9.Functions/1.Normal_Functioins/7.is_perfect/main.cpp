//program for checking a number is perfect or not
#include <iostream>
using namespace std;

int is_perfect(int);

int main()
{
    int x, p;

    cout<<"enter an integer:";
    cin>>x;


    if(is_perfect(x)==1){

        cout<<x<<" is a perfect number";
    }
    else{
        cout<<x<<" is not a perfect number";
    }

    return 0;
}

int is_perfect(int x){

    int i, sum;
    sum=0;
    for(i=1;i<x;i=i+1){
        if(x%i==0){
            sum=sum+i;
        }
    }
    if(sum==x){
        return 1;
    }
    else{
        return 0;
    }

}
