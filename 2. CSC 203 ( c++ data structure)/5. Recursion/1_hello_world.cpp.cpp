#include <iostream>
using namespace std;

void display(int);

int main(int)
{
    display(100);
    return 0;
}

void display(int n){
    if(n==0){
        return;
    }
    cout<<"hello world"<<" "<<n<< endl;

    display(n-1);

}
