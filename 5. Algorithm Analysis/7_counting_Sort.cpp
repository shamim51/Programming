#include <iostream>
using namespace std;

void counting_Sort(int* A, int* B, int k);

int main()
{
    int k = 5;
    int A[k] = {4, 5, 9, 2, 1,};
    int B[k];

    cout << "Before Sort:"<<endl;
    for(int i = 0; i < k; i++){
        cout << A[i] << " ";
    }
    cout <<endl;
    
    counting_Sort(A, B, k);
    
    cout << "After Sort:"<<endl;
    for(int i = 0; i < k; i++){
        cout << B[i] << " ";
    }
    
    return 0;
}

void counting_Sort(int* A, int* B, int k){
    int Max = A[0];
    for(int i = 1; i < k; i++){
        if(A[i] > Max){
            Max = A[i];
        }
    }
    int C[Max] = {0};
    
    for(int i = 0; i < k; i++){
        C[A[i]] = C[A[i]] + 1;
    }
    
    for(int i = 1; i < Max + 1 ; i++){
        C[i] = C[i] + C[i - 1];
    }
    
    for(int i = k - 1; i >= 0; i--){
        C[A[i]]--;
        B[C[A[i]]] = A[i];
       
    }
}


