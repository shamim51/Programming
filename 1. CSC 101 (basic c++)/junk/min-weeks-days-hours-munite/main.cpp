#include <iostream>
using namespace std;
//using std::string;

class Employee{
    public:
    string name;
    string company;
    int age;

    void Introduce_yourself(){
    cout<<"name : "<<name<<endl;
    cout<<"company : "<<company<<endl;
    cout<<"age : "<<age<<endl;

    }

};
int main()
{
    Employee employee1;
    employee1.name = "shmaim";
    employee1.company = "google";
    employee1.age = 23;
    employee1.Introduce_yourself();


    return 0;
}
