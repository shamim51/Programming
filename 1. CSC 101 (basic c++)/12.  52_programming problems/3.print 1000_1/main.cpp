#include <iostream>

using namespace std;

int main()
{
    int i;
    for(i = 1000; i > 0; i = i - 1){
        cout<<i<<"\t";
        if((i-1) % 5 == 0 ){
            cout<<endl;
        }

    }
    return 0;
}
