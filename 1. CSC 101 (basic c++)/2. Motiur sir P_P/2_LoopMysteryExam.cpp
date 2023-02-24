#include<iostream>
using namespace std;

int loopMyesteryExam(int i, int j){
    while(i != 0 && j != 0){
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
    float Return;
    cout<<"i = ";
    cin>>i;
    cout<<"j = ";
    cin>>j;
    Return = loopMyesteryExam(i, j);
    cout<<"Return = "<<Return;
    
    return 0;
}