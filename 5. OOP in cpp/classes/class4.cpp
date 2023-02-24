/*
#include<iostream>
using namespace std;

int main(){
    int x=10;   //local to the entire function
    int j;
    for(int i=0; i<10;i++){
        int k;  //local to the loop
        cout<<i;
        //i is local to the for loop
    }
    //cout<<i;    //error

    {
        int q=20;
        cout<<q;

    }

    cout<<q;

    for(j=0; j<10;j++){
        cout<<j;
    }

    cout<<j;

    return 0;
}
*/
//---------------------------------------------------------------------
/*
#include<iostream>
using namespace std;

struct Student{
    void setStudInfo(){
        cout<<"Enter ID: "; cin>>id;
        cin.ignore();
        cout<<"Enter Name: "; getline(cin, name);
        cout<<"Enter cgpa: "; cin>>cgpa;
    }
    void showStudInfo(){
        cout<<"ID="<<id<<", Name="<<name<<", Cgpa="<<cgpa<<endl;
    }
    private:
    int id; string name; float cgpa;
};

class Employee{
    int id; string name; float salary;
    public:
    void setEmpInfo(){
        cout<<"Enter employee ID: "; cin>>id;
        cin.ignore();
        cout<<"Enter Employee Name: "; getline(cin, name);
        cout<<"Enter salary: "; cin>>salary;
    }
    void showEmpInfo(){
        cout<<"ID="<<id<<", Name="<<name<<", Salary="<<salary<<endl;
    }
};

Student shafiq;

int main(){
    Student asif;
    //cout<<asif.id;  //OK
    asif.setStudInfo();
    asif.showStudInfo();

    Employee rana;
    //cout<<rana.id;  //ERROR
    rana.setEmpInfo();
    rana.showEmpInfo();

    return 0;
}
*/
//---------------------------------------------------------------------

#include <iostream>
using namespace std;

class ComplexNo
{
    int real, img;

public:
    void setReal(int val) { real = val; }
    void setImg(int val) { img = val; }

    int getReal() { return real; }
    int getImg() { return img; }

    void setComplexNo()
    {
        cout << "Enter real value: ";
        cin >> real; //cin>> this->real;
        cout << "Enter imaginary value: ";
        cin >> img; //cin>>(*this).img;
    }
    void showComplexNo()
    {
        cout << real << (img < 0 ? "" : "+") << img << "i" << endl;
        //cout<<real<<"+"<<img<<"i"<<endl;
    }
    ComplexNo add(ComplexNo c)
    {
        ComplexNo temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    void add(ComplexNo com1, ComplexNo com2)
    {
        real = com1.real + com2.real;
        img = com1.img + com2.img;
    }

    ComplexNo operator+(ComplexNo c)
    {
        ComplexNo temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    ComplexNo operator+(int val)
    { //change real only
        ComplexNo temp;
        temp.real = real + val;
        temp.img = img;
        return temp;
    }
    friend ComplexNo operator+(int, ComplexNo);
};

ComplexNo operator+(int val, ComplexNo c)
{
    ComplexNo temp;
    //temp.real = c.real + val;     //fields are private
    //temp.img = c.img;             //fields are private

    //option-1:
    //temp = c + val;

    //option-2:
    //temp.setReal(c.getReal()+val);
    //temp.setImg(c.getImg());

    //option-3:
    temp.real = c.real + val; //private fields are accessible, as this function is a friend of the class
    temp.img = c.img;         //private fields are accessible

    return temp;
}

int main()
{

    ComplexNo c1, c2, c3, c4, c5;
    c1.setComplexNo();
    cout << "Complex No c1 = ";
    c1.showComplexNo();

    c2.setComplexNo();
    cout << "Complex No c2 = ";
    c2.showComplexNo();

    c3 = c1.add(c2);
    c3 = c1 + c2; //    c3 = c1.operator+(c2);

    cout << "After c3=c1+c2; c3 = ";
    c3.showComplexNo(); //4+6i
    c4 = c3 + 10;       //    c4 = c3.operator+(10);
    cout << "After c4=c3+10; c4 = ";
    c4.showComplexNo(); //14+6i

    c5 = 2 + c4;
    c5 = operator+(2, c4);
    //c5 = 2.operator+(c4); //operator+ can not work here as a method, as 2 can't be client

    cout << "After c5=2+c4; c5 = ";
    c5.showComplexNo(); //14+6i
}
