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

                result=(x-z);

                if(result>y){
                    weirdresult=result-y;

                    cout<<"Weird result is:"<<"("<<x<<"-"<<z<<")"<<"-"<<y<<<<weirdresult;

                }
                else{
                    weirdresult=y-result;
                    cout<<"Weird result is:"<<y<<"-"<<"("<<x<<"-"<<z<<")"<<"="<<weirdresult;
                }

            }
            else{
                cout<<x<<">"<<z<<">"<<y<<">";

                result=(x-y);

                if(result>z){
                    weirdresult=result-z;

                    cout<<"Weird result is:"<<"("<<x<<"-"<<y<<")"<<"-"<<z<<weirdresult;

                }
                else{
                    weirdresult=z-result;
                    cout<<"Weird result is:"<<z<<"-"<<"("<<x<<"-"<<y<<")"<<"="<<weirdresult;
                }

            }

        }
        else{
            cout<<z<<">"<<x<<">"<<y<<">";
            result=(z-y);

                if(result>x){
                    weirdresult=result-x;

                    cout<<"Weird result is:"<<"("<<z<<"-"<<y<<")"<<"-"<<x<<"="<<weirdresult;

                }
                else{
                    weirdresult=x-result;
                    cout<<"Weird result is:"<<x<<"-"<<"("<<z<<"-"<<y<<")"<<"="<<weirdresult;
                }

        }

    }
    else{
        if(y>z){
            if(x>z){
                cout<<y<<">"<<x<<">"<<z<<">";
                result=(y-z);

                if(result>x){
                    weirdresult=result-x;

                    cout<<"Weird result is:"<<"("<<y<<"-"<<z<<")"<<"-"<<x<<"="<<weirdresult;

                }
                else{
                    weirdresult=x-result;
                    cout<<"Weird result is:"<<x<<"-"<<"("<<y<<"-"<<z<<")"<<"="<<weirdresult;
                }
            }
            else{
                cout<<y<<">"<<z<<">"<<x<<">";

                result=(y-x);

                if(result>z){
                    weirdresult=result-z;

                    cout<<"Weird result is:"<<"("<<y<<"-"<<x<<")"<<"-"<<z<<"="<<weirdresult;

                }
                else{
                    weirdresult=z-result;
                    cout<<"Weird result is:"<<z<<"-"<<"("<<y<<"-"<<x<<")"<<"="<<weirdresult;
                }
            }
        }
        else{
            cout<<z<<">"<<y<<">"<<x<<">";
            result=(z-x);

                if(result>y){
                    weirdresult=result-y;

                    cout<<"Weird result is:"<<"("<<z<<"-"<<x<<")"<<"-"<<y<<"="<<weirdresult;

                }
                else{
                    weirdresult=y-result;
                    cout<<"Weird result is:"<<y<<"-"<<"("<<z<<"-"<<x<<")"<<"="<<weirdresult;
                }
        }

    }


    return 0;
}
