//this program will copy row or column from an 2D array and put it into another 1D array

#include <iostream>
using namespace std;

void input_2D(int[10][10],int,int);
void print_2D(int [10][10],int,int);

void print_1D(int [], int);

void copy_2D_1D(int [10][10], int, int, char ch, int, int []);

int main()
{
    int x[10][10], z[10];
    int r, c, y;
    char ch;

    cout<<"how many rows :";
    cin>>r;
    cout<<"how many columns:";
    cin>>c;

    input_2D(x, r, c);

    cout<<"what you want to copy 'r'/'c' :";
    cin>>ch;

    cout<<"which row/column you want to copy :";
    cin>>y;

    copy_2D_1D(x, r, c, ch, y, z);

    print_2D(x, r, c);

    cout<<y<<" no "<<ch<<" is :";

    if(ch=='r'){
        print_1D(z, c);
    }
    else{
        print_1D(z,r);
    }

    return 0;
}




void print_1D(int x [],int n){
    int i;
    for(i=0;i<n;i=i+1){
        cout<<x[i]<<" ";
    }
    cout<<endl;

}


void copy_2D_1D(int x[10][10], int r, int c, char ch, int y, int z[]){

    int i;
    if(ch=='r'){
        for(i=0;i<c;i=i+1){
            z[i]=x[y][i];
        }
    }
    else{
       for(i=0;i<r;i=i+1){
        z[i]=x[i][y];
       }
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
