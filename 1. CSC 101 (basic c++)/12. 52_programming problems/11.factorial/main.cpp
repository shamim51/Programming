#include <iostream>

using namespace std;

int main()
{
    int T, N, i, j;
    long long int fact;
    cin>>T;
    for(i = 1; i <= T; i = i + 1){
        cin>>N;
        fact = 1;
        for(j = 1; j <= N; j = j + 1){
            fact = fact*j;
        }
        cout<<fact<<endl;
    }
    return 0;
}
