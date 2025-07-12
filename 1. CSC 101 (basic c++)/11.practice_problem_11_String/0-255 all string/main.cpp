#include <iostream>

using namespace std;

int main()
{
    int i;
    char ch;
    for(i=0;i<256;i=i+1){
        ch=i;
        cout<<i<<" = "<<ch<<endl;
    }

    return 0;
}
