#include<iostream>

using namespace std;

int main()
{
    int col;
    string start_day;
    cout<<"enter starting day: ";
    cin>>start_day;
    string day [] = {"sun", "mon", "tue", "wed", "thr", "fri", "sat"};
    for(int i = 0; i < 1; i = i + 1){
        int N = 1;
        int **day_of_month = new int*[6];
        for(int j = 0; j < 6; j = j + 1){
            int k = 0;
            while (start_day!= day[k]);
            {
                cout<<"   ";
                k = k + 1;
            }
            col = 7 - k;
            for(int c = 0; c < col; c = c + 1){
                day_of_month[j] = new int[col];

            }
            for(int d = 0; d < col; d = d + 1){
                day_of_month[j][d] = N;
                N++;
                cout<<N<<" ";
            }
            if(N == 30) break;
 
        }


    }
    
    return 0;
}