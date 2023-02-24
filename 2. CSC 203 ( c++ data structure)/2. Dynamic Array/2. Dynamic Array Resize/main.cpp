#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;

    int *arr = new int [n];
    for(int i = 0; i < n; i = i + 1){
        arr[i] = rand()% 10;
    }
    int *temp = arr;

    int m;
    cout<<"enter m:";
    cin>>m;
    arr = new int [m];
    for(int i = 0; i < n; i = i + 1){
        arr[i] = temp[i];
    }
    delete temp;
    for (int i = n; i < m; i = i + 1){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    for(int i = 0; i < m; i = i + 1){
        cout<<arr[i]<<" ";
    }
    return 0;
}
