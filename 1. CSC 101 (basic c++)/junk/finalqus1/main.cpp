#include <iostream>
using namespace std;

void print_line(char ,char, int);

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

    print_line(ls,rs, n);


    return 0;
}

void print_line(char c ,char t, int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=1;j<=n-i;j++){
            cout<<c;
        }
        for(j=1;j<=i;j++){

            cout<< " ";

        }
        for(j=1;j<=i;j++){

            cout<< " ";

        }
        for(j=1;j<=n-i;j++){
            cout<<t;

        }
        cout<<endl;

    }

}
