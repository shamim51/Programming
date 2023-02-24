#include <iostream>

using namespace std;

int main()
{
    int option,length,width,area;
    cout<<"1.Area of a circle"<<endl;
    cout<<"2.Area of a rectangle"<<endl;
    cout<<"3.Area of a triangle"<<endl;
    cout<<"4.volume of a cylender"<<endl;
    cout<<"5.volume of a sphere"<<endl;
    cout<<"6.volumr of a cube"<<endl;
    cout<<"select an option : ";
    cin>>option;


    if(option==2){
        cout<<"Area of a circle"<<endl;

        cout<<"Enter length:";
        cin>>length;
        cout<<"Enter width:";
        cin>>width;

        area=length*width;

        cout<<"area of the rectangle is "<<area;
    }
    else if(option==2){
        cout<<"Area of a circle"<<endl;
    }


    return 0;
}
