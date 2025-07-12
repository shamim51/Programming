#include<iostream>

using namespace std;

void  printStars(int n){
    if(n == 0) return;
    cout<<"*";
    printStars(n-1);
}

int main()
{
    printStars(5);
    
    return 0;
}