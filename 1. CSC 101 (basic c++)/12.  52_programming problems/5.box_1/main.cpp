#include <iostream>

using namespace std;

int main()
{
    int T, i, j, k, N;
    cin>>T;
    for(i = 1; i <= T ; i = i + 1){
        cin>>N;
        for(j = 0; j < N; j = j + 1){
            for(k = 0; k < N; k = k + 1){
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;

    }

    return 0;
}
