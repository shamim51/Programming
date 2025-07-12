#include <iostream>
using namespace std;

void hcf_by_pointers(int *, int *,int *);

int main()
{
    int *x, *y,*hcf;

    x=new int;
    y=new int;
    hcf=new int;

    cout << "Enter the First Integer:";
    cin>>*x;
    cout<<"Enter the Second Integer:";
    cin>>*y;

    hcf_by_pointers(x,y,hcf);

    cout<<"GCD of "<< *x <<" and "<< *y <<" is "<< *hcf;

    return 0;
}

void hcf_by_pointers(int *a,int *b,int *flag){

    int *i,*j,*k;

    i=new int;
    j=new int;
    k=new int;

    *j=*a;
    *k=*b;

    if(*j>*k){
        *i=*j;
        *j=*k;
        *k=*i;
    }
    for(*i=*j;*i>0;*i=*i-1){
        if((*j%*i==0)&&(*k%*i==0)){
            *flag=*i;
            break;
        }
    }
}
