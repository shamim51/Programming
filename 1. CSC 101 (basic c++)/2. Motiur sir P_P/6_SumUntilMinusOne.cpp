#include<iostream>
using namespace std;

int main()
{
    int number, sum;
    sum = 0;
    number = 0;
    while(number != -1){
        sum = sum + number;
        cout<<"Type a number: ";
        cin>>number;
    }
    cout<<"Sum is "<<sum;
    return 0;
}