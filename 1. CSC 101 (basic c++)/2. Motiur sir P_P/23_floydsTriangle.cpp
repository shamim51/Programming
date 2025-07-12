#include<iostream>
using namespace std;

void floydsTriangle(int K){
    int x = 0;
    for(int i = 1; i <= K; i = i + 1){
        for(int j = 0; j < i; j = j + 1){
            x = x + 1;
            cout<<x<<" ";
        }
        cout<<endl;
    }
} 

int main()
{
    floydsTriangle(5);
    return 0;
}