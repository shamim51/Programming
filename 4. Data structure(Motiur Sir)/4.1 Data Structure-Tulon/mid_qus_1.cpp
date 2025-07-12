#include<iostream>

using namespace std;

int collapseArray(int arr[], int size){
    if(size < 1) return 0;

    return arr[size-1] + collapseArray(arr, size-1);
}

int main()
{
    int arr[] = {3, 4, 5, 6};

    cout<<collapseArray(arr, 4);
    return 0;
}