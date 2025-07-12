#include <iostream>

using namespace std;

int main()
{
    int i,j,k,n;

    cout<<" Please Enter n:";
    cin>>n;  //getting inputs

    k=0;
    for(i=1;i<=n;i++){  //loop for rows

        for(j=1;j<=i;j++){  //loop for print values in each row

            cout<<k<<" ";  //value that we printing

            k=k+1;
        }
        cout<<endl;
    }
    return 0;
}
