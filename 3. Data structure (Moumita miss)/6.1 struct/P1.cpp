#include<iostream>
using namespace std;

struct donor{
    string name, gender, address, Blood_group;
    int donor_age;
    donor *next;

    void setdonarinfo(){
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter gender: ";
        cin>>gender;
        cout<<" enter address: ";
        cin>>address;
        cout<<"enter Blood group: ";
        cin>>Blood_group;
    }
    void print(){
        cout<<"name: "<<name<<" address: "<<address<<endl;
    }
    void showinfo(){
        cout<<name<<" "<<gender<<" "<<address<<" "<<Blood_group<<endl;
    }
};

donor *head = NULL;

void Add_donor(int age){
    if(age >= 18 && age <65){
        donor *newDonor = new donor;
        newDonor->donor_age = age;
        newDonor->setdonarinfo();
        newDonor->next = NULL;
        if(head == NULL){
            head = newDonor;
            newDonor->showinfo();
        }
        else{
            donor *current_donor = head;
            while(current_donor->next != NULL){
                current_donor = current_donor->next;
            }
            current_donor->next = newDonor;
            //newDonor->showinfo();
        }

    }
    else{
        cout<<"jhamela ache"<<endl;
    }

}

void count_specific_group(string group){
    int count = 0;
    donor *currentdonor = head;
    while(currentdonor != NULL){
        if(currentdonor->Blood_group == group){
            currentdonor->print();
            count = count + 1;
        }
        currentdonor = currentdonor->next;
    }
    cout<<count<<endl;
    
}


int main()
{

    //Add_donor(25);
    Add_donor(20);
    count_specific_group("ab+");


    
    
    return 0;
}