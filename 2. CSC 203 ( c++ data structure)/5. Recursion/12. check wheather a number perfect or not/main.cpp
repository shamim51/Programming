#include <iostream>
using namespace std;

void isPerfect(int,int, int&);

int main()
{
    int i;
    long long int checker[100000];
    for(i = 1; i <= 100000; i =i + 1){
        checker[i-1]=i;
    }
    int sum, number;
    sum = 0;
    for(i = 1; i <= 100000; i = i + 1){
        sum = 0;
        isPerfect(checker[i-1], 1, sum);
        if(sum == checker[i-1])cout<<checker[i-1]<<" is perfect."<<endl;
        //if(isPerfect(checker[i-1], 1, sum)) cout<<checker[i-1]<<" is perfect........................perfect........................perfect"<<endl;
        //else cout<<checker[i-1]<<" ";
    }
    /*cout << "enter the number: ";
    cin>>number;
    if(isPerfect(number, 1, sum)) cout<<number<<" is a perfect number";
    if(!(isPerfect(number, 1, sum))) cout<<number<<" is not a perfect number";
    */
    return 0;
}

void isPerfect(int number,int i, int &sum){
    if(i == number){
        return;
    }
    /*

    if(sum==number){
        return true;*/

    if(number%i==0){
        sum = sum + i;
    }
    i = i + 1;
    isPerfect(number, i, sum);

}
