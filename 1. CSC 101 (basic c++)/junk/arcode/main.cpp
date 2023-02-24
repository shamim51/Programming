#include <iostream>

using namespace std;

void print(char c, int n);
int power(int x,int  y);

int main()
{
    int line,  base=2,  k=0,i ,j;
    char leftSymbol, rightSymbol;

    cout<<"How many lines:";
    cin>>line;
    cout<<"Left Symbol : ";
    cin>>leftSymbol;
    cout<<"Right Symbol : ";
    cin>>rightSymbol;



    for(i=line;i>=1;i--)
    {
        print(leftSymbol,i);




        for(j=0;j<k;j++)
        {
            cout<<" ";
        }
        k = k+2;


        print(rightSymbol,i);

        cout<<endl;


    }




    return 0;
}


void print(char c, int n)
{
    int i;
    for(int i=0;i<n;i++)
    {
        cout<<c;
    }
}
