#include <iostream>
using namespace std;

void initialize_character_array(char[],int);//initialize all location to null
int input_character_array(char[]);//getting input for character array and returning string length
int is_vowel(char);//checking is a character is vowel or not


int main()
{
    char str[100];
    int n,i;

    initialize_character_array(str,100);
    n=input_character_array(str);

    cout<<"length of the string is: "<<n<<endl;

    if(is_vowel(str[2])==0){
        cout<<"'"<<str[2]<<"'"<<" is not a vowel";
    }
    else{
        cout<<"'"<<str[2]<<"'"<<" is a vowel";
    }

    //cout<<i;

    return 0;
}

int is_vowel(char c){
    int v=0;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        v=1;
    }

    return v;
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
