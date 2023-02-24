#include<iostream>

using namespace std;
int findDigits(int n) {
    int counter = 0;
    int m = n;
    while(m!=0){
        cout<<"counter = "<<counter<<endl;
        int r = m%10;
        m = m/10;
        if(r!=0){
             if(n%r == 0) counter++;
        }
       
    }
    return counter;
}

int main()
{
    cout<<findDigits(1012);
    
    return 0;
}