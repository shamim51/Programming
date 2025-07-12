#include<iostream>
#include<fstream>
using namespace std;
float averageValueInFile(string fileName){
    float num, total, average;
    average = 0.0;
    int counter;
    counter = 0;
    total = 0;
    ifstream myfile(fileName);
    
    string str = "";
    getline(myfile, str);
    int size = str.size();
    if(size == 0){
        return average;
    }
    myfile.close();

    ifstream myanotherfile(fileName);
    while(myanotherfile>>str){
        num = stof(str);

        total = total + num;
        counter ++;
    }
    average = total /counter;
    
    return average;

}

int main()
{
    float avg;
    avg = averageValueInFile("C:/Users/shami/C++ programming/4. Data structure(Motiur Sir)/File Read Write/shamim.txt");
    cout<<avg;

    
    return 0;
}