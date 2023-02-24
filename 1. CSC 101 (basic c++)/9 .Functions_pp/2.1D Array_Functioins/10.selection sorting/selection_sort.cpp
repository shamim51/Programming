#include <iostream>
using namespace std;

void input_1D(int [],int);
void print_1D(int [],int);

void selection_sort_1D(int [], int);

int main()
{
    int x[100], n; //assuming that our array size don't exceed 100;

    cout<<"how many elements :";
    cin>>n;

    input_1D(x, n);
    print_1D(x, n);

    cout<<"selection sort of this array is :"<<endl;

    selection_sort_1D(x, n);

    print_1D(x, n);

    return 0;
}


void selection_sort_1D(int x[], int n){

    int i, j, ind, temp;
    for(j=0;j<n-1;j=j+1){
        ind=j;
        for(i=j;i<n;i=i+1){
            if(x[i]>x[ind]){
                ind=i;
            }
        }
        temp=x[j];
        x[j]=x[ind];
        x[ind]=temp;

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
