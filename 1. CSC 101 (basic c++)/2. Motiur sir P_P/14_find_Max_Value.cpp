#include<iostream>
using namespace std;

int maxValue(int a[], int size){
    int max = INT_MIN;
    for(int i = 0; i < size; i = i + 1){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {17, 7, -1, 26, 3, 9};
    int x = maxValue(arr, 6);
    cout<<x; 
    
    return 0;
}