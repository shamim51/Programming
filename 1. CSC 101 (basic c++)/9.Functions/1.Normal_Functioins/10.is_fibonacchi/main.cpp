#include <iostream>
using namespace std;

void print_fibonacchi(int);
int is_fibonacchi(int);

int main()
{
    int n, f;

    cout<<"enter the integer you want to check : ";
    cin>>n;

    f=is_fibonacchi(n);

    if(f==f){
        cout<<n<<" is a fibonacchi number";
    }
    else{
        cout<<n<<" is not a fibonacchi number";
    }

    return 0;
}
int is_fibonacchi(int n){

    int i,f1,f2,f3,flag;

    f1=0;
    f2=1;

    flag=0;

    //cout<<f1<<" "<<f2<<" ";

    for(i=3;i<=n;i=i+1){

        f3=f2+f1;

        //cout<<f3<<" ";

        if(f3==n){
            flag=1;
            break;
        }

        f1=f2;
        f2=f3;

    }
    return flag;

}
