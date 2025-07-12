#include <iostream>

using namespace std;

int main()
{
    int i,j,m,n,isprime;

    //cout<<"enter first int : ";
    //cin>>m;
    cout<<"enter last int : ";
    cin>>n;

    for(i=3;i<=n;i++){
        isprime=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                isprime=0;
                break;
             }

        }
        cout<<isprime<<"  "<<endl;
        if(isprime==1){
            cout<<i<<" is prime"<<endl;
         }
         //else{
                //cout<<i<<" is not prime"<<endl;
         //}


    }
    return 0;
}
