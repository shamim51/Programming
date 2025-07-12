#include<iostream>
using namespace std;

int quadrant(float x, float y){
    if(x > 0 && y > 0){
        return 1;
    }
    else if(x < 0 && y > 0){
        return 2;
    }
    else if(x < 0 && y < 0){
        return 3;
    }
    else if(x > 0 && y < 0){
        return 4;
    }
    return 0;
}

int main()
{
    int x = quadrant(4.5, -15);
    cout<<x;

    return 0;
}