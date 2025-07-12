#include <iostream>

using namespace std;

int main()
{
    int i,m,n;
    cout<<"enter first int : ";
    cin>>m;
    cout<<"enter end int : ";
    cin>>n;

    if(n%2==1){

       n=n-1;
    }

    if(m==0){
        m=m+1;
    }
    //cout<<m<<endl;
    for(i=m;i<n;i++){

        if(i%2==0){
            cout<<i<<",";

        }
        //cout<<i<<",";
    }
    cout<<i;
    return 0;
}
