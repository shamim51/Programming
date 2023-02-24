#include <iostream>
using namespace std;

void power(int * , int *, int *);
void factorial(int *, int *);

int main()
{
    int x, p;
    int y, f;
    int xf, yf;

    cout <<"Enter x:";
    cin>>x;

    cout<<"Enter y:";
    cin>>y;

    power(&x, &y, &p);

    factorial(&x, &xf);
    factorial(&y, &yf);

    f= xf + yf ;

    if(p<f){
        cout<<x<<"^"<<y<<" is smaller than "<<x<<"!+"<<y<<"!";
    }
    else{
        cout<<x<<"^"<<y<<" is larger than "<<x<<"!+"<<y<<"!";
    }

    return 0;
}

void  power(int *x, int *y, int *q){

    int *p;
    p=new int;
    int *i;
    i=new int;

    *p=1;
    for(*i=0;*i<*y;*i=*i+1){

        *p=*p * *x;
    }
    *q=*p;
}

void factorial(int *x, int *t){

    int *f,*i;
    f=new int;
    i=new int;

    *f=1;
    for(*i=1;*i<=*x;*i=*i+1){

        *f = *f**i;
    }

    *t=*f;
}
