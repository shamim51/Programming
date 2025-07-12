#include<iostream>
using namespace std;

bool hasMoreVowels(string str){
    int vowel = 0;
    int consonant = 0;
    for(int i = 0; i < str.length(); i = i + 1){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u'){
            vowel++;
        }
        else{
            consonant++;
        }
    }
    if(vowel>consonant){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    string str;
    cin>>str;
    cout<<hasMoreVowels(str);
    return 0;
}