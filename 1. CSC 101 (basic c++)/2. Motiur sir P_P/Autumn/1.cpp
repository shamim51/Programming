#include <iostream>

using namespace std;

void recursionMystery1(int,int);

int main()
{
    recursionMystery1(6,3);

    return 0;
}

void recursionMystery1(int x , int y){   
    if(y <= 0){ 
        cout<< "0 "; // 0 
    }
    else if(x > y){
        cout << x << " ";  // 6 
        recursionMystery1(x - y , y); // ( 3 , 3)
    }
    else{
        recursionMystery1(x , y - x); // (3 , 0) 
        cout<< y << " ";
        cout<<"running";
    }
}