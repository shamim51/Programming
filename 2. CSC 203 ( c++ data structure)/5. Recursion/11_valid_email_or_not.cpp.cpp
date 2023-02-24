#include <iostream>

using namespace std;

bool valid_or_Not(string, int);

int main()
{
    string name;
    int i = 0;
    cout << "enter name: ";
    cin>>name;



    if(valid_or_Not(name, 0)) cout<<"valid";
    if(!valid_or_Not(name, 0)) cout<<"not valid";

    return 0;
}

bool valid_or_Not(string str, int i){
    if(i > str.length()){
        return false;
    }
    if(str[i]=='@'){
        return true;
    }
    i ++;
    return true * valid_or_Not(str, i);



}
