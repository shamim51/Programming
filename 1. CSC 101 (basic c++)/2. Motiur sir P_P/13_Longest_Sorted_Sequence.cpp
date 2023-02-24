#include<iostream>
using namespace std;

int longestSortedSequence(int array[], int size){
    if(size == 0) return 0;
    else{
        int max, count;
        max = 1;
        count = 1;
        for(int i = 0; i < size-1; i = i + 1){
            if(array[i] <= array[i+1]){
                count = count + 1;
                if(i == (size-2)){
                    if(count>max){
                        max = count;
                    }
                }
            }
            else {
                if(count>max){
                    max = count;
                }
                count = 1;
            }
        }
        return max;
    }
    
}

int main()
{
    int a[]= {2, 4, 6};
    int x = longestSortedSequence(a, 3);
    cout<<"x= "<<x;
    return 0;
}