#include <iostream>
using namespace std;

void print_all_line(char ,char, int);
void print_line(char ,int );
int main()
{
    int n;
    char ls,rs;

    cout<<"How many lines:";
    cin>>n;

    cout<<"Left symbol:";
    cin>>ls;

    cout<<"Right symbol:";
    cin>>rs;

    print_all_line(ls, rs, n);


    return 0;
}
void print_line(char c ,int n){

    int i, j;
    for(i=0;i<n;i++){
        for(j=1;j<=n-i;j=j+1){
            cout<<c;

        }
        cout<<endl;
    }


}

void print_all_line(char c ,char t, int n){

    print_line(c , n);

    int i, j;
    for(i=0;i<n;i++){

        for(j=1;j<=i;j++){

            cout<< " ";

        }
        for(j=1;j<=i;j++){

            cout<< " ";

        }

    }
    print_line(t ,n);

}
