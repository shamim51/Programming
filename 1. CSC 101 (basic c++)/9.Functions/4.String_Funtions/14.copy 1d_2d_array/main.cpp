#include <iostream>
using namespace std;

void initialize_character_array(char[],int);
int input_character_array(char[]);
void input_char_array_2d_from_1d(char [100][100], int, char[]);

int main()
{
    char name[100][100];
    int row;

    cout<<"how many rows:";
    cin>>row;

    input_char_array_2d_from_1d(name, row);


    return 0;
}
void input_char_array_2d_from_1d(char name[100][100], row){

    int i, j, length;
    char str[100];

    for(j=0;j<n;j=j+1){
        initialize_character_array(str,100);
        length = input_character_array(str);
        for(i=0;i<length;i=i+1){
            name[j][i]=str[i];

        }
    }



}


void initialize_character_array_2d(char c[100][100], int r, int c){

    int i, j;
    for(j=0;j<r;j=j+1){
        for(i=0;i<c;i=i+1){
            c[j][i]='\0';
        }

    }

}


void initialize_character_array(char c[],int n){

    int i;
    for(i=0;i<n;i=i+1){
        c[i]='\0';
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

