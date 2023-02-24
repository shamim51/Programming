#include<iostream>

using namespace std;

class Address{                     // MUST have houseNo, roadNo, street, thana, district, zipCode, etc. as private fields
    int houseNo, roadNo, zipCode;
    string street, thana, district;
public:
    Address(){
        houseNo = 0;
        roadNo = 0;
        zipCode = 0;
        street = thana = district = "TBA";
    }
    void setEmpAdress(){
        cout<<"enter house No: ";
        cin>>houseNo;
        cout<<"enter road No: ";
        cin>>roadNo;
        cout<<"enter zip code: ";
        cin>>zipCode;
        cout<<"enter street: ";
        cin>>street;
        cout<<"enter thana: ";
        cin>>thana;
        cout<<"enter district: ";
        cin>>district;
    }

    void showEmpAdress(){
        cout<<"house NO: "<<houseNo<<", road NO: "<<roadNo<<", zipcode: "<<zipCode<<", street: "<<zipCode<<", thana: "<<thana<<", district: "<<district<<endl;
    }

    int getzipcode(){
        return zipCode;
    }


};
class Employee{                      // MUST have employeeID, name, department and the following as private fields
    int employeeId, salary;
    string name, department;
    Address empAddress;
public:
    Employee(){
        employeeId = salary = 0;
        name = department = "TBA";
    }
    Employee(int employeeId, string name, string department, int salary){
        this->employeeId = employeeId;
        this->name = name;
        this->department = department;

        empAddress.setEmpAdress();

    }
    void setEmpInfo(){
        cout<<"Enter employee id: ";
        cin>>employeeId;
        cout<<"Enter employee name: ";
        cin>>name;
        cout<<"Enter employee department: ";
        cin>>department;
        cout<<"Enter employee salary: ";
        cin>>salary;

        empAddress.setEmpAdress();
    }

    void showEmpInfo(){
        cout<<"employee Id: "<<employeeId<<", name: "<<name<<", department: "<<department<<endl;
        empAddress.showEmpAdress();
    }

    float operator+(Employee e){
        return salary + e.salary;
    }

    bool operator==(int zipcode){
        if(empAddress.getzipcode() == zipcode){
            return true;
        }
        else{
            return false;
        }
    }



};

int main()
{
    Employee skd, mahady(4161, "Mahady", "CSE", 20000);
    cout << "Give input for employee 1:  "<< endl;

    //cin>>skd;
    skd.setEmpInfo();
    cout<<"Complete information of employee: "<<endl;
    skd.showEmpInfo();
    mahady.showEmpInfo();
    cout<<"Average salary of skd and mahady is: ";
    cout<<(skd+mahady)/2<<endl;
    cout<<"employee e1 ";
    if(skd == 1239){
        cout<<"skd lives in Bashundhara R/A"<<endl;
    }
    else{
        cout<<"skd does not lives in Bashundhara R/A"<<endl;
    }
    
    
    return 0;
}