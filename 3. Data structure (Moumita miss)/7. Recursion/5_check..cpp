#include<iostream>

using namespace std;

bool check(string str, int size, int i){
    if(size == i){
        return false;
    }
    if(str[i] <'a' && str[i]> 'z'){
        return true;
    }
    cout<<"i++";
    i++;
    return check(str, size, i);
}

int main()
{
    string str;
    str = "ashfaQ";
    cout<<check(str, 6, 0);
    
    return 0;
}