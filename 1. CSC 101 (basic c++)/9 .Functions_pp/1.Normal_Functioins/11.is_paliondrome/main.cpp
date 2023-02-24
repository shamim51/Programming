#include <iostream>
using namespace std;

int decomposer_1D(int,int[],int []);
int is_paliondrom(int [],int);

void print_1D(int [],int);
void print_backward(int[],int);




int main()
{
    int x[10],foroward[10],count,number,paliondrom;

    cout<<"enter the number:";
    cin>>number;

    count=decomposer_1D(number,x,foroward);//count will track the number of digits;
    paliondrom=is_paliondrom(foroward,count);//this will check is it paliondrome or not;

    /*if(paliondrom==1){
        cout<<"the number is paliondrom";
    }
    else{
        cout<<"the number is not paliondrom";
    }
    */

    print_1D(foroward,count);
    //print_backward(x,count);

    return 0;
}

int is_paliondrom(int foroward[],int n){
    int i,p;
    p=1;
    for(i=0;i<n;i=i+1){
        if(foroward[i]!=foroward[n-1-i]){
            p=0;
        }
    }
    return p;

}

int decomposer_1D(int n, int x[],int k[]){
    int i,j,r,y;
    for(i=0;n!=0;i=i+1){
        r=n%10;
        n=n/10;
        x[i]=r;
    }
    y=0;
    for(j=i-1;j>=0;j=j-1){
        k[y]=x[j];
        y=y+1;

    }
    return y;

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

