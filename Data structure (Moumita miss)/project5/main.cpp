#include <iostream>

using namespace std;

int main()
{
    int faren;
    int cel;
    int kel;

    cout<<"enter temp in faren:";
    cin>>faren;

    cel = (5*(faren -32))/9;
    kel = cel -273;

    cout<<cel<<endl;
    cout<<kel;

    return 0;
}
