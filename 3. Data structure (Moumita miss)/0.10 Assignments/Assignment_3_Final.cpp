#include<iostream>
#include<limits>
using namespace std;

struct Reminder{
    string title;
    string description;
    int date;
    string month;
    Reminder *next;

    void setInfo(){
        cout<<"Enter Title: ";
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        getline(cin, this->title);
        cout<<"Enter description: ";
        getline(cin, this->description);
        cout<<"Enter Date: ";
        cin>>date;
        cout<<"Enter month: ";
        cin>>month;
    }

    void showInfo(){
        cout<<"Title: "<<title<<endl;
        cout<<"Description: "<<description<<endl;
        cout<<"Date: "<<date<<endl;
        cout<<"Month: "<<month<<endl<<endl;
    }
};

Reminder *head = NULL;

void Add_Reminder();
void update_Reminder();
void delete_A_Reminder();
void show_All_Reminder_of_A_month();
bool check_for_reminder(int, int);

void converter(string, string &);
string convert_int_into_month(int);
bool leap_Year(int);
void print_month(int, string, int, string[]);
int total_day_counter(int, int);

int main()
{
    int year;
    cout<<"Year: ";
    cin>>year;

    int month = 1;

    int choice;

    string day;
    cout<<"Starting day of the year: ";
    cin>>day;
    string start_day;
    converter(day, start_day);

    string months_arry[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "Ocotber", "November", "December"};
    print_month(month, start_day, year, months_arry);

       do
        {
            cout<<"Enter [1] to add a Reminder"<<endl;
            cout<<"Enter [2] to Update a Reminder"<<endl;
            cout<<"Enter [3] to Delete a specific reminder"<<endl;
            cout<<"Enter [4] to View all the reminders of a specific month"<<endl;
            cout<<"Enter [0] to exit!"<<endl;
            
            cout<<"Enter your choice: ";
            cin>>choice;
            
            switch(choice)
            {
                case 1: 
                    Add_Reminder();
                    break;
                    
                case 2 :
                    update_Reminder();
                    break;
                    
                case 3 :
                    delete_A_Reminder();
                    print_month(month, start_day, year, months_arry);
                    break; 
                    
                case 4 :
                    show_All_Reminder_of_A_month();
                    break;  
            }
                        
        }
        while(choice!=0);
    

    return 0;
}

void print_month(int month, string start_day, int year, string months_Array[]){

    if(month == 13) return; //base case;

    cout<<"--------------------"<<months_Array[month-1]<<"--------------------"<<endl;

    int total_days;
    int start_day_of_next_month;

    total_days = total_day_counter(month, year);

    int day_counter = 1;

    string days_week [] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"}; 
    for(int j = 0; j < 7; j = j + 1){
        cout<<days_week[j]<<"     ";  // sun     mon    tue    wed    thu    fri   sat
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
            days_month[i][j] = day_counter; 
            day_counter ++;
        }

        for(int k = 0; k < column; k = k + 1){
           
            if(days_month[i][k] > 9){

                if(check_for_reminder(month, days_month[i][k])){
                    cout<<"*"<<days_month[i][k]<<"     ";
                }
                else{
                    cout<<days_month[i][k]<<"      ";
                }
                
                if(days_month[i][k] == total_days){      //this will check month days limit .   31/30/28/29
                    start_day_of_next_month = k+1;
                    k = column; 
                    i = 6;
                }
            }
            else{
                if(check_for_reminder(month, days_month[i][k])){
                    cout<<"*"<<days_month[i][k]<<"      ";
                }
                else{
                    cout<<days_month[i][k]<<"       ";
                }
                
            }
        }
        cout<<endl;
        start_day = days_week[0];

    }

    if(start_day_of_next_month == 7){
        start_day_of_next_month = 0;
    }

    start_day = days_week[start_day_of_next_month]; //this will update the starting da

    // for(int i = 0; i < 6; i = i + 1){
    //     delete [] days_month[i];
    // }
    // delete [] days_month;

    print_month(month+1, start_day, year, months_Array); //Recursive calling

}

void converter(string day, string &startday){
    if(day == "Saturday") startday = "Sat";
    else if(day == "Sunday") startday = "Sun";
    else if(day == "Monday") startday = "Mon";
    else if(day == "Tuesday") startday = "Tue";
    else if(day == "Wednesday") startday = "Wed";
    else if(day == "Thursday") startday = "Thu";
    else if(day == "Friday") startday = "Fri";

}

