#include <iostream>

using namespace std;

struct student{
    int id; //190000;
    string name;

    void showinfo(){
        cout<<id<<" "<<name;
    }

};

int main()
{
    int i = 10;//stack

    cout<<&i;
    return 0;
}
