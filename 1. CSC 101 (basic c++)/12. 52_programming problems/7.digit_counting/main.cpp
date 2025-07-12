#include <iostream>

using namespace std;

int main()
{
    int T, N, i, j, counter;
    string str;
    cin>>T;
    for(i = 0; i < T; i = i + 1){
        counter = 0;
        cin>>str;
        //getline(cin,str);
        for(j = 0; j < 100; j = j + 1){
            if(str[j] >= 'a' && str[j] <= 'z'){
                counter = counter + 1;
            }
            else if(str[j]==' '){
                counter = counter + 1;
            }
            else{
                break;
            }

        }
        cout<<" counter is :";
        cout<<counter;
    }
    return 0;
}
