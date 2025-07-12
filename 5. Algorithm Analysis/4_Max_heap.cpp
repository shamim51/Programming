#include <iostream>
 
using namespace std;
 
void heapify(int A[], int heap_size, int i)
{
    int largest = i; 
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < heap_size && A[l] > A[largest])
        largest = l;
 
    if (r < heap_size && A[r] > A[largest])
        largest = r;
    if (largest != i) {
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;
        heapify(A, heap_size, largest);
    }
}
 
void build_Max_Heap(int A[], int size){
    for(int i = (size/2) - 1; i>= 0; i--){
        heapify(A, size, i);
    }
}
 
    
 

int main()
{
    int A[] = { 15, 6, 3, 5, 7, 12};
    int n = sizeof(A) / sizeof(A[0]);
 
    build_Max_Heap(A, n);
 
    cout << "afete Max heap array is:"<<endl;

    for (int i = 0; i < n; ++i){
        cout << A[i] << " ";
    }
}