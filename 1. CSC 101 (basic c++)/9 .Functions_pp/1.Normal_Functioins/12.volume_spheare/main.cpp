#include <iostream>
using namespace std;

float volume_sph(float);

int main()
{
    float r;

    cout<<"enter the radius: ";
    cin>>r;

    cout<<volume_sph(r);

    return 0;
}
float volume_sph(float r){

    float v, pi;

    pi=3.1416;

    v=(4*pi*(r*r*r))/3;

    return v;

}
