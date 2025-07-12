#include <iostream>
using namespace std;

void initialize_character_array(char[],int);
int input_character_array(char[]);

void reverse_order(char[],int,char[]);


int main()
{
    char str[100],str1[100];
    int m, n;

    initialize_character_array(str,100);
    initialize_character_array(str1,100);

    n=input_character_array(str);

    reverse_order(str, n, str1);


    return 0;
}

void reverse_order(char x[],int n,char z[]){
    int i, j;
    for(i=0;i<n;i=i+1){
        for(j=0;j<n;j=j+1){
            if(x[j]!='_'){
                z[j]=x[j];
                cout<<z[j];
            }
            else{
                cout<<" ";
            }

        }
        initialize_character_array(z,100);

    }

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
