#include<iostream>
using namespace std;

int secondIndexOf(int arr[], int size, int value){
    int count = 0;
    for(int i = 0; i < size; i = i + 1){
        if(arr[i] == value){
            count = count + 1;
            if(count == 2){
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 4, 5, 4};
    int x = secondIndexOf(arr, 11, 4);
    cout<<x;

    return 0;
}