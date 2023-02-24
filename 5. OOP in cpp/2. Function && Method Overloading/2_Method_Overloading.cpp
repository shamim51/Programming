#include<iostream>

using namespace std;

class Addition{
public:
    int sum(int a, int b){
        return a + b;
    }

    int sum(int a, int b, int c){
        return a + b + c;
    }

    float sum(int a, float b){
        return a + b;
    }

    float sum(float a, int b){
        return a + b;
    }

    float sum(float a, float b, float c){
        return a + b + c;
    }
};
int main()
{
    Addition add;

    cout<<add.sum(10, 20)<<endl;
    cout<<add.sum(2.1f, 9)<<endl;
    cout<<add.sum(1.5f, 4.4f, 3.3f)<<endl;
    
    
    return 0;
}