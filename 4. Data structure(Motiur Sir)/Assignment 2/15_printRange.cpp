#include<iostream>
using namespace std;

void printRange(int x, int y){
    if(y == x-1){
        return;
    } 
    printRange(x, y-1);
    

}

int main()
{
    printRange(1, 9);
    
    return 0;
}