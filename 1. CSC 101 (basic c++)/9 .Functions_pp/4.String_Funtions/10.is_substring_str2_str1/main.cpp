#include <iostream>
using namespace std;

void print_1D(int [],int);

void initialize_character_array(char[],int);
int input_character_array(char[]);

int is_substring(char [], int ,char [], int, int[]);

int main()
{
    char str1[100], str2[100];
    int ind[10], m, n, count;

    initialize_character_array(str1,100);
    initialize_character_array(str2,100);

    m=input_character_array(str1);
    n=input_character_array(str2);

    count = is_substring(str1, m, str2, n, ind);

    cout<<count<<endl;

    if(count==0){
        cout<<str2<<" is not a substring of "<<str1<<endl;
    }
    else{
        cout<<str2<<" is a substring of "<<str1<<endl;
    }

    cout<<"and the locations are:";

    print_1D(ind, count);

    return 0;
}


int is_substring(char s1[], int s1n ,char s2[], int s2n, int index[]){

    int i, j, flag, count;

    count=0;
    for(i=0;i<=s1n-s2n;i=i+1){
        flag=1;
        for(j=0;j<s2n;j=j+1){
            if(s1[i+j]!=s2[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            index[count]=i;
            count = count + 1;
        }
    }


    return count;

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

void print_1D(int x [],int n){
    int i;
    for(i=0;i<n;i=i+1){
        cout<<x[i]<<" ";
    }
    cout<<endl;

}

