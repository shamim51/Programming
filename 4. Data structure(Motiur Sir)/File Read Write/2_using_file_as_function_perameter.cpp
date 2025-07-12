#include<iostream>
#include<fstream>
using namespace std;

void inputStats(string str){
    float average = 0.0;
    ifstream myfile(str);
    if(!myfile.is_open()){
        return;
    }
    string str1 = "";
    int i = 1;
    int longest = 0;
    float total = 0;
    while (getline(myfile, str1))
    {
        int size = (str1.length());
        total = total + size;
        if(size>longest){
            longest = size;
        }
        cout<<"Line "<<i<<" has "<<size<<" chars"<<endl;
        i++;
        
    }
    average = total/(i-1);
    cout<<i-1<<" lines"<<";"<<" longest = "<<longest<<","<<" average = "<<average;
    
}

int main()
{
    inputStats("C:/Users/shami/C++ programming/4. Data structure(Motiur Sir)/File Read Write/shamim.txt");
    
    return 0;
}