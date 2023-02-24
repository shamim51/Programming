#include <iostream>
using namespace std;

struct Student{
    int id;
    string name;
    float cgpa;

    void setStudInfo(){
        cout<<"enter id: ";
        cin>>id;
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter cgpa: ";
        cin>>cgpa;
    }
    void showStudInfo(){
        cout<<"student name: "<<name<<", student id: "<<id<<", student cgpa: "<<cgpa<<endl;

    }

};

int main()
{
    Student asif;
    asif.setStudInfo();

    Student shamim;
    shamim.setStudInfo();

    cout<<"printing asifs info"<<endl;
    asif.showStudInfo();

    cout<<"printing shamims info"<<endl;
    shamim.showStudInfo();


    return 0;
}
