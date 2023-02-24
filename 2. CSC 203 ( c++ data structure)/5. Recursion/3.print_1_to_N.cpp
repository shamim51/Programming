#include <iostream>

using namespace std;

void print_1_to_N(int);

int main()
{
    int N;
    cout<<"enter N: ";
    cin>>N;
    print_1_to_N(N);
    return 0;
}

void print_1_to_N(int n){
    if(n == 0){
        return;
    }
    print_1_to_N(n-1);
    cout<<n<<" ";


}
