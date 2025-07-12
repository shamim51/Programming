#include <iostream>

using namespace std;

void swap_By_pointer(int *arrj, int *arrind){
    int temp;
    temp = *arrj;
    *arrj = *arrind;
    *arrind = temp;
}

void swap(int &temp, int &arrj, int &arrind){
        temp = arrj;
        arrj = arrind;
        arrind = temp;
}

int main()
{
    int arr[10];
    int ind, temp;
    for(int i = 0; i < 10; i = i + 1){
        arr[i] = rand()%100;
    }
    for(int i = 0; i < 10; i = i + 1){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     for(int j=0;j<10-1;j=j+1){
        ind = j;
        for(int i = j; i < 10; i = i + 1){
            if(arr[i] > arr[ind]){
                ind = i;
            }
        }
        //swap(temp, arr[j], arr[ind]);
        swap_By_pointer(&arr[j], &arr[ind]);
        // temp = arr[j];
        // arr[j] = arr[ind];
        // arr[ind] = temp;

    }
    
    for(int i = 0; i < 10; i = i + 1){
        cout<<arr[i]<<" ";
    }

    return 0;
}


