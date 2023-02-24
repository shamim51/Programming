#include <iostream>

using namespace std;

int main()
{
    int x,y,z,result,weirdresult;
    cout<<"Please Enter x:";
    cin>>x;
    cout<<"Please Enter y:";
    cin>>y;
    cout<<"Please enter z:";
    cin>>z;

    if(x>y){
        if(x>z){
            if(y>z){
                cout<<x<<">"<<y<<">"<<z<<">";


            }
            else{
                cout<<x<<">"<<z<<">"<<y<<">";
            }
        }
        else{
            cout<<z<<">"<<x<<">"<<y<<">";
       }
    }
    else{
        if(y>z){
            if(x>z){
                cout<<y<<">"<<x<<">"<<z<<">";

            }
            else{
                cout<<y<<">"<<z<<">"<<x<<">";

            }
        }
        else{
            cout<<z<<">"<<y<<">"<<x<<">";
        }
    }


    return 0;
}
