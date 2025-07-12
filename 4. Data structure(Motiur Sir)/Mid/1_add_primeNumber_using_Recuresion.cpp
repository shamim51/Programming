#include<iostream>

using namespace std;

int sum = 0;

void addPrimeRecursively(int arr[], int size){
    if(size == 0){
        cout<<"returning"<<endl;
        return;
    }
    else if(arr[size-1] == 0 || arr[size-1] ==1){
        sum = sum + 0;
        cout<<"sum = "<<sum<<endl;
        // addPrimeRecursively(arr, size-1);
    }
    else if(arr[size-1] == 2){
        sum = sum + 2;
        // addPrimeRecursively(arr, size-1);
    }
    else{
        bool b = true;
        for(int i = 2; i <arr[size-1]; i++ ){
            if(arr[size-1] % i == 0){
                b = false;
                break;
            }
        }
        if(b!= false){
            sum = sum + arr[size-1];
        }
        cout<<"sum = "<<sum<<endl;
    }
    addPrimeRecursively(arr, (size-1));

}

int main()
{

    int arr[] = {1, 6, 8};
    addPrimeRecursively(arr, 3);
    // addPrimeRecusively(arr, 7);

    cout<<sum;
    
    
    return 0;
}