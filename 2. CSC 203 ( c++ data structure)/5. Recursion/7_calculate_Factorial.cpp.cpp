#include <iostream>

using namespace std;

int calculate_Factorial(int);

int main()
{
    int n;
    cout << "Enter the number for calculate factorial: ";
    cin>>n;
    cout<<calculate_Factorial(n);
    return 0;
}

int calculate_Factorial(int n){
    if(n == 0){
        return 1;
    }
    return n*calculate_Factorial(n-1);
}
