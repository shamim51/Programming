#include<iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;

    int state = 0;
    cout<<"q"<<state<<"->";//

    for(int i = 0; i < str.size(); i++){
        if(state == 0){
            if(str[i] == '0') state = 1;
            else state = 3;
            cout<<"q"<<state<<"->";
        }
        else if(state == 1){
            if(str[i] == '0') state = 0;
            else state = 2;
            cout<<"q"<<state<<"->";
        }
        else if(state == 2){
            if(str[i] == '0') state = 3;
            else state = 0;
            cout<<"q"<<state<<"->";
        }
        else if(state == 3){
            if(str[i] == '0') state = 3;
            else state = 2;
            cout<<"q"<<state<<"->";
        }
    }    
    return 0;
}