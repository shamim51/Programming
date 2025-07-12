#include <iostream>

using namespace std;

int main()
{
    float R,A,C,Pi;
    Pi=3.14165;
    cout<<"give the radius of the circle : ";
    cin>>R;
    A=Pi*(R*R);
    C=2*Pi*R;
    cout << "area is : " <<A<< endl;
    cout<<"Circumference is : "<<C<<endl;
    return 0;
}
