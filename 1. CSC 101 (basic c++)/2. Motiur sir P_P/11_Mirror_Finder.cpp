#include<iostream>
using namespace std;

bool hasMirrorTwice(int a1[], int size1,int a2[],int size2){
    int mirror = 0;
    for(int i = 0; i < size1; i = i + 1){
        int count = 0;
        int k = i;
        for(int j = (size2 - 1); j >= 0; j = j - 1){
            if(a1[k] == a2[j]){
                count = count + 1;
                k = k + 1;
            }
            else{
                break;
            }
        }
        cout<<endl; 
        if(count == size2){
            mirror = mirror + 1;
        }
    }
    if(mirror >= 2){
        return true;
        
    }
    else{
        return false;
    }
}

int main()
{
    int a1[] = {8, 9, 2, 1};
    int a2[] = {5, 7, 1, 2, 9, 8};
    int x = hasMirrorTwice(a1, 4, a2, 6); 
    if(x == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}