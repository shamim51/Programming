#include <iostream>
using namespace std;

void initialize_character_array(char[],int);//initialize all location to null
int input_character_array(char[]);//getting input for character array and returning string length

int is_vowel(char);//checking is a character is vowel or not
int count_vowels(char[],int);

int main()
{
    char str[100];
    int n,i,v_count;

    initialize_character_array(str,100);
    n=input_character_array(str);//n is length....

    cout<<"length of the string is: "<<n<<endl;


    /*if(is_vowel(str[2])==0){
        cout<<"'"<<str[2]<<"'"<<" is not a vowel";
    }
    else{
        cout<<"'"<<str[2]<<"'"<<" is a vowel";
    }

    //cout<<i;*/
    v_count = count_vowels(str,n);

    cout<<"there are "<<v_count<<" vowel/vowels in this string";

    return 0;
}

int count_vowels(char c[], int length){
    int i,count;
    count=0;
    for(i=0;i<length;i=i+1){
        if(is_vowel(c[i])==1){
            count=count+1;
        }
    }
    return count;


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
