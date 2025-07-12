#include<iostream>
using namespace std;

bool sorted(double arr[], int size){
    if(size == 1) return true;
    else{
        for(int i = 0; i < size-1; i = i + 1){
            if((arr[i] > arr[i+1]) && (arr[i] != arr[i+1])){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    double arr[] = {1.5, 4.3, 7.0, 19.5, 25.1, 46.2};
    int x = sorted(arr, 6);
    cout<<x;
    return 0;
}