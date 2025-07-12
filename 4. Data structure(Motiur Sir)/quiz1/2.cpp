#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void averageWeight(string str){
    ifstream myfile(str);
    if(!myfile.is_open()){
        return;
    }
    int sum = 0;
    string name = "";
    string num = "";
    string line = ""; 
    while (getline(myfile, line)){
        int size = line.length();
        cout<<"size = "<<size<<endl;
        int counter = 0;
        int i = 0;
        for (int i = 0; i < size; i++)
        {
            while(line[i] != ' '){
                
                if(counter == 0){
                    name = name + line[i];
                    i++;
                    //cout<<name<<" ";
                }
                if(counter > 0){
                    num = num + line[i];
                    i++;
                    //cout<<num<<" ";
                }
                if(line[i] == ' '){
                    counter++;
                }
            }
            if(counter == 1){
                cout<<name<<" ";
                name = "";
            }
            else{
                cout<<num<<" ";
                num = "";
            }
            // if(counter == 1){
            //     cout<<name<<" ";
            // }
            // else{
            //     sum = sum + stof(num);
            // }

        }
        cout<<endl;
        //cout<<sum<<endl;
        
    }
    
    
}

int main()
{
    averageWeight("C:/Users/shami/C++ programming/4. Data structure(Motiur Sir)/File Read Write/shamim.txt");
    
    return 0;
}