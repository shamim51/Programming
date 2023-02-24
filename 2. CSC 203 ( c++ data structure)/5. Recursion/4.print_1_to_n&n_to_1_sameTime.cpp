#include <iostream>

using namespace std;

void print_ascending_and_descending_same_time(int);

int main()
{
    int N;

    cout<<"Enter N: ";
    cin>>N;

    print_ascending_and_descending_same_time(N);

    return 0;
}

void print_ascending_and_descending_same_time(int n){
    if(n == 0){
        cout<<endl;
        return;
    }
    cout<<n<<" ";

    print_ascending_and_descending_same_time(n-1);

    cout<<n<<" ";

}
