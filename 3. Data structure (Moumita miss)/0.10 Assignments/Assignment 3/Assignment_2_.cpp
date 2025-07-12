#include<iostream>

using namespace std;

int main()
{
    /*
    int col;
    string start_day;
    cout<<"enter starting day: ";
    cin>>start_day;
    string day [] = {"sun", "mon", "tue", "wed", "thr", "fri", "sat"};
    for(int i = 0; i < 1; i = i + 1){
        int N = 0;
        int **day_of_month = new int*[6];
        for(int j = 0; j < 6; j = j + 1){
            bool s;
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
                if(N > 30){
                    s = true;
                    break;
                }
                cout<<N<<" ";
            }
            cout<<endl;
            if(s) break;
 
        }


    }
    */

    string day;
    cin>>day;
    int N = 1, j;
    string start_day = "mon";
    string days_week [] = {"sun", "mon", "tue", "wed", "thu", "fri", "sat"};
    for(int j = 0; j < 7; j = j + 1){
        cout<<days_week[j]<<"     ";
    }
    cout<<endl;

    int **days_month = new int*[6];
    for(int i = 0; i < 6; i = i + 1){
        int k = 0;
        while (days_week[k] != start_day)
        {
            cout<<"        ";
            k = k + 1;
        }
        // cout<<"1       "<<"2       "<<"1       "<<"2       "<<"1       "<<"2       "<<"1       "<<endl;
        // cout<<"10      "<<"11      "<<"10      "<<"11      "<<"10      "<<"11      "<<"10     "<<endl;
        int column = 7 -k;
        days_month[i] = new int[column];
        for(j = 0; j < column; j = j + 1){
            days_month[i][j] = N;
            N = N + 1;
        }
        for(int k = 0; k < column; k = k + 1){
            if(days_month[i][k] > 9){
                cout<<days_month[i][k]<<"      ";
            }
            else{
                cout<<days_month[i][k]<<"       ";
            }
        }
        cout<<endl;
        start_day = days_week[0];

    }


  return 0;
}