string convert_int_into_month(int month_no){
    if(month_no == 1) return "January";
    if(month_no == 2) return "February";
    if(month_no == 3) return "March";
    if(month_no == 4) return "April";
    if(month_no == 5) return "May";
    if(month_no == 6) return "June";
    if(month_no == 7) return "July";
    if(month_no == 8) return "August";
    if(month_no == 9) return "September";
    if(month_no == 10) return  "Ocotber";
    if(month_no == 11) return  "November";
    if(month_no == 12) return  "December";
    return "";
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

int total_day_counter(int month, int year){
    int total_days;
    if(month == 2){
        if(leap_Year(year)){
            total_days = 29;
        }
        else{
            total_days = 28;
        }
    }
    else if(month > 7){
        if(month%2 == 0){
            total_days = 31;
        }
        else{
            total_days = 30;
        }
    }
    else if(month%2 == 1){
        total_days = 31;
    }
    else if(month%2 == 0){
        total_days = 30;
    }

    return total_days;
}

void Add_Reminder(){
    cout<<"-----adding reminder-----"<<endl;
    Reminder *newReminder = new Reminder;
    newReminder->setInfo();
    newReminder->next = NULL;

    if(head == NULL){
        head = newReminder;
    }
    else{
        Reminder *current_reminder = head;
        while(current_reminder->next != NULL){
            current_reminder = current_reminder->next;
        }
        current_reminder->next = newReminder;
    }
}

void update_Reminder(){
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string title_for_update;
    string updated_title;
    string updated_month;
    int updated_date;
    cout<<"enter Title for update a Reminder: ";
    getline(cin, title_for_update);
    Reminder *current = head;
    while(current->title != title_for_update){
        current = current->next;
        if(current ==  NULL){
            cout<<"You Entered the Wrong Title"<<endl;
            return;
        }
    }
    cout<<"Enter new title: ";
    getline(cin, updated_title);
    //cin.ignore(numeric_limits<streamsize>::max(),'\n');
    current->title = updated_title;
    cout<<"Enter new date:";
    cin>>updated_date;
    current->date = updated_date;
    cout<<"Enter new month: ";
    cin>>updated_month;
    current->month = updated_month;
}

void delete_A_Reminder(){
    
    cout<<"deleting specific reminder: "<<endl;
    
    string title_for_delete;
    string month_for_delete;
    int date_for_delete;
    cout<<"enter title: ";
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    getline(cin, title_for_delete);
    cout<<"enter month: ";
    cin>>month_for_delete;
    cout<<"enter date: ";
    cin>>date_for_delete;
    Reminder *current = head;
    if(head->title == title_for_delete && head->month == month_for_delete && head->date == date_for_delete){
        current = head;
        head = head->next;
        cout<<"Reminder ->"<<current->title<<" deleted successfully"<<endl;
        delete current;
        
    }
    else{
        Reminder *Reminder_for_deleted;
        while(current->next != NULL){
            if(current->next->title == title_for_delete && current->next->month == month_for_delete && current->next->date == date_for_delete){
                Reminder_for_deleted = current->next;
                current->next = Reminder_for_deleted->next;
                cout<<"Reminder ->"<<Reminder_for_deleted->title<<" deleted successfully"<<endl;
                delete Reminder_for_deleted;
                return;
            }
        
        }
        cout<<"You Enter the wrong Title"<<endl;
    }
    
}

void show_All_Reminder_of_A_month(){
    string month_Name;
    cout<<"Enter month name for show all the Reminder of A month: ";
    cin>>month_Name;
    Reminder *current_Reminder = head;
    while(current_Reminder!=NULL){
        if(current_Reminder->month == month_Name){
            current_Reminder->showInfo();
        }
        current_Reminder = current_Reminder->next;
    }
}

bool check_for_reminder(int month, int date_no){
    string month_for_checking;
    month_for_checking = convert_int_into_month(month);
    if(head == NULL){
        return false;
    }
    else{
        Reminder *current_reminder = head;
        while (current_reminder!=NULL)
        {
            if(current_reminder->month == month_for_checking && current_reminder->date == date_no){
                return true;
            }
            current_reminder = current_reminder->next;
        }
    }
    return false;
    
}