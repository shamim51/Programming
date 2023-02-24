#include <iostream>
using namespace std;

int main()
{
    string str1, str2, str3;
    str1 = "shamim";
    str2 = "shamim";
    str3 = "Ahmed";

    if(str1 == str2) cout<<"matched"<<endl;
    if(str2 != str3){
        cout<<"Not matched";
    }

    return 0;
}
