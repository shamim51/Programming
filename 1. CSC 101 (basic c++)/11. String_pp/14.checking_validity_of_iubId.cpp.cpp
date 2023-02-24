#include <iostream>
using namespace std;

void initialize_character_array(char[],int);
int input_character_array(char[]);

int is_digit(char);

int validity_of_id(char [], int);

int main()
{
    char str[100];
    int n;

    initialize_character_array(str,100);
    n=input_character_array(str);


    if(validity_of_id(str, n)==1){

        cout<<"id is valid";
    }
    else{
        cout<<"id is not valid";
    }
    //cout<<n;

    return 0;
}

int validity_of_id(char id[], int n){
    int i, flag;
    flag=0;
    if(n==7){
        flag=1;

        for(i=0;i<n;i=i+1){
            if(is_digit(id[i])==0){
                flag=0;
                break;
            }
        }
    }
    return flag;
}

int is_digit(char c){
    int d;
    d=0;
    if(c>='0'&&c<='9'){
        d=1;
    }
    return d;
}

int input_character_array(char c[]){

    int i;
    cout<<"enter a string: ";
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
