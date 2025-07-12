#include<iostream>
using namespace std;

int numUnique(int arr[], int size){
    int count = 1;
    for(int i = 0; i < size-1; i = i + 1){
        if(arr[i] != arr[i+1]){
            count = count + 1;
        }
    }
    return count;
}

int main()
{
    int x;
    int arr[] = {5, 7, 7, 7, 8, 22, 22, 23, 31, 35, 35, 40, 40, 40, 41};
    x = numUnique(arr, 15); 
    cout<<x;
    
    return 0;
}