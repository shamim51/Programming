#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"how many row and column you want to print: ";
    cin>>n;
    for (int i = 0; i < 5; i = i + 1)
    {
        for (int j = 5; j > i; j = j - 1)
        {
            cout << "*";
        }
        for (int k = 0; k < i; k = k + 1)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j = j + 1)
        {
            cout << " ";
        }
        for (int j = 5; j > i; j = j - 1)
        {
            cout << "*";
        }

        cout << endl;
    }
    for(int i = 0; i < 5; i = i + 1){
        for(int j = 0; j <= i; j = j + 1){
            cout<<"*";
        }
        for(int j = 4; j > i; j = j -1){
            cout<<" ";
        }
        for(int j = 4; j > i; j = j -1){
            cout<<" ";
        }
        for (int j = 0; j <= i; j = j + 1)
        {
            cout << "*";
        }
        cout<<endl;
    }
    return 0;
}
