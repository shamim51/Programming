#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream myfile("C:/Users/shami/C++ programming/4. Data structure(Motiur Sir)/File Read Write/shamim.txt");
    if(!myfile.is_open()){
        cout<<"file Not found"<<endl;
    }
    string str = "";
    getline(myfile, str);
    cout<<str<<endl;
    getline(myfile, str);
    cout<<str<<endl;
    getline(myfile, str);
    cout<<str<<endl;
    getline(myfile, str);
    cout<<str<<endl;
    
    return 0;
}