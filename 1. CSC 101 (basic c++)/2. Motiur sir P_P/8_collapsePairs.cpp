#include<iostream>
using namespace std;

void collapsePairs(int arr[], int size){
    int sum;
    for(int i = 1; i < size; i = i + 2){
        sum = arr[i] + arr[i-1];
        if(sum % 2 == 0){
            arr[i] = 0;
            arr[i-1] = sum;
        }
        else{
            arr[i] = sum;
            arr[i-1] =  0;
        }
    }
}

int main()
{
    int arr [] = {7, 2, 8, 9, 4, 22, 7, 1, 9, 10};
    collapsePairs(arr, 10);
    for(int i = 0; i < 10; i = i + 1){
        cout<<arr[i]<<" ";
    }
    return 0;
}