#include <iostream>

using namespace std;

void print_N_to_1(int);

int main()
{
    int N;
    cout<<"Enter N: ";
    cin>>N;
    print_N_to_1(N);
    return 0;
}

void print_N_to_1(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    print_N_to_1(n-1);

}
