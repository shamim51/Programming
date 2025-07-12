#include <iostream>

using namespace std;

int main()
{
    int number,sum,n,i,j;
    number = 0;
    sum = 0;
    n = 4;

    cout<<"numbers="<<number<<endl;

    for(i = n; i >= 0; i = i - 1){

        //cout<<"i="<<i<<endl;


        for(j = 1; j <= i; j=j+1)
        {
            //cout<<"j="<<j<<endl;

            cout << sum<< ",";
            number = number + 1;
            sum = sum + i;

            cout<<"numbers="<<number<<endl;
        }
        //cout<<"j="<<j<<endl;
        cout << endl;
    }

    //cout<<"i="<<i<<endl;

}
