#include <iostream>
using namespace std;

int power(int , int);

int main()
{
    int m, n;
    cout << "enter m^n:" << endl;
    cout<<"m:";
    cin>>m;
    cout<<"n:";
    cin>>n;
    cout<<power(m, n);
    return 0;
}

int power(int m, int n){
    //int pow;
    if(n == 0 ){
        //cout<<"1"<<" ";
        return 1;
    }
    return m * power(m, n -1);
    //cout<<pow<<" ";


}
