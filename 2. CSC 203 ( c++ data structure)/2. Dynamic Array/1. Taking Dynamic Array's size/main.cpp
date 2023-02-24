#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for( int i = 0; i < n; i = i + 1){
        arr[i]= rand()%10;
    }
    for ( int i = 0 ; i < n; i = i + 1){
        cout<<arr[i]<<" ";
    }
    return 0;
}
