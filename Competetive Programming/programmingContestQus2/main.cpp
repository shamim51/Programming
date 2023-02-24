#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[n];
    int t[n];
    for(int i = 0; i < n; i++){
      cin>>s[i]>>t[i];
    }
    string x;
    cin>>x;

    int tsec = 0;

    int flag = 0;
    for(int i = 0; i < n; i++){

      if(flag == 1) tsec = tsec + t[i];
      if(s[i] == x){
        flag = 1;
      }
    }
    cout<<tsec<<endl;

    return 0;
}

