#include<iostream>
using namespace std;

float getPercentEven(int a[], int size){
    int count = 0;
    double percentege = 0.0; 
    for(int i = 0; i < size; i = i + 1){
        if(a[i] % 2 == 0){
            count = count + 1;
        }
        percentege = ((100/(size*1.0))*count);

    }
    cout<<percentege<<endl;
    return percentege;
}

int main()
{
    int a[] = {3, 5, 7, 9, 11};
    float x =  getPercentEven(a, 5);
    cout<<x;
    return 0;
}