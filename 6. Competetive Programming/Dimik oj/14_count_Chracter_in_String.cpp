#include<iostream>
#include<string>

using namespace std;

int main()
{
    int T, str_Size;
    string str;
    char ch;
    cout<<"enter T = ";
    cin>>T;
    for(int i = 0; i < T*2; i++){
        int count = 0;
        getline(cin, str);
        //cout<<str<<endl;
        cin>>ch;
        // str_Size = str.length();
        // cout<<str_Size<<endl;
        for(int j = 0; j < str.length(); j ++){
            //count<<str[j];
            if(str[j] == ch){
                count = count + 1;
            }
        }
        if(count > 0){
            cout<<"Occurrence of '"<<ch<<"' in "<<str<<" = "<<count<<endl;
        }
        else{
            cout<<"'"<<ch<<"' is not present"<<endl;
        }

    }
    
    return 0;
}