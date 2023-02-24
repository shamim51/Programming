#include <iostream>
using namespace std;

void initialize_character_array(char[],int);
int input_character_array(char[]);

int is_paliondrom(char[],int);


int main()
{
    char str[100];
    int c,paliondrom;

    initialize_character_array(str,100);
    c=input_character_array(str);

    paliondrom=is_paliondrom(str,c);

    if(paliondrom==1){
        cout<<"the number is paliondrom";
    }
    else{
        cout<<"the number is not paliondrom";
    }

    //print_1D(k,count);
    //print_backward(x,count);

    return 0;
}

int is_paliondrom(char c[], int n){
    int i,p;
    p=1;
    for(i=0;i<n;i=i+1){
        if(c[i]!=c[n-1-i]){
            p=0;
        }
    }
    return p;

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

