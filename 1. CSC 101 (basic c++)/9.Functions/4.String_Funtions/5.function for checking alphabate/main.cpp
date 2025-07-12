#include <iostream>
using namespace std;

void initialize_character_array(char[],int);
int input_character_array(char[]);

int is_alphabate(char);

int main()
{
    char str[100];
    int n;

    initialize_character_array(str,100);
    n=input_character_array(str);

    cout<<n<<endl;

    if(is_alphabate(str[2])==1){
        cout<<"'"<<str[2]<<"'"<<" is a alphabate";
    }
    else{
        cout<<"'"<<str[2]<<"'"<<"is not a alphabate";
    }

    return 0;
}

int is_alphabate(char c){
    int a;
    a=0;
    if(c>='A'&&c<='Z'||c>='a'&&c<='z'){
        a=1;
    }
    return a;
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
