#include <iostream>

using namespace std;

int count_Vowel(string, int);
void initialize_character_array(char c[],int n);

int main()
{
    string name[10];
    initialize_character_array(name, 10);
    int i = 0;
    cout << "enter name: ";
    cin>>name;



    cout<<count_Vowel(name, 0);

    return 0;
}

int count_Vowel(string str, int i){
    int sum = 0;
    if(str[i]==NULL){
        return sum;
    }
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        sum = sum + 1;
        return sum + count_Vowel(str, i + 1);
    }



}
void initialize_character_array(char c[],int n){

    int i;
    for(i=0;i<n;i=i+1){
        c[i]='\0';
    }

}

