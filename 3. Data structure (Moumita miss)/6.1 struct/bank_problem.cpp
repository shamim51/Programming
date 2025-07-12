#include<iostream>

using namespace std;

struct account{
    string Name;
    int person_No; //added
    int ac_No = 0;
    int current_balance = 0;

    void withdraw_money(int amount){
        current_balance = current_balance - amount;
    }
    void depositeOradd(int amount){
        current_balance = current_balance + amount;
    }
    void check_Balance(){
        cout<<"current balance: "<<current_balance<<endl;
    }
};

int main()
{
    int *arr = new int[2];

    account *konoz = new account;
    konoz->person_No = 0;
    konoz->Name = "konoz";
    konoz->ac_No = 12345;
    konoz->current_balance = 100000;

    arr[konoz->person_No] = konoz->current_balance;



    // konoz->check_Balance();
    // konoz->depositeOradd(50000);
    // konoz->check_Balance();
    // konoz->withdraw_money(100000);
    // konoz->check_Balance();

    account *shamim = new account;
    shamim->person_No = 1;
    shamim->Name = "shamim";
    shamim->ac_No = 12346;
    shamim->current_balance = 50000;

    arr[shamim->person_No] = shamim->current_balance;

    for(int i = 0; i < 2; i = i + 1){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}