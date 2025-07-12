#include <iostream>

using namespace std;

int main()
{
    int i,r,x;
    cout<<"enter an integer :";
    cin>>x;

    for(i=1;x>9;i=i+1){

        r=x%10;
        x=x/10;
        cout<<r;

    }
    cout<<x;
    cout <<endl<<i;





    return 0;
}
