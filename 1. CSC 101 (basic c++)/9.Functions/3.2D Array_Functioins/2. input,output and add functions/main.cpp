#include <iostream>

using namespace std;

void input_2D(int[10][10],int,int);
void print_2D(int [10][10],int,int);
void add_2D(int [10][10],int [10][10],int [10][10],int,int);

int main()
{
    int x[10][10],y[10][10],z[10][10],r,c;

    cout<<"How many rows:";
    cin>>r;
    cout<<"How many columns:";
    cin>>c;

    cout<<endl;

    cout<<"*****input for x*****"<<endl;
    input_2D(x,r,c);

    cout<<"*****input for Y*****"<<endl;
    input_2D(y,r,c);

    add_2D(x,y,z,r,c);

    cout<<"*****printing X *****"<<endl;
    print_2D(x,r,c);
    cout<<endl;

    cout<<"*****printing Y *****"<<endl;
    print_2D(y,r,c);
    cout<<endl;

    cout<<"*****printing Z *****"<<endl;
    print_2D(z,r,c);




    return 0;
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



void add_2D(int x [10][10], int y [10][10], int z [10][10], int r, int c){

    int i,j;
    for(j=0;j<r;j=j+1){
        for(i=0;i<c;i=i+1){
            z[j][i]= x[j][i]+y[j][i];
        }


    }
}
