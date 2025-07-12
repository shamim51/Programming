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
                //cout<<x<<">"<<y<<">"<<z<<">";

                result=(x-z);

                if(result>y){
                    weirdresult=result-y;

                    if(z<0){
                        cout<<"Weird result is:"<<"("<<x<<"+"<<-1*z<<")"<<"-"<<y<<"="<<weirdresult;

                    }
                    else{
                        cout<<"Weird result is:"<<"("<<x<<"-"<<z<<")"<<"-"<<y<<"="<<weirdresult;
                    }

                }
                else{
                    weirdresult=y-result;

                    if(z<0){
                        cout<<"Weird result is:"<<y<<"-"<<"("<<x<<"+"<<-1*z<<")"<<"="<<weirdresult;
                    }
                    else{
                        cout<<"Weird result is:"<<y<<"-"<<"("<<x<<"-"<<z<<")"<<"="<<weirdresult;
                    }
                }

            }
            else{
                //cout<<x<<">"<<z<<">"<<y<<">";

                result=(x-y);

                if(result>z){
                    weirdresult=result-z;
                    if(y<0){

                        cout<<"Weird result is:"<<"("<<x<<"+"<<-1*y<<")"<<"-"<<z<<"="<<weirdresult;
                    }

                    else{
                        cout<<"Weird result is:"<<"("<<x<<"-"<<y<<")"<<"-"<<z<<"="<<weirdresult;

                    }
                }

                else{
                    weirdresult=z-result;
                    if(y<0){
                        cout<<"Weird result is:"<<z<<"-"<<"("<<x<<"+"<<-1*y<<")"<<"="<<weirdresult;
                    }
                    else{
                        cout<<"Weird result is :"<<z<<"-"<<"("<<x<<"-"<<y<<")"<<"="<<weirdresult;
                    }
                }

            }

        }
        else{
            //cout<<z<<">"<<x<<">"<<y<<">";

                result=(z-y);

                if(result>x){
                    weirdresult=result-x;

                    if(y<0){
                        cout<<"Weird result is:"<<"("<<z<<"+"<<-1*y<<")"<<"-"<<x<<"="<<weirdresult;
                    }
                    else{
                        cout<<"Weird result is:"<<"("<<z<<"-"<<y<<")"<<"-"<<x<<"="<<weirdresult;
                    }
                }
                else{
                    weirdresult=x-result;
                    if(y<0){
                        cout<<"Weird result is:"<<x<<"-"<<"("<<z<<"+"<<-1*y<<")"<<"="<<weirdresult;
                    }
                    else{
                        cout<<"Weird result is:"<<x<<"-"<<"("<<z<<"-"<<y<<")"<<"="<<weirdresult;
                    }

                }

            }

        }



    else{
        if(y>z){
            if(x>z){
                //cout<<y<<">"<<x<<">"<<z<<">";
                result=(y-z);

                if(result>x){
                    weirdresult=result-x;
                    if(z<0){
                        cout<<"Weird result is:"<<"("<<y<<"+"<<-1*z<<")"<<"-"<<x<<"="<<weirdresult;
                    }
                    else{
                        cout<<"Weird result is:"<<"("<<y<<"-"<<z<<")"<<"-"<<x<<"="<<weirdresult;
                    }


                }
                else{
                    weirdresult=x-result;
                    if(z<0){
                        cout<<"Weird result is:"<<x<<"-"<<"("<<y<<"+"<<-1*z<<")"<<"="<<weirdresult;
                    }
                    else{
                        cout<<"Weird result is:"<<x<<"-"<<"("<<y<<"-"<<z<<")"<<"="<<weirdresult;
                    }
                }
            }
            else{
                //cout<<y<<">"<<z<<">"<<x<<">";

                result=(y-x);

                if(result>z){
                    weirdresult=result-z;
                    if(x<0){
                        cout<<"Weird result is:"<<"("<<y<<"+"<<-1*x<<")"<<"-"<<z<<"="<<weirdresult;
                    }
                    else{
                        cout<<"Weird result is:"<<"("<<y<<"-"<<x<<")"<<"-"<<z<<"="<<weirdresult;
                    }

                }
                else{
                    weirdresult=z-result;
                    if(x<0){
                       cout<<"Weird result is:"<<z<<"-"<<"("<<y<<"+"<<-1*x<<")"<<"="<<weirdresult;
                    }
                    else{
                       cout<<"Weird result is:"<<z<<"-"<<"("<<y<<"-"<<x<<")"<<"="<<weirdresult;
                    }
                }
            }
        }
        else{
            //cout<<z<<">"<<y<<">"<<x<<">";
            result=(z-x);

                if(result>y){
                    weirdresult=result-y;

                    if(x<0){
                        cout<<"Weird result is:"<<"("<<z<<"+"<<-1*x<<")"<<"-"<<y<<"="<<weirdresult;
                    }

                    else{
                        cout<<"Weird result is:"<<"("<<z<<"-"<<x<<")"<<"-"<<y<<"="<<weirdresult;
                    }

                }
                else{

                    weirdresult=y-result;

                    if(x<0){
                        cout<<"Weird result is:"<<y<<"-"<<"("<<z<<"+"<<-1*x<<")"<<"="<<weirdresult;

                    }

                    else{
                        cout<<"Weird result is:"<<y<<"-"<<"("<<z<<"-"<<x<<")"<<"="<<weirdresult;
                    }
                }
        }

    }


    return 0;
}
