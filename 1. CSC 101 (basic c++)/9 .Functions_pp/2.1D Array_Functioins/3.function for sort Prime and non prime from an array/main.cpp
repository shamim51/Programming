#include <iostream>

using namespace std;

void input_1D(int [],int);
void print_1D(int [],int);
int isprime(int);

void sorting(int[],int[],int[],int);

int main()
{
    int i,j,k;
    int x[10],prime[10],non_prime[10], n;

    cout<<"How many integers(n<=10):";
    cin>>n;

    cout<<"*****Array x input*****"<<endl;
    input_1D(x,n);


    cout<<"*****Array X output*****"<<endl;
    print_1D(x,n);


    //sorting(x,prime,non_prime,n);

    j=0,k=0;
    for(i=0;i<n;i=i+1){
        if(isprime(x[i])==1){
            prime[j]=x[i];
            j=j+1;
        }
        else{
            non_prime[k]=x[i];
            k=k+1;
        }
    }

    cout<<"*****Array prime output*****"<<endl;
    print_1D(prime,j);

    cout<<"*****Array non_prime output*****"<<endl;
    print_1D(non_prime,k);

    return 0;

}


/*void sorting(int x[],int prime[],int non_prime[], int n){

    int i,j,k;
    j=0,k=0;
    for(i=2;i<n;i=i+1){
        if(isprime(x[i])==1){
            prime[j]=x[i];
            j=j+1;
        }
        else{
            non_prime[k]=x[i];
            k=k+1;
        }
    }



}*/


int isprime(int z){
    int p,i;
    p=1;
    for(i=2;i<z;i=i+1){
        if(z%i==0){
            p=0;
        }
    }
    return p;

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

