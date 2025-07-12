#include <iostream>
using namespace std;

bool check_Prime(int, int);

int main()
{
    int n;
    cout << "Enter the number: ";
    cin>>n;
    //check_Prime(n, 2);
    //cout<<check_Prime
    if(check_Prime(n, 2)) cout<<n<<" is a prime number";
    if(!check_Prime(n, 2)) cout<<n<<" is not a prime number";
    return 0;
}

bool check_Prime(int number, int divisor){
    if(number == divisor){
        cout<<"no"<<" ";
        return true;
    }

    if(number%divisor == 0){
        cout<<"yes"<<" ";
        return false;
    }
    check_Prime(number, divisor+1);

}
