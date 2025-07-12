#include <iostream>
using namespace std;

int decomposer_1D(int,int[]);
void print_1D(int [],int);
void print_backward(int[],int);


int main()
{
    int x[10],count,number;
    cout<<"enter the number:";
    cin>>number;

    count=decomposer_1D(number,x);
    print_1D(x,count);
    print_backward(x,count);

    return 0;
}

int decomposer_1D(int n, int x[]){
    int i,r;
    for(i=0;n!=0;i=i+1){
        r=n%10;
        n=n/10;
        x[i]=r;
    }
    return i;

}

void print_backward(int x[],int n){

    int i;
    for(i=n-1;i>=0;i=i-1){
        cout<<x[i]<<" ";
    }
    cout<<endl;

}

void print_1D(int x [],int n){
    int i;
    for(i=0;i<n;i=i+1){
        cout<<x[i]<<" ";
    }
    cout<<endl;

}


void input_1D(int x [],int n){
    int i;
    for(i=0;i<n;i=i+1){
        cout<<"["<<i<<"]=";
        cin>>x[i];
    }


}

