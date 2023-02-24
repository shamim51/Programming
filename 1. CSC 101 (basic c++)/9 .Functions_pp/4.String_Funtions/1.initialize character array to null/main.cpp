#include <iostream>
using namespace std;

void initialize_character_array(char[],int);

int main()
{
    char str[100];

    initialize_character_array(str,100);

    return 0;
}
void initialize_character_array(char c[],int n){

    int i;
    for(i=0;i<n;i=i+1){
        c[i]='\0';
    }

}
