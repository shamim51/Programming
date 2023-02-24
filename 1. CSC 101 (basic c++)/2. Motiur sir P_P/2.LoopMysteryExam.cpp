#include<iostream>
using namespace std;

int loopMyesteryExam(int i, int j){
    while(i!=0 && j!=0){
        i = i/j;
        j = (j-1)/2;
        cout<<i<<" "<<j<<" ";
    }
    cout<<i<<endl;
    return i + j;

}

int main()
{
    int i , j;
    float n;
    cin>>i>>j;
    n = loopMyesteryExam(i, j);
    cout<<"n = "<<n;
    
    return 0;
}