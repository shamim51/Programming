#include <iostream>
using namespace std;

void input_1D(int [],int);
void print_1D(int [],int);

void bubble_sort_1D(int [], int);

int main()
{
    int x[100], n; //assuming that our array size does not exceed 100;

    cout<<"how many elements :";
    cin>>n;

    input_1D(x, n);
    print_1D(x, n);

    cout<<"bubble sort of this array is :"<<endl;

    bubble_sort_1D(x, n);

    print_1D(x, n);

    return 0;
}


void bubble_sort_1D(int x[], int n){

    int i, j,temp;
    for(j = 0; j < n; j = j + 1){
        for(i = 0; i < n - 1; i = i + 1){
            if(x[i+1] > x[i]){
                temp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = temp;
            }
        }
        // temp=x[j];
        // x[j]=x[ind];
        // x[ind]=temp;

    }

}

void input_1D(int x [],int n){
    int i;
    for(i=0;i<n;i=i+1){
        cout<<"["<<i<<"]=";
        cin>>x[i];
    }


}



void print_1D(int x [],int n){
    int i;
    for(i=0;i<n;i=i+1){
        cout<<x[i]<<" ";
    }
    cout<<endl;

}
