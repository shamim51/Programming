#include<iostream>

using namespace std;

void store_Vowel_Consonant(string input){
    int vowel_counter = 0;
    int consonant_counter = 0;
    int count1 = 0;
    int count2 = 0;
    int size = input.size();
    for(int i = 0; i < size; i = i + 1){
        if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' ){
            vowel_counter = vowel_counter + 1;
        }
        else{
            consonant_counter = consonant_counter + 1;
        }
    }
    string *vowels = new string[vowel_counter];
    string *consonants = new string[consonant_counter];

    for(int i = 0; i < size; i = i + 1){
        if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' ){
            vowels[count1] = input[i];
            count1++;
        }
        else{
            consonants[count2] = input[i];
            count2++;
        }
    }
   
   //dsiplaying 
   cout<<"vowels: "<<endl; 
    for(int i = 0; i < vowel_counter; i ++){
        cout<<vowels[i]<<" ";
    }
    cout<<endl<<"consonants: "<<endl;
    for(int i = 0; i < consonant_counter; i ++){
        cout<<consonants[i]<<" ";
    }

}

int main()
{
    string str;
    str = "konoz";
    store_Vowel_Consonant(str);
    
    return 0;
}