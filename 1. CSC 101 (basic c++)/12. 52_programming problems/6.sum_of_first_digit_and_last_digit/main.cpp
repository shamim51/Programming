#include <iostream>

using namespace std;

int main()
{
    int T, N, i, j, r, sum;
    cin>>T;
    for(i = 0; i < T; i = i + 1){
        cin>>N;
        sum = 0;
        for(j = 0; N!=0; j = j + 1){
            r = N % 10;
            N = N / 10;

            if(j==0||N==0){
                sum = sum + r;
            }
        }
        cout<<"Sum = "<<sum<<endl;
    }
    return 0;
}
