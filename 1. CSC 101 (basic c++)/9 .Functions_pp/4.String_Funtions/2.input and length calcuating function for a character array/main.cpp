#include <iostream>
using namespace std;

void initialize_character_array(char[],int);
int input_character_array(char[]);


int main()
{
    char str[100];
    int n;

    initialize_character_array(str,100);
    n=input_character_array(str);

    cout<<n;

    return 0;
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
