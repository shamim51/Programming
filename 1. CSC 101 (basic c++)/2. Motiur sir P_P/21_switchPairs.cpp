#include<iostream>
using namespace std;

void switchPairs(string arr[], int size){
    string temp;
    for(int i = 1; i < size; i = i + 2){
        temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
    }
}

int main()
{
    string arr[] = {"a", "bbb", "c", "ddd", "ee", "f", "g"};
    cout<<"*****Before switch*****"<<endl;
    for(int i = 0; i < 7; i = i + 1){
        cout<<arr[i]<<" ";
    }
    
    switchPairs(arr, 7);

    cout<<endl<<"****After switch******"<<endl;
    for(int i = 0; i < 7; i = i + 1){
        cout<<arr[i]<<" ";
    }

    return 0;
}