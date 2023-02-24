#include <iostream>
using namespace std;
int main()
{
    float x;

    cout<<"enter your total marks : ";
    cin>>x;


    if(x>100){
        cout<<"invalid";
    }
    else if(x>=85){
        cout<<"A";
    }
    else if(x>=80){
        cout<<"A-";
    }
    else if(x>=75){
        cout<<"B+";
    }
    else if(x>=70){
        cout<<"B";
    }
    else if(x>=65){
        cout<<"B-";
    }
    else if(x>=60){
        cout<<"C+";
    }
    else if(x>55){
        cout<<"C";
    }
    else if(x>50){
        cout<<"C-";
    }
    else if(x>45){
        cout<<"D+";
    }
    else if(x>=40){
        cout<<"D";
    }
    else if(x>=0){
        cout<<"F";
    }
    return 0;
}
