#include <iostream>

using namespace std;

int main()
{
    int i=7;
    int *j;
    *j=&i;


    cout<<*j;
    return 0;
}
