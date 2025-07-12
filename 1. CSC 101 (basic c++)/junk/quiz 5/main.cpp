#include <iostream>

using namespace std;

void input_1D(int [],int);
void print_1D(int [],int);

int isprime(int);

int sorting_prime(int [], int [], int);
int sorting_notprime(int [], int [], int);

int main()
{
    int prime_counter,non_prime_counter;
    int x[10],prime[10],non_prime[10], n;

    cout<<"How many integers(n<=10):";
    cin>>n;

    input_1D(x,n);


    cout<<"X= ";
    print_1D(x,n);

    prime_counter=sorting_prime(x, prime, n);
    non_prime_counter=sorting_notprime(x, non_prime, n);


    cout<<"P= ";
    print_1D(prime,prime_counter);

    cout<<"NP= ";
    print_1D(non_prime,non_prime_counter);



    return 0;

}


int sorting_prime(int x[], int prime[], int n){

    int i,j;
    j=0;
    for(i=0;i<n;i=i+1){
        if(isprime(x[i])==1){
            prime[j]=x[i];
            j=j+1;
        }
    }
    return j;
}



int sorting_notprime(int x[], int non_prime[], int n){

    int i,j,k;
    k=0;
    for(i=0;i<n;i=i+1){
        if(isprime(x[i])==0){

            non_prime[k]=x[i];

            k=k+1;
        }
    }
    return k;

}



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
        cout<<"x["<<i<<"] = ";
        cin>>x[i];
    }


}



void print_1D(int x [],int n){
    int i;
    for(i=0;i<n-1;i=i+1){
        cout<<x[i]<<",";
    }
    cout<<x[i];

    cout<<endl;

}

