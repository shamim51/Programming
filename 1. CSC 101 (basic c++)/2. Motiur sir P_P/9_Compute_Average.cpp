#include<iostream>
using namespace std;

float computeAverage(int a[], int size){
    float total, avg;
    total = 0;
    for(int i = 0; i < size; i = i + 1){
        total = total + a[i];
    }
    cout<<"total = "<<total<<endl;
    avg = total/ (size*1.0);
    return avg;
}
int main()
{
    int a[] = {1, -2, 4, -4, 9, -6, 16, -8, 25, -10};
    float x = computeAverage(a, 10); 
    cout<<x;
    
    return 0;
}