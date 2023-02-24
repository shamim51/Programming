#include <iostream>
using namespace std;


void input_2D(int[10][10],int,int);
void print_2D(int [10][10],int,int);
void print_1D(int [], int);

void add_2D_row(int [10][10], int, int, int[]);

int main()
{
    int x[10][10], r, c, z[10];

    cout<<"How many rows:";
    cin>>r;
    cout<<"How many columns:";
    cin>>c;

    cout<<endl;

    cout<<"*****input for x*****"<<endl;
    input_2D(x,r,c);


    add_2D_row(x, r, c, z);

    cout<<"*****printing X *****"<<endl;
    print_2D(x,r,c);
    cout<<endl;


    cout<<"*****printing Z *****"<<endl;
    print_1D(z,r);




    return 0;
}

void print_1D(int x[10], int n){
    int i;
    for(i=0;i<n;i=i+1){
        cout<<x[i]<<" ";
    }
}


void input_2D(int x [10][10], int r, int c){
    int i, j;
    for(j=0;j<r;j=j+1){
        for(i=0;i<c;i=i+1){

            cout<<"["<<j<<"]["<<i<<"]=";
            cin>>x[j][i];

        }
        cout<<endl;
    }


}


void print_2D(int x [10][10], int r, int c){

    int i, j;
    for(j=0;j<r;j=j+1){

        for(i=0;i<c;i=i+1){

            cout<<x[j][i]<<" ";
        }
        cout<<endl;
    }

}



void add_2D_row(int x [10][10], int r, int c, int z [10]){

    int i,j;

    for(j=0;j<10;j=j+1){
        z[j]=0;
    }

    for(j=0;j<r;j=j+1){
        for(i=0;i<c;i=i+1){
            z[j]= z[j]+x[j][i];
        }


    }
}
