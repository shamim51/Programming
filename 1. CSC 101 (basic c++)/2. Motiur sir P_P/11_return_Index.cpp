#include<iostream>
using namespace std;

int indexOf(int arr[], int size, int value){
    for(int i = 0; i < size; i = i + 1){
        if(arr[i] == value){
            return i;
        }
    }
    return -1;
}

int main()
{
    int list[] = {4, 7, -9, 14, 8, 39, 42, 8, 19, 20};
    int x = indexOf(list, 10, 8);
    cout<<x;
    
    return 0;
}