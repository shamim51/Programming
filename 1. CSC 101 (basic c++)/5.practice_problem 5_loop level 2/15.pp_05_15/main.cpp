#include <iostream>

using namespace std;

int main()
{
    int p,n,z,o,e,numbers,i,x;
    p=0;
    n=0;
    z=0;
    o=0;
    e=0;
    cout<<"how many numbers: ";
    cin>>numbers;

    for(i=0;i<numbers;i=i+1){

        cout<<"enter integer("<<i+1<<")=";
        cin>>x;

        if(x>0){
            p=p+1;
        }
        if(x<0){
            n=n+1;
        }
        if(x%2==1){
            o=o+1;
        }
        if(x%2==0){
            e=e+1;
        }
        if(x==0){

            z=z+1;
        }
    }
    cout<<"P="<<p<<endl;
    cout<<"n="<<n<<endl;
    cout<<"e="<<e<<endl;
    cout<<"o="<<o<<endl;
    cout<<"z="<<z<<endl;


    return 0;
}
