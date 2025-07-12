#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int k = 0; k < T; k ++){
        int N, j, No_5, No_2;
        No_5 = 0;
        No_2 = 0;
        cin>>N;
        for(int i = 1; i <= N; i = i + 1){
            j = i;
            while (j != 0)
            {
                if(j % 5 == 0){
                    j = j/5;
                    No_5 = No_5 + 1;
                }
                else if(j % 2 == 0){
                    j = j /2;
                    No_2 = No_2 + 1;
                }
                else{
                    //cout<<"j = "<<j<<" No_of_2 = "<<No_2<<endl;
                    break;
                }
            }
        }
        cout<<No_5<<endl;
        //cout<<"No of 2 = "<<No_2<<endl;
    }
    
    return 0;
}