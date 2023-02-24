#include <iostream>

using namespace std;

int main()
{
    int t, i, j, k, n;
    cin>>t;
    for(i = 1; i <= t ; i = i + 1){
        cin>>n;
        for(j = 0; j < n; j = j + 1){
            for(k = 0; k < n; k = k + 1){
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;

    }

    return 0;
}
