#include <iostream>
using namespace std;

void initialize_character_array(char[],int);
int input_character_array(char[]);

int is_equal_cherecter_array(char[], char[],int);

int main()
{
    char str_1[100], str_2[100];

    int equality, n;

    initialize_character_array(str_1,100);
    initialize_character_array(str_2,100);

    n=input_character_array(str_1);
    input_character_array(str_2);

    cout<<n<<endl;

    equality = is_equal_cherecter_array(str_1, str_2, n);

    if(equality==1){
        cout<<"they both are equal";
    }
    else{
        cout<<"they are not equal";
    }

    return 0;
}

int is_equal_cherecter_array(char a[], char b[], int l){
    int i, flag;
    flag=1;
    for(i=0;i<l;i=i+1){
        if(a[i]!=b[i]){
            flag=0;
            break;
        }
    }
    return flag;
}





/*int is_equal_cherecter_array(char a[], char b[], int l){
    int i, A;
    A=0;
    for(i=0;i<l;i=i+1){
        if(a[i]==b[i]){
            A=A+1;
        }
    }
    if(A==l){
        return 1;
    }
    else{
        return 0;
    }


}
*/


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
