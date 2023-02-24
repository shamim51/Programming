#include <iostream>
 
using namespace std;
int parent(int i){
    return i/2;
}
 
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
 
    
 int Maximum(int A[]){
     return A[0];
 }

 int Extract_Max(int A[], int size){
     if(size < 0) cout<<"heap underflow"<<endl;
     int max = A[0];
     A[0] = A[size];
     size = size - 1;
     heapify(A, size, 0);
     return max;
 }

void increase_Key(int A[], int key, int position){
    if(key < A[position] ){
        cout<<"new key is smaller than current key";
        return;
    }
    A[position] = key;
    while (position > 0 && A[parent(position) < A[position]])
    {
       int temp = A[parent(position)];
       A[parent(position)] = A[position];
       A[position] = temp;
       position = parent(position);
    }
    
}

void Insert(int A[], int size, int key){
    size = size + 1;
    A[size-1] = INT_MIN;
    increase_Key(A, key, size-1);
}
int main()
{
    int A[] = { 15, 6, 3, 5, 7, 12};
    int n = sizeof(A) / sizeof(A[0]);
 
    build_Max_Heap(A, n);
    for(int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    increase_Key(A, 25, 1);
    for(int i = 0; i < n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    Insert(A, n, 50);
    for(int i = 0; i < n+1; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
   cout<<Maximum(A)<<endl;
   cout<<Extract_Max(A, n);

    
}