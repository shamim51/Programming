#include <iostream>
using namespace std;

void initialize_character_array(char[],int);

int input_encoder(char[]);
void input_decoder(char[],int);

void encoder(char[], int, int[]);
void decoder(char [], int , int []);

int main()
{
    char str_1[100] ;
    int enc_1[100],enc_2[100], n;

    initialize_character_array(str_1,100);

    n=input_encoder(str_1);

    encoder(str_1, n, enc_1);


    input_decoder(str_1,n);

    return 0;

}

void decoder(char ch [], int n, int x[]){

}

void encoder(char ch [], int n, int x[]){
    int i;
    for(i=0;i<n;i=i+1){
        ch[i]=x[i];
    }



}


void input_decoder(char c[], int n){

    int i;
    cout<<"Enter the string for decoding: ";
    cin>>c;
    for(i=0;i<100;i=i+1){
        if(c[i]=='\0'){
            break;
        }
    }

}


int input_encoder(char c[]){

    int i;
    cout<<"Enter the string for encoding: ";
    cin>>c;
    for(i=0;i<100;i=i+1){
        if(c[i]=='\0'){
            break;
        }
    }
    return i;
}


void initialize_character_array(char c[],int n){

    int i;
    for(i=0;i<n;i=i+1){
        c[i]='\0';
    }

}

