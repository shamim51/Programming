#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /*
    int T, N, i, j;
    cin>>T;
    for(i = 0; i < T; i = i + 1){
        cin>>N;
        for(j = 1; j <= N/2; j = j + 1){
            if(j*j == N){
                cout<<"YES";
                cout<<endl;
                break;
            }

        }
        if((j*j)!= N){
            cout<<"NO";
            cout<<endl;
        }
    }
    */

    int T, N, i, j;
    cin>>T;
    for(i = 0; i < T; i = i + 1){
        cin>>N;
        j = sqrt(N);
        if(j*j == N){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
