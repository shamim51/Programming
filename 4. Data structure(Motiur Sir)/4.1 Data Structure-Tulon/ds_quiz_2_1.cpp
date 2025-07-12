#include<iostream>
using namespace std;
int sum = 0;

using namespace std;
void addPrimeRecursively(int arr[], int size){

    if(size < 1){
        cout<<sum;
        return;
    }
    if(arr[size-1] < 2){
        addPrimeRecursively(arr, size-1);
    }
    else if(arr[size-1] == 2){
        sum = sum + arr[size-1];
        addPrimeRecursively(arr, size-1);
        cout<<arr[size-1];
    }
    else{
        int prime = 1;
        for(int i = 2; i < arr[size-1]; i++){
            if(arr[size-1] % i == 0){
                prime = 0;
                break;
            }
        }
        if(prime == 1){
            sum = sum + arr[size-1];
            addPrimeRecursively(arr, size-1);
        }
        else{
            addPrimeRecursively(arr, size-1);
        }
    }

}

int main()
{
    // int arr[] = {3, 5, 1, 6, 8, 1, 13};
    // addPrimeRecursively(arr, 7);
    int i = 0;
    while(i != INT_MAX){
        cout<<i<<endl;
        i = i + 50;
    }
    return 0;
}