#include<iostream>

using namespace std;

struct user
{
    string name; //8b
    string account_number; //8b
    int CB; //4b
    
    void check_CB()
    {
        cout<<CB<<endl;
    }
    void deposite_money(int i){

        CB = CB + i;
    }
    void withdraw_money(int j){
        CB = CB - j;
    }
};


int main()
{
    user p1;
    p1.name = "shamim";
    p1.account_number = "12345";
    p1.CB = 500;
    p1.check_CB();
    p1.deposite_money(200);
    p1.check_CB();
    

    user *u = new user[10];
    u[0].name = "xyz";
    u[0].account_number = "25342";
    u[0].CB = 258;
    delete [] u;
}