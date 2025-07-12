#include <iostream>
using namespace std;


void banish(int a1[], int size, int a2[], int size2){
    for(int i = 0; i < size; i = i + 1){
        int k = 0;
        for(int j = 0; j < size2; j = j + 1){
            if(a1[i] == a2[j]){
                for(k = i; k < size - 1; k = k + 1){
                    a1[k] = a1[k + 1];
                }
                a1[k] = 0;
                i = i - 1;
                break;
            }
        }
    }
}

int main(){

    int a1[] = {42, 3, 9, 42, 42, 0, 42, 9, 42, 42, 17, 8, 2222, 4, 9, 0, 1};
    int a2[] = {42, 2222, 9};
    banish(a1, 17, a2, 3);
    for(int i = 0; i < 17; i = i + 1){
        cout<<a1[i]<<" ";
    }
    return 0;
}
