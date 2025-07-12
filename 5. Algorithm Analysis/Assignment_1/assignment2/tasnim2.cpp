#include<iostream>

using namespace std;

void reverse_position(int start, int end){
    int size;
    int temp;
    cout<<"enter the size of the array: ";
    cin>>size;
    int j = 0;
    for(int i = start; i < (start-end)/2; i++){

        temp = arr[i];
        arr[i + j] = arr[end - j]
        arr[end-j] = temp;
        j++;
    }
}

int main()
{
    
    
    return 0;
}