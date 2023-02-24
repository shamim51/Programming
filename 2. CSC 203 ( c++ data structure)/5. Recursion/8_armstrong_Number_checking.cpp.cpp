#include <iostream>
#include <cmath>

using namespace std;

bool check_Armstrong(int, int , int &);

int main()
{
    int number, sum;
    sum = 0;
    cout << "Enter the number: ";
    cin>>number;
    //cout<<check_Armstrong(number, number, sum);
    if(check_Armstrong(number, number, sum)){
        cout<<number<<" is an Armstrong number";
    }
    else{
        cout<<number<<" is not an Armstrong number";
    }
    return 0;
}

bool check_Armstrong(int number, int n, int &sum){
    if(n == sum){
        return true;
    }
    if(number==0){
        return false;
    }
    sum = sum + pow(number%10,3);
    number = number/10;
    check_Armstrong(number, n, sum);

}
