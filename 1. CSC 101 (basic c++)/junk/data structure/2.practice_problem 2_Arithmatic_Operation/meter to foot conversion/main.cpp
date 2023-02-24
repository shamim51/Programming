#include <iostream>

using namespace std;

int main()
{
    float m,inch,cm;
    int foot;

    cout<<"enter your height : ";
    cin>>m;
    float remaining_inch;

    cm=m*100;
    inch=cm/2.54;
    foot=inch/12;
    remaining_inch=inch-foot*12;

    cout<<foot<<" foot and "<<remaining_inch<<" inch";


    return 0;
}
