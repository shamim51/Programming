//find how many times an integer available into an array and put it's location into another array_called index.

#include <iostream>
using namespace std;

void input_2D(int[10][10],int,int);
void print_2D(int [10][10],int,int);

void print_index_2D(int x [100][2], int r, int c);

int search_2D_index(int [10][10], int, int, int, int [100][2]);

int main()
{
    int x[10][10], y, counter;
    int r, c, ind[100][2];

    cout<<"how many rows :";
    cin>>r;
    cout<<"how many columns :";
    cin>>c;

    input_2D(x, r, c);

    cout<<"search value :";
    cin>>y;

    counter = search_2D_index(x, r, c, y, ind);

    cout<<counter<<endl;

    print_2D(x, r, c);

    cout<<"contains "<<y<<" at locations :"<<endl;

    print_index_2D(ind, counter, 2);

    return 0;
}

int search_2D_index(int x[10][10], int r, int c, int y, int ind[100][2]){

    int i,j,k;
    k=0;
    for(j=0;j<r;j=j+1){
        for(i=0;i<c;i=i+1){
            if(x[j][i]==y){
                ind[k][0]=j;
                ind[k][1]=i;
                k=k+1;
            }
        }
    }
    return k;

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
void print_index_2D(int x [100][2], int r, int c){

    int i, j;
    for(j=0;j<r;j=j+1){

        for(i=0;i<c;i=i+1){

            cout<<x[j][i]<<" ";
        }
        cout<<endl;
    }

}

