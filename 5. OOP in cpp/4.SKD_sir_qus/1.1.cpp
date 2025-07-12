#include<iostream>

using namespace std;

class Address{
    int houseNO, roadNo, street, zipCode;
    string thana, district;

    public:
    Address(){
        houseNO = 0;
        roadNo = 0;
        street = 0;
        zipCode  = 0;
        thana = district = "TBA";
    }
    void setAdress(){
        cout<<"enter houseNo = ";
        cin>>houseNO;
    }


    void setHouseNo(int hNo){
        houseNO = hNo;
    }
    void setRoadNo(int rNo){
        roadNo = rNo;
    }
    void setStreet(int SNo){
        street = SNo;
    }
    void setZip(int zip){
        zipCode = zip;
    }
    void setThana(string ThanaName){
        thana = ThanaName;
    }
    void setDistrict(string districtName){
        district = districtName;
    }


    void showEmpAddress(){
        cout<<"house NO = "<<houseNO<<endl;
        cout<<"road NO = "<<roadNo<<endl;
        cout<<"street No = "<<street<<endl;
        cout<<"zip code = "<<zipCode<<endl;
        cout<<"thana = "<<thana<<endl;
        cout<<"district = "<<district<<endl;
    }


    // friend void showEmpinfo();
};

class Employee{
    int employeeID;
    string name, department;

    Address empAddress;

    public:
    Employee(){
        employeeID = 0;
        name = "TBA";
        department = "TBA";

    }
    void showEmpinfo(){
        cout<<"employeeId = "<<employeeID<<endl;
        cout<<"name = "<<name<<endl;
        cout<<"department = "<<department<<endl;
        // cout<<"house no = "<<empAddress.houseNO;
        empAddress.showEmpAddress();
    }
};

int main()
{
    Employee e1;// e2(4161, "S K Dey", CSE); 
    e1.showEmpinfo();
    //parameterized constructor also ask for address details

    //cout<<"Give input for employee !: "<<endl;
    //cin>>e1;
    //Should ask employeeID, name, department.
    //Then ask address related information.

    // cout <<"Complete information of the employees are: " << endl;
    // cout<< e1 << e2 << endl;

    // cout<<"The employee e1 ";
    // if(e1 == 1229)cout << "lives in Bashundhara R/A." << endl;
    // else cout << "does NOT lives in Bashundhara R/A." << endl;
    //comparing zipCode field


    
    return 0;
}