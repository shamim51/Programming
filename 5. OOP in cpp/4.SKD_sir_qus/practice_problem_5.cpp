#include <iostream>

using namespace std;

class HardDisk
{
    int rpm, capacityInGB;
    // fields: rpm (int), capacityInGB(int),
public: // add necessary methods including setters and getters,
    HardDisk()
    {
        rpm = 0;
        capacityInGB = 0;
    }
    void setHddInfo(){
        cout<<"enter rpm: ";
        cin>>rpm;
        cout<<"capacity In GB: ";
        cin>>capacityInGB;
    }
    void showHddInfo(){
        cout<<"rpm = "<<rpm<<endl;
        cout<<"capacity in GB = "<<capacityInGB<<endl;
    }
    int getCapacity(){
        return capacityInGB;
    }
    // AND/OR declare friends, so that the given main() works
};
class Computer
{
    int noOfHDD;
    float speedInGhz, price;
    string brand;
    HardDisk *hddArr;
    // fields: brand (string), speedInGhz(float), noOfHDD (int), hddArr (HardDisk*), price (float)
public: // add necessary methods including setters and getters,
    Computer()
    {
        noOfHDD = 0;
        speedInGhz = price = 0;
        brand = "TBA";
    }
    void setCompInfo(){
        cout<<"enter Brand: ";
        cin>>brand;
        cout<<"enter price: ";
        cin>>price;
        cout<<"enter speed in Ghz: ";
        cin>>speedInGhz;
        cout<<"enter no of Hdd";
        cin>>noOfHDD;
        hddArr = new HardDisk[noOfHDD];
        for(int i = 0; i < noOfHDD; i++){
            cout<<"enter "<<i+1<<" no Hdd info "<<endl;
            hddArr[i].setHddInfo();
        }
    }
    void showCompInfo()
    {
        cout<<"Brand = "<<brand<<endl;
        cout<<"price = "<<price<<endl;
        cout<<"speed in Ghz = "<<speedInGhz<<endl;
        for(int i = 0; i < noOfHDD; i++)
        {
            hddArr[i].showHddInfo();
        }
    }
    int getCapacityForAllHdd()
    {
        int totalCapacity = 0;
        for(int i = 0; i < noOfHDD; i++){
            totalCapacity = totalCapacity + hddArr[i].getCapacity();
        }
        return totalCapacity;
    }
    // AND/OR declare friends, so that the given main() works
};
class ComputerLab
{
    int noOfComputer;
    string roomNo;
    Computer *compArr;
    // fields: roomNo (string), noOfComputer (int), compArr (Computer*)
public:
    ComputerLab()
    {
        noOfComputer = 0;
        roomNo = "TBA";
    }
    ComputerLab& setLabInfo(){
        cout<<"enter Room No: ";
        cin>>roomNo;
        cout<<"enter No of Computer: ";
        cin>>noOfComputer;
       
        compArr = new Computer[noOfComputer];
        cout<<"***enter All computer information***"<<endl;
        for(int i = 0; i < noOfComputer; i++)
        {
            cout<<"give "<<i+1<<" no computer info: "<<endl;
            compArr[i].setCompInfo();
        }
        return *this;
    }
    void showLabInfo(){
        cout<<"***showing info for A lab"<<endl;
        cout<<"No of Computer = "<<noOfComputer<<endl;
        cout<<"Room No = "<<roomNo<<endl;
        cout<<"No of computer: "<<noOfComputer<<endl;
        cout<<"showing all computer details of lab "<<roomNo<<endl;
        for(int i = 0; i < noOfComputer; i++){
            compArr[i].showCompInfo();
        }
    }
    int getStorage()
    {
        int totalcapacityForAllcomp = 0;
        for(int i = 0; i < noOfComputer; i ++)
        {
            totalcapacityForAllcomp = totalcapacityForAllcomp + compArr[i].getCapacityForAllHdd();
        }
        return totalcapacityForAllcomp;
    }
    
    bool operator>=(int totalComputer){
        if(noOfComputer >= totalComputer) return true;
        else return false;
    }
};
void operator+=(int &totalStorage, ComputerLab lab){
    totalStorage = totalStorage + lab.getStorage();
}
int main()
{
    ComputerLab *labs;
    int n, i;
    cout << "How many computer labs ?" << endl;
    cin >> n;
    labs = new ComputerLab[n];
    int totalStorageOfAllLabsInGB = 0;
    for (int i = 0; i < n; i++)
    {
        labs[i].setLabInfo().showLabInfo();
        totalStorageOfAllLabsInGB += labs[i];
        if (labs[i] >= 30)
            cout << i <<"- th Lab is a big computer Lab."<< endl;
        else
            cout << i <<"- th Lab is a small computer Lab."<< endl;
    }
    cout <<"Total Storage of ALL Labs combined is : "<< totalStorageOfAllLabsInGB<<" GB"<< endl;
    return 0;
}