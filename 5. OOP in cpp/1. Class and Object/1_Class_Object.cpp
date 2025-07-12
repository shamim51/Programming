#include<iostream>
using namespace std;
class adress
{
private:
    string address;
public:
    void setadrs(){
        cout<<"enter address = ";
        cin>>adress;
    }
    void showadrs(){

    }
};

1_Class_Object::1_Class_Object(/* args */)
{
}

1_Class_Object::~1_Class_Object()
{
}


class student{
    int id;
    string name;
    float cgpa;

public:
    student& setEmpinfo(){
        cout<<"enter id = ";
        cin>>id;
        cout<<"enter name = ";
        cin>>name;
        cout<<"enter cgpa = ";
        cin>>cgpa;

        return *this;
    }

    void showEmpinfo(){
        cout<<"id = "<<id<<", Name = "<<name<<", Cgpa = "<<cgpa;

    }

};

int main()
{
    student shamim;
    // shamim.id = 19108;
    // shamim.name = "shamim";
    // shamim.cgpa = 3.5;
    shamim.setEmpinfo().showEmpinfo();
    //shamim.showEmpinfo();

    return 0;
}