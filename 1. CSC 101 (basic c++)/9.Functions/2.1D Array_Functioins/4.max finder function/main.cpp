#include <iostream>
using namespace std;

void input_1D(int [],int);
void print_1D(int [],int);

int find_max_1d(int[],int);


int main()
{
    int x[10], n,maximum_ind;
    cout << "how many integers: " << endl;
    cin>>n;

    cout<<"*****Array X input*****"<<endl;
    input_1D(x,n);

    maximum_ind=find_max_1d(x,n);

    cout<<"maximum value is:";
    cout<<x[maximum_ind];



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


int find_max_1d(int x[],int n){

    int max_ind,i;
    max_ind=0;
    for(i=1;i<n;i=i+1){
        if(x[i]>x[max_ind]){
            max_ind=i;
        }
    }
    return max_ind;

}
