#include <iostream>
using namespace std;

void print_1D(int [],int);

void initialize_character_array(char[],int);//initialize all location to null
int input_character_array(char[]);//getting input for character array and returning string length

int is_vowel(char);//checking is a character is vowel or not
int find_vowels_putlocation_1D(char[], int, int []);

int main()
{
    char str[100];
    int l[100], n,i,v_count;

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

    v_count = find_vowels_putlocation_1D(str, n, l );

    cout<<"there are "<<v_count<<" vowel/vowels in this string"<<"and their locations are: ";\

    print_1D(l, v_count);

    cout<<"and the vowels are: ";

    for(i=0;i<v_count;i=i+1){ //this function will print all the vowels

        cout<<str[l[i]]<<" ";
    }


    return 0;
}

void print_1D(int x [],int n){
    int i;
    for(i=0;i<n;i=i+1){
        cout<<x[i]<<" ";
    }
    cout<<endl;

}


int find_vowels_putlocation_1D(char c[], int length, int l[]){
    int i,count;
    count=0;
    for(i=0;i<length;i=i+1){
        if(is_vowel(c[i])==1){
            l[count]=i;
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
