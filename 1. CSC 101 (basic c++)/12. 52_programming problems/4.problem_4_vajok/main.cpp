#include <iostream>

using namespace std;

int main()
{
    int t, i, j, n;
    cin>>t;
    for(i = 1; i <= t ; i = i + 1){
        cin>>n;
        cout<<"Case "<<i<<":";
        for(j = 1; j <= n; j = j + 1){
            if(n % j==0){
                cout<<" ";
                cout<<j;
            }
        }
        cout<<endl;

    }

    return 0;
}
