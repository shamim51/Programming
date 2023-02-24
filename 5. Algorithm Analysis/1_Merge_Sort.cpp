#include<iostream>

using namespace std;

void Merge(int A[], int p, int q, int r){ //p = left, q = mid, r = right
    int n1 = q-p+1; 
    int n2 = r-q;
    int *L = new int[n1+1];
    int *R = new int[n2+1];
    for(int i = 1; i <= n1; i++){
        L[i] = A[p+i-1];
    }
    for(int i = 1; i <= n2; i++){
        R[i] = A[q+i];
    }
    L[n1+1] = INT_MAX;
    R[n2+1] = INT_MAX;
    int i = 1;
    int j = 1;
   
    for(int k = p; k <= r; k++){
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
    }

}
void Merge_Sort(int A[], int p, int r){
    int q;
    if(p < r){
        q = (p + r)/2;
    
        // cout<<"111"<<endl;
        Merge_Sort(A, p, q);
        // cout<<"222"<<endl;
        Merge_Sort(A, q+1, r);
        // cout<<"333"<<endl;
        Merge(A, p, q, r);
    }
}

int main()
{
    int A[9] = {0, 7, 8, 6, 5, 4, 3, 2, 1};
    for(int i = 1; i <= 8; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    Merge_Sort(A, 1, 8);

    for(int i = 1; i <= 8; i++){
        cout<<A[i]<<" ";
    }
    
    return 0;
}