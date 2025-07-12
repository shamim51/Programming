#include<iostream>
using namespace std;

void converter(string day, string &startday){
    if(day == "saturday") startday = "sat";
    else if(day == "sunday") startday = "sun";
    else if(day == "monday") startday = "mon";
    else if(day == "tuesday") startday = "tue";
    else if(day == "wednesday") startday = "wed";
    else if(day == "thursday") startday = "thu";
    else if(day == "friday") startday = "fri";

}
bool leap_Year(int);
void print_month(int, string, int, string[]);

int main()
{
    string day;
    cout<<"enter starting day : ";
    cin>>day;
    string start_day;
    converter(day, start_day);
    string months_arry[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "Ocotber", "November", "December"};
    
    // string day;
    // cout<<"enter starting day : ";
    // cin>>day;
    // int day_counter = 1;

    // string start_day;
    // converter(day, start_day);

    // string days_week [] = {"sun", "mon", "tue", "wed", "thu", "fri", "sat"}; 
    // for(int j = 0; j < 7; j = j + 1){
    //     cout<<days_week[j]<<"     ";  // sun   mon  tue  wed  thu  fri  sat
    //                                                             // 1     2
    // }
    // cout<<endl;

    // int **days_month = new int*[6];   //this TwoD_dynamic array will store and show days of months exmp: 1 2 3 4 5 6 7 8 9 10....
    // for(int i = 0; i < 6; i = i + 1){
    //     int k = 0;
    //     while (days_week[k] != start_day)
    //     {
    //         cout<<"        ";
    //         k = k + 1;
    //     }
    //     // cout<<"1       "<<"2       "<<"1       "<<"2       "<<"1       "<<"2       "<<"1       "<<endl;
    //     // cout<<"10      "<<"11      "<<"10      "<<"11      "<<"10      "<<"11      "<<"10     "<<endl;
    //     int column = 7 -k;//2
    //     days_month[i] = new int[column];
    //     for(int j = 0; j < column; j = j + 1){
    //         days_month[i][j] = day_counter;  //1 2
    //         day_counter ++;
    //     }

    //     for(int k = 0; k < column; k = k + 1){
           
    //         if(days_month[i][k] > 9){

    //             cout<<days_month[i][k]<<"     *";
    //             if(days_month[i][k] == 31) k = column; //this will check month days limit .   31/30/28/29
    //         }
    //         else{
    //             cout<<days_month[i][k]<<"       ";
                
    //         }
    //     }
    //     cout<<endl;
    //     start_day = days_week[0];

    // }

    print_month(1, start_day, 2015, months_arry);

  return 0;
}
void print_month(int month, string start_day, int year, string months_Array[]){

    if(month == 13) return; //base case;

    cout<<"--------------------"<<months_Array[month-1]<<"--------------------"<<endl;

    int total_days;
    int start_day_of_next_month;

    if(month == 3){
        if(leap_Year(year)){
            total_days = 29;
        }
        else{
            total_days = 28;
        }
    }
    else if(month%2 == 1){
        total_days = 31;
    }
    else if(month%2 == 0){
        total_days = 30;
    }

    int day_counter = 1;


    string days_week [] = {"sun", "mon", "tue", "wed", "thu", "fri", "sat"}; 
    for(int j = 0; j < 7; j = j + 1){
        cout<<days_week[j]<<"     ";  // sun   mon  tue  wed  thu  fri  sat
                                                                // 1     2
    }
    cout<<endl;

    int **days_month = new int*[6];   //this TwoD_dynamic array will store and show days of months exmp: 1 2 3 4 5 6 7 8 9 10....
    for(int i = 0; i < 6; i = i + 1){
        int k = 0;
        while (days_week[k] != start_day)
        {
            cout<<"        ";      // cout<<"        "<<"        "<<"        "<<"        "<<"        "<<"        "<<"        "<<endl;
            k = k + 1;
        }
        
        int column = 7 -k;  //2
        days_month[i] = new int[column];
        for(int j = 0; j < column; j = j + 1){
            days_month[i][j] = day_counter;  //1 2
            day_counter ++;
        }

        for(int k = 0; k < column; k = k + 1){
           
            if(days_month[i][k] > 9){

                cout<<days_month[i][k]<<"      ";
                if(days_month[i][k] == total_days){      //this will check month days limit .   31/30/28/29
                    start_day_of_next_month = k+1;
                    k = column; 
                    i = 6;
                }
            }
            else{
                cout<<days_month[i][k]<<"       ";
                
            }
        }
        cout<<endl;
        start_day = days_week[0];

    }

    if(start_day_of_next_month == 7){
        start_day_of_next_month = 0;
    }

    start_day = days_week[start_day_of_next_month];

    print_month(month+1, start_day, year, months_Array); //Recursive calling

}

bool leap_Year(int year)
{
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            return true;
        }
    }
    if (year % 100 != 0)
    {
        if (year % 4 == 0)
        {
            return true;
        }
    }
    return false;
}