#include <iostream>
using namespace std;

void print_fibonacchi(int);

int main()
{
    int n;

    cout<<"how many fibonacci number: ";
    cin>>n;

    print_fibonacchi(n);


    return 0;
}
void print_fibonacchi(int n){

    int i,f1,f2,f3;

    f1=0;
    f2=1;

    cout<<f1<<" "<<f2<<" ";

    for(i=3;i<=n;i=i+1){

        f3=f2+f1;

        cout<<f3<<" ";

        f1=f2;
        f2=f3;

    }




}
