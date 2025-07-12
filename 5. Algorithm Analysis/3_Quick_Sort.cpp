#include<iostream>

using namespace std;
int Partition(int A[], int p, int r){
    int temp;
    int x = A[r];
    int i = p-1;
    for(int j = p; j < r; j++){
        if(A[j] <= x){
            i++;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[i+1];
    A[i+1] = A[r];
    A[r] = temp;
    cout<<A[i+1]<<endl;
    return i+1;

}

void Quick_Sort(int A[], int p, int r){
    if(p < r){
        int q = Partition(A, p, r);
        Quick_Sort(A, p, q-1);
        Quick_Sort(A, q+1, r);
    }
}

int main()
{
    int arr[6] ={0, 5, 4, 2, 3, 1};
    cout<<"printing before sort: "<<endl;
    for(int i = 1; i <= 5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"printing after sort: "<<endl;
    Quick_Sort(arr, 1, 5);
    for(int i = 1; i <= 5; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}