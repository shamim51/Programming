#include <iostream>

using namespace std;
class son{
    string name;
    int age;
public:
    void setInfo(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
    }
    void showInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age;
    }
};

int main()
{
    son s;
    s.setInfo();
    s.showInfo();
    return 0;
}
