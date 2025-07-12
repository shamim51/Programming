#include<iostream>

using namespace std;

void input_1D(int [],int);
void print_1D(int [],int);

int main()
{
    int n, x, j;
    int arr[101]; //assuming our array size limited by 100
    cout<<"how many elements: ";
    cin>>n;
    input_1D(arr, n);
    cout<<"printing before sorting: "<<endl;
    print_1D(arr, n);
    for(int i = 1; i <= n; i ++){
        x = arr[i];
        j = i - 1;
        while(j >= 1 && arr[j] > x){
            arr[j + 1] = arr[j];
            j --;
        }
        arr[j + 1] = x;

    }
    cout<<"printing after sorting: "<<endl;
    print_1D(arr, n);
    
    return 0;
}

void input_1D(int x [],int n){
    int i;
    for(i = 1; i <= n; i = i + 1){
        cout<<"["<<i<<"]=";
        cin>>x[i];
    }


}



void print_1D(int x [],int n){
    int i;
    for(i = 1; i <= n; i = i + 1){
        cout<<x[i]<<" ";
    }
    cout<<endl;

}