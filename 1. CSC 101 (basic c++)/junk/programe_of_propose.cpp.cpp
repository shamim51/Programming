#include <iostream>

using namespace std;

int main()
{
    int i;
    char a, x;
    a=2;

    for(i=0;i<23;i++){
        cout<<" ";
    }

    cout<<"will you marry me !"<<endl;

    for(i=0;i<38;i++){
        cout<<" ";
    }

    cout <<"please enter switch A or B :";
    cin>>x;

    if(x=='A'){
        for(i=0;i<40;i++){
            cout<<" ";
        }

        cout<<"i will not marry you";
    }


    if(x=='B'){
        for(i=0;i<41;i++){
            cout<<" ";
        }

        cout<<"i will marry you "<<a;

    }
    return 0;
}
