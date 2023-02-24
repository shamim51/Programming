#include <iostream>

using namespace std;

int main()
{
    int i,j,n;

    cout<<"enter the shapes size : ";
    cin>>n;

    for(i=0;i<n;i++){
        for(j=0;j<5-i;j++){
            cout<<j<<"  ";
        }
        //cout<<endl;

        for(j=0;j<=i;j++){  //loop for print values in each row

            cout<<"*"<<"  ";  //value that we printing


        }
        cout<<endl;
    }
    return 0;
}
