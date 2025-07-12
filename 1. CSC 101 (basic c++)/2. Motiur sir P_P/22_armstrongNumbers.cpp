#include<iostream>
using namespace std;

void armstrong_Numbers(int n){
    long long int number = 2;
    int count = 0;
    for(int j = 0; j < n; j = j + 1){
        while(1){
            long long int sum, temp_Number;
            int r;
            temp_Number = number;
            sum = 0;
            for(int i = 0; temp_Number != 0; i = i + 1){
                r = temp_Number % 10;
                temp_Number = temp_Number / 10;

                sum = sum + (r*r*r);

            }
            if(sum == number){
                cout<<number<<" ";
                number = number + 1;
                break;
            }
            number = number + 1;
            
        }
        if(count == 1) return;
        if(j == (n-1)){
            j = j -1;
            count = count + 1;

        }

    }
}

int main()
{

    armstrong_Numbers(10);
    return 0;
}