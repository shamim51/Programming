#include <iostream>
using namespace std;

void radixSort(int* A, int size);
void countSort(int* A, int size, int place);

int main()
{
    int A[7] = {6, 2, 9, 7, 1, 2, 3};
    int size = 7;
    
    cout << "Before Radix Sort:\n";
    for(int i = 0; i < size; i++){
        cout << A[i] << " ";
    }
    cout << "\n";
    
    radixSort(A, size);
    
    cout << "After Radix Sort:\n";
    for(int i = 0; i < size; i++){
        cout << A[i] << " ";
    }
    cout << "\n";
    
    return 0;
}

void radixSort(int* A, int size){
    int max = A[0];
    for(int i = 1; i < size; i++){
        if(A[i] > max){
            max = A[i];
        }
    }
    
    for(int place = 1; max / place > 0; place *= 10){
        countSort(A, size, place);
    }
}

void countSort(int* A, int size, int place){
    int maxNum = A[0];
    for(int i = 1; i < size; i++){
        if(A[i] > maxNum){
            maxNum = A[i];
        }
    }
    
    int C[10] = {0};
    
    for(int i = 0; i < size; i++){
        C[(A[i] / place) % 10]++;
    }
    
    for(int i = 1; i < maxNum + 1; i++){
        C[i] += C[i - 1];
    }
    
    int B[size];
    for(int i = size - 1; i >= 0; i--){
        C[A[i]]--;
        B[C[A[i]]] = A[i];
    }
    
    for(int i = 0; i < size; i++){
        A[i] = B[i];
    }
}