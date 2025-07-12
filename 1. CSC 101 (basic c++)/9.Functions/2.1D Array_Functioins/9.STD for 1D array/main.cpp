#include <iostream>
using namespace std;

void input_1d(int [], int);
void print_1d(int [], int);

float average_1d(int [], int);
float sdev_1d(int [], int);

int main()
{
    int x[10],n;
    float std_1d;

    cout<<"how many integers:";
    cin>>n;

    input_1d(x,n);

    std_1d = sdev_1d(x,n);

    cout<<"std of ";

    print_1d(x,n);

    cout<<"is : "<<std_1d;

    return 0;
}

void input_1d(int x[], int n){

    int i ;
    for(i=0;i<n;i=i+1){
        cout<<"["<<i<<"]=";
        cin>>x[i];
    }


}


void print_1d(int x[], int n){

    int i;
    for(i=0;i<n;i=i+1){
        cout<<x[i]<<" ";
    }

}

float average_1d(int x[], int n){

    int i, sum;
    float avg;
    sum=0;
    for(i=0;i<n;i=i+1){
        sum = sum + x[i];

    }

    avg = sum/n;

    return avg;
}

float sdev_1d(int x[], int n){

    int i, sum;
    float m, s;
    m = average_1d(x, n);
    sum = 0;
    for(i=0;i<n;i=i+1){
        sum = sum + (m-x[i])*(m-x[i]);
    }
    s = sum/n;

    return s;
}







