#include <iostream>

using namespace std;

void input_1D(int [],int);
void print_1D(int [],int);

int search_n_1d(int[], int, int,int[]);

int main()
{
    int x[10],ind[10],n,y,count;

    cout<<"How many int:";
    cin>>n;

    cout<<"*****Array x input*****"<<endl;
    input_1D(x,n);

    cout<<"what are you searching for:";
    cin>>y;

    count=search_n_1d(x,n,y,ind);

    cout<<y<<" is locating at: ";
    print_1D(ind,count);
    cout<<"positions in array :";
    print_1D(x,n);

    cout<<"and "<<y<<" is located "<<count<< " many times. ";

    return 0;
}


int search_n_1d(int x[], int n, int y,int ind[]){
    int i,j, c;
    j=0;
    c=0;
    for(i=0;i<n;i=i+1){
        if(x[i]==y){
            ind[j]=i;
            c=c+1;
            j=j+1;
        }

    }
    return c;

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
