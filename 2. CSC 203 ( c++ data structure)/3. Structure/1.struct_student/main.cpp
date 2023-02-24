#include <iostream>
using namespace std;

struct Student{
    int id;
    string name;
    float cgpa;

};

int main()
{
    Student asif;

    asif.id = 100;
    asif.name = "asif";
    asif.cgpa = 4.00;

    Student shamim;

    shamim.id = 101;
    shamim.name = "shamim";
    shamim.cgpa = 4.00;

    cout<<"printing asifs info"<<endl;
    cout<<asif.name<<" "<<asif.id<<" "<<asif.cgpa<<endl;

    cout<<"printing shamims info"<<endl;
    cout<<shamim.name<<" "<<shamim.id<<" "<<shamim.cgpa<<endl;


    return 0;
}
