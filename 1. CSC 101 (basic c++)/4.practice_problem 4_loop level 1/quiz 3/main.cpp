#include <iostream>

using namespace std;

int main()
{
    int i,k, space,rows;

    cout<<"enter the number of rows  :";
    cin>>rows;

    for(i=1;i<=rows;i=i+1){
        k=0;
        for(space=1;space<=rows-i;space=space+1){

            cout<<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "**";
            ++k;
        }

        cout<<endl;

    }
    return 0;
}
