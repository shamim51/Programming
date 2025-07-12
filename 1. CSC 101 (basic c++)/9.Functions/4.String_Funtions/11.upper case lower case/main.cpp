#include <iostream>
using namespace std;

void initialize_character_array(char[],int);

int input_character_array(char[]);

char uppercase2lowercase( char );

char lowercase2uppercase( char );

int is_uppercase( char );

int is_lowercase(char);

void make_uppercase( char[] , int);

int main()
{
    char str[100] ;
    int  n ;

    initialize_character_array(str , 100);

    n = input_character_array( str); // the length no of the string

    cout << "Normal string: " << str;

    //lowercase2uppercase

    make_uppercase( str , n );

    cout << "After changing :  " << str;


    return 0;
}

void make_uppercase( char s[] , int length){

    int i;

    for( i = 0 ; i <length ; i = i + 1){

        if(is_lowercase( s[i] )  == 1){

             s[i] = s[i] - 32;




        }
        else{

                s[i] = s[i] + 32;
        }


    }
}
char lowercase2uppercase( char c){


    c = c - 32 ;

    return c;
}

char uppercase2lowercase( char c){


    c = c + ( 'a' - 'A');

    return c;
}

int is_lowercase( char c){

    int flag;
    flag = 0;

    if( c >= 'a' && c <= 'z'){
        flag = 1;
    }
    return flag;
}

int is_uppercase( char c){


    int flag;
    flag = 0;

    if( c >= 'A' && c <= 'Z'){
        flag = 1;
    }
    return flag;

}

void initialize_character_array(char c[],int n){
    int i;
    for(i=0 ; i<n ; i=i+1){
        c[i]='\0';
    }
}

int input_character_array(char c[]){
    int length;

    cout<< "enter a string: ";
    cin>>c;

    for(length=0; length<100 ; length=length+1){
        if(c[length]=='\0'){
            break;
        }
    }
    return length;

}

