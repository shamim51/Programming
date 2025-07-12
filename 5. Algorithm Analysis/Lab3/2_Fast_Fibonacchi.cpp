#include<iostream>

using namespace std;
int Multiply(int F[2][2], int M[2][2]){
    int X = F[0][0]*M[0][0] + F[0][1]*M[1][0];
    int Y = F[0][0]*M[0][1] + F[0][1]*M[1][1];
    int Z = F[1][0]*M[0][0] + F[1][1]*M[1][0];
    int W = F[1][0]*M[0][1] + F[1][1]*M[1][1];

    F[0][0] = X;
    F[0][1] = Y;
    F[1][0] = Z;
    F[1][1] = W;

    return F[0][0];
  
}

int Power(int F[2][2], int n){
    int M[2][2] = {{1,1},{1,0}};
    if(n == 0 || n == 1){
        return F[0][0];
    }
    Power(F, n/2);
    Multiply(F, F);
    if(n % 2 != 0){
        Multiply(F, M);
    }
    return F[0][0];

}
int Fast_fibonacci(int n){
    int F[2][2] = {{1,1}, {1, 0}};
    if(n == 0){
        return 0;
    }
    Power(F, n-1);
    return F[0][0];
}

int main()
{
    int i;
    cout<<"Which number of fibonacci you want to find: ";
    cin>>i;
    cout<<Fast_fibonacci(i);

    
    return 0;
}