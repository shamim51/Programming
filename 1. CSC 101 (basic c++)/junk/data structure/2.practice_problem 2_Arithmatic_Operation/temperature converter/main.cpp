#include <iostream>

using namespace std;

int main()
{
    float F,C,K;

    cout << "enter temperature input in Fahrenheit=";
    cin>>F;

    C=5*(F-32)/9;
    K=C+273;

    cout<<C<<" celcius"<<endl;
    cout<<K<<" kelvin";
    return 0;
}
