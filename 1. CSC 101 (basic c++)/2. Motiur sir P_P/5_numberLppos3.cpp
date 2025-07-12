#include<iostream>
using namespace std;

int main()
{
    int x = 1;
    for(int i = 0; i < 5; i = i + 1){
        for(int j = 5; j > 0; j = j - 1){
            if(j == x){
                cout<<j;
                x = x + 1;
            }
            else{
                cout<<"."<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}