#include <iostream>
using namespace std;

void print_Same_Value(int, int);

int main()
{
    int m, n;
    cout<<"Enter the value you want to print: ";
    cin>>m;
    cout<<"How many time you want to print the value";
    cin>>n;
    print_Same_Value(m, n);
    return 0;
}

void print_Same_Value(int m, int n){

    if(n == 0){
        return;
    }
    cout<<m<<" ";
    print_Same_Value(m, n-1);

}
