#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;
 
int main()
{
    srand(time(0));
    int r, word_No, length_Of_Array, strLength;
    char ch;
    string words[] = {"award", "await", "attend", "bubble", "coding", "spring", "mango", "night", "orange", "reward"};

    string str, str1;

    length_Of_Array = sizeof(words)/sizeof(words[0]);
    word_No =  rand () % length_Of_Array;
    str = words[word_No];
    cout<<str<<endl;
    
    strLength = str.length();

    for(int i = 0; i < strLength; i = i + 1){
        str1[i]='-';
    }

    for(r = 0; r < (strLength + 2); r = r + 1){
        bool t_f = true;
        for(int j = 0; j < strLength; j = j + 1){ //this will print the str for each r value;
            cout<<str1[j];
        }
        cout<<endl;
        cout<<"Guess a letter: ";
        cin>>ch;

         for(int j = 0; j < strLength; j = j + 1){ //checking and replacing "-" with the letter if the letter found in str;
             if(str[j]==ch){

                 str1[j]=str[j];
             }
        }
        

        //
        for(int i = 0; i < strLength; i = i + 1){
            if(str[i]!=str1[i]){
                t_f = false;
            }
    
        }
        if(t_f == 1){      //if the user guessed correct within limit this will execute;
            for(int j = 0; j < strLength; j = j + 1){
                cout<<str1[j];
            }
            cout<<endl;
            cout<<"Correct guess!";
            r = (strLength + 2); //this will break the loop
        }

        if(r == (strLength + 1)){   //if the guessing limit exceed this will execute;
            cout<<"You reached the maximum guessing limit"<<endl;
            cout<<"Correct word: ";
            for(int j = 0; j < strLength; j = j + 1){
                cout<<str[j];
            }
            
        }
    }
    return 0;
}