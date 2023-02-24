#include <iostream>
using namespace std;

void initialize_character_array(char[],int);
int input_character_array(char[]);

int char_digit_int(char);
int add_string(char[],int,char[],int,char[]);


int main()
{
    int len_a, len_b;
    char a[100], b[100], c[100];

    initialize_character_array(a,100);
    initialize_character_array(b,100);
    initialize_character_array(c,100);


    len_a=input_character_array(a);
    len_b=input_character_array(b);



    return 0;
}

int add_string(char x[],int l1, char y[],int l2, char z[]){

    int c, s, i, j;
    if(l2-l1){
        c=0;
        j=l2-1;
        for(i=l1-1;i>=0;i=i-1){
            if(j>=0){
                s=char_digit_int(x[i])+char_digit_int(y[j])+c;
            }
            else{
                s=char_digit_int(x[i])+c;
            }
            c=s/10;
            s=s%10;
            z[i]=int_digit_char(s);
            j=j-1;
        }

    }
    esle{
        c=0;
        j=l1-1;
        for(i=l2-1;i>=0;i=i-1){
            if(j>=0){
                s=char_digit_int(y[i])+char_digit_int(x[j])+c;
            }
            else{
                s=char_digit_int(y[i])+c;
            }
            c=s/10;
            s=s%10;
            z[i]=int_digit_char(s);
            j=j-1;
        }

    }


}

int int_digit_char(int x){
    char c;
    c=x+'0';

    return c;
}

int char_digit_int(char c){
    int i;
    i=c-'0';

    return i;
};


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
