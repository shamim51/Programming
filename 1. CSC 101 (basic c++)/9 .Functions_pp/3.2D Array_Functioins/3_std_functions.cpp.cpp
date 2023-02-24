#include <iostream>
using namespace std;

void input_2D(int[10][10],int,int);
void print_2D(int [10][10],int,int);

float average_2D(int [10][10], int, int);
float sdev_2D(int [10][10], int, int);

int main()
{
    int x[10][10], r, c;
    float std_2D;

    cout<<"how many rows(row<=10):";
    cin>>r;

    cout<<"how many columns(column<=10):";
    cin>>c;

    input_2D(x,r,c);

    cout<<endl;

    std_2D = sdev_2D(x, r, c);

    cout<<"std of : "<<endl;

    print_2D(x,r,c);

    cout<<"is :"<<std_2D<<endl;


    return 0;
}

float average_2D(int x[10][10], int r, int c){

    float sum, average;
    int i, j;
    sum = 0;
    for(j=0;j<r;j=j+1){
        for(i=0;i<c;i=i+1){
            sum = sum + x[j][i];
        }
    }
    average = sum/(r*c);

    return average;

}

float sdev_2D(int x[10][10], int r, int c){

    int i, j;
    float sum, mean, s;
    mean = average_2D(x, r, c);
    sum = 0;
    for(j=0;j<r;j=j+1){
        for(i=0;i<c;i=i+1){
            sum = sum + (mean - x[j][i])*(mean - x[j][i]);
        }
    }
    s = sum/(r*c);

    return c;
}



void input_2D(int x [10][10], int r, int c){
    int i, j;
    for(j=0;j<r;j=j+1){
        for(i=0;i<c;i=i+1){

            cout<<"["<<j<<"]["<<i<<"]=";
            cin>>x[j][i];

        }
        //cout<<endl;
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

