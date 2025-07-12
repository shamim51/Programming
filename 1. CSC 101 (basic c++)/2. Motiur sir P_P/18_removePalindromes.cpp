#include<iostream>
using namespace std;


void removePalindromes(string arr[], int size){

    int size_Str;
    for(int i = 0; i < size; i = i + 1){

        bool flag = true;
        string str = arr[i];
        size_Str = str.length();

        for(int j = 0; j < size_Str; j = j + 1){   //making the Upercase to lowercase.
            if(str[j] >= 'A' && str[j] <= 'Z'){
                str[j] = str[j] + 32;
            }
        }
        
        //cout<<str<<endl;
        //cout<<"size ="<<size_Str<<endl;
        for(int k = 0; k < size_Str; k = k + 1){ //checiking its paliondrome or not;
            
            if(str[k] != str[size_Str-1-k]){
                //cout<<str[k]<<" != "<<str[size_Str-1-k]<<endl;
                flag = false;
                break;
            }
            //cout<<str[k]<<" = "<<str[size_Str-1-k]<<endl;
        
        }

        if(flag == true){ //replacing the arr[i] to " " if its paliondrome;
            arr[i] = "/";
        }
    }

}


/*
char make_Lowercase(char ch){
    if(ch == ' '){
        return ch;
    }
    else if( ch >= 'A' && ch <= 'Z'){
        ch = ch + 32;
        return ch;
    }
    return ch;
}
bool is_Palindrome(string str){
    bool flag = true;
    int size = str.length();
    cout<<str<<endl;
    cout<<"size ="<<size<<endl;
    for(int i = 0; i <= (size-1); i = i + 1){
        
        if(make_Lowercase(str[i]) != make_Lowercase(str[size-1-i]) ){
            cout<<str[i]<<" "<<str[size-1-i]<<endl;
            flag = false;

        }
        
    }
    cout<<endl;
    return flag;
}
void removePalindromes(string arr[], int size){
    for(int i = 0; i < size; i = i + 1){
        if(is_Palindrome(arr[i])){
            arr[i] = "/";
        }
    }

}
*/
int main()
{
    string array[]={"madam", "raceCAR", "", "hi", "A", "Abba", "banana", "dog God", "STOP otto POTS", "Madame", "C++", "LevEL", "staTS"};
    removePalindromes(array, 13);
    for(int i = 0; i < 13; i = i + 1){
        cout<<array[i]<<" ";
    }

    return 0;
